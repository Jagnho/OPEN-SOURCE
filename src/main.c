#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include <unistd.h>   //_getch
#include <termios.h>  //_getch
#include <string.h>
#include "../include/getch.h"
#include "../lib/mylib.h"
#include "project.h"

void help()
 {
 system("clear");
 printf("\n\n\n\tThis game is very easy to play. You'll be asked some general");
 printf("\n\n\tknowledge questions about OS Software Engineering and the right answer is to be chosen among");
 printf("\n\n\tthe four options provided. Your score will be calculated at the");
 printf("\n\n\tend. Remember that the more quicker you give answer the more");
 printf("\n\n\tscore you will secure. Your score will be calculated and displayed");
 printf("\n\n\tat the end and displayed. If you secure highest score, your score");
 printf("\n\n\twill be recorded. So BEST OF LUCK.");
 }


int main(){
     int countq,countr;
     int r,i;
     int pa;
     int nq[6];int w;
     float score;
     char choice;
     char playername[20];
     time_t initialtime,finaltime;
     //randomize();
	
	system("bash +x ../src/title.sh");
	
     mainhome:
     system("clear");
     puts("\n\t\t WELCOME TO 'Open-Source Engineering Class' TEST PROGRAM\n\n") ;
     puts("\n\t\t-------------------------------");
     puts("\n\t\t Enter 'S' to start game       ");
     puts("\n\t\t Enter 'V' to view high score  ");
     puts("\n\t\t Enter 'H' for help            ");
     puts("\n\t\t Enter 'Q' to quit             ");
     printf("\n\t\t-------------------------------\n\n\t\t  ");
     choice=toupper(getch());
     if (choice=='V')
 {
 displayscore();
 goto mainhome;
 }
     else if (choice=='Q')
 exit(1);
     else if (choice=='H')
 {
 help();
 getch();
 goto mainhome;
 }
    else if(choice=='S'){
     system("clear");

     printf("\n\n\n\t\t\tEnter your name...");
     printf("\n\t\t\t(only one word)\n\n\t\t\t");
     fgets(playername, 19, stdin);

     home:
     system("clear");
questions(r, countq, countr, initialtime, finaltime, nq, w, i);


 score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
 if (score<0) score=0;
 printf("\n\n\nYour Score: %.2f",score);
 if (score==100) printf("\n\nEXCELLENT!!! KEEP IT UP");
 else if (score>=80 && score<100) printf("\n\nVERY GOOD!!");
 else if (score>=60 &&score<80) printf("\n\nGOOD! BUT YOU NEED TO KNOW MORE.");
 else if (score>=40 && score<60) printf("\n\nSATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");
 else printf("\n\nYOU ARE VERY POOR IN G.K.,WORK HARD");
 puts("\n\nNEXT PLAY?(Y/N)");
 if (toupper(getch())=='Y')
  goto home;
 else
  {
  writescore(score,playername);
  goto mainhome;
  }
}
     else
 {
 printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
 getch();
 goto mainhome;
 }

 return 0;
}
