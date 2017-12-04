# FINAL PROJECT FOR OSS ENGINEERING CLASS
# OPEN-SOURCE SOFTWARE ENGINEERING QUIZ GAME

#NOTE1: This program can't be used in commercial way
#NOTE2: To test things that we learned in OSS Class we used 2 ways to build program: Make and CMake
#You can test your Open-Source Software Engineering knowledges through this simple OSS Engineering Quiz game

#This version is our lastly edited and currently working program on Linux Ubuntu. 

#VERSION 1.0.2:
#Added 'getch' function in program to run it in Linux (getch() doesn't exist in Linux libraries)
#Fixed issues with 'fgets' (error with user name input)
#Fixed issue with 'sleep' function
#Splitted main.c into two files: main.c and Questions.c
#Added library for write and display score and deleted that functions from main.c (not necessary but we wanted to test library creating)
#Added CMake to build program (option 1)
#Added Makefile to build program (option 2)

#Instructions:
###MAKE###
#To clean all object files and binaries in your Terminal type: make clean
#To create object files and make binaries in your Terminal type: make objects 
                                                           then: make
#To install program in your system directories type: make install
#To uninstall program: make uninstall

###CMAKE###
#To build your program via CMake you need to go into Quiz-1.0.2/build folder and type: cmake ..
#Then: make
#'cmake ..' will create everything that need for building your program (Makefiles, objects etc)
#'make' will run automatically created Makefile and create binary in current build folder




#LICENSE: BSD
