#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include <unistd.h>   //_getch
#include <termios.h>  //_getch
#include <string.h>
#include "../mylib.h"

void writescore(float score, char plnm[20])
 {
 float sc;
 char nm[20];
 FILE *f;
 system("clear");
 f=fopen("../lib/score.txt","r");
 fscanf(f,"%19s%f",nm,&sc);
 if (score>=sc)
   { sc=score;
     fclose(f);
     f=fopen("../lib/score.txt","w");
     fprintf(f,"%s\n%.2f",plnm,sc);
     fclose(f);
   }
 }

void displayscore()
 {
 char name[20];
 float s;
 FILE *f;
 system("clear");
 f=fopen("../lib/score.txt","r");
 fscanf(f,"%19s%f", name, &s);
 printf("\n\n\t\t ");
 printf("\n\n\t\t %s has secured the Highest Score %.2f",name,s);
 printf("\n\n\t\t ");
 fclose(f);
 getch();
 }
