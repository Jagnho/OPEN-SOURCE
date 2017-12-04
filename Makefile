.PHONY: all clean install uninstall

##DEFINING TARGET NAME##
TARGET = Quiz
########################  

###GCC COMMAND BIND##
CC = gcc
#####################

################FLAGS FOR COMPILING##########################
flags = -Wall -I$(include_dir) -L$(library_dir) -lscore -o 
#############################################################

#####DEFINE DIRECTORIES#####
include_dir	:= include
source_dir	:= src
library_dir	:= lib
objects_dir	:= obj
bin_dir		:= bin
############################

##########DEFINE OBJECT NAMES############################
objs = $(objects_dir)/main.o $(objects_dir)/Questions.o
#########################################################

############BUILD##############################
all:     
	mkdir -p $(bin_dir)
	$(CC) $(objs) $(flags) bin/$(TARGET)
###############################################


###########CREATE OBJECTS##################################################
objects:
	mkdir -p $(objects_dir)
	$(CC) -c $(source_dir)/main.c -o $(objects_dir)/main.o
	$(CC) -c $(source_dir)/Questions.c -o $(objects_dir)/Questions.o
###########################################################################

install:
	sudo install $(bin_dir)/$(TARGET) $(DESTDIR)/usr/bin/Quiz

uninstall:
	sudo rm $(DESTDIR)/usr/bin/Quiz
######CLEAN BINARY AND OBJECTS##
clean:
	rm -rf bin obj
################################

######CLEAN OBJECT FILES#######
objectclean:
	rm -rf obj
################################

