#include "project.h"
#include <time.h>
#include <stdio.h>

void questions(int r, int countq, int countr, time_t initialtime, time_t finaltime, int nq[], int w, int i){
     initialtime=time(NULL);
     countq=countr=0;
     i=1;
     start:
     srand ( time(NULL) );
     r=rand()%11+1;
     nq[i]=r;
     for (w=0;w<i;w++)
 if (nq[w]==r) goto start;

     switch(r)
  {
  case 1:
  printf("\n\nWhich character describe that you openned Terminal as root?");
  printf("\n\nA.#\tB.$\n\nC.none\tD.&\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.#");break;}

  case 2:
  printf("\n\n\nWhich command shows all folders and files in current directory?");
  printf("\n\nA.ls\tB.cd\n\nC.cp\tD.show\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         printf("\n\nWrong!!! The correct answer is A.ls");
  break;

  case 3:
  printf("\n\n\nWho developed linux?");
  printf("\n\nA.Steve Jobs\tB.Bill Gates\n\nC.Steve Wozniak\tD.Linus Torvalds\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Linus Torvalds");break;}


  case 4:
  printf("\n\n\nWhich command in Terminal will create directory named 'Temp'?");
  printf("\n\nA.mkdir Temp\tB.makedirectory Temp\n\nC.cd Temp\tD.Temp\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.mkdir Temp");break;}


  case 5:
  printf("\n\n\nHow to create object file with same name without compiling with source file main.c?");
  printf("\nChoose right command for it");
  printf("\n\nA.gcc -c main.c\tB.gdb main.c\n\nC.gcc -o main.o\tD.gcc main.c main.o\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.gcc -c main.c");break;}

  case 6:
  printf("\n\n\nImagine that you compiled program test.exe with error");
  printf("\nYou want to debug it with gdb on specific line #15. Choose the right answer."); 
  printf("\n\nA. ./main bp 15\tB. ./main (enter) gdb main(enter) bp 15(enter) r\n\nC.bp 15 gdb main\tD.gdb main bp 15\n\n");
  countq++;
  if (toupper(getch())=='B' )
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.2nd");break;}


  case 7:
  printf("\n\n\nWhat is purpose of Make?");
  printf("\n\nA.To create object files\tB.To compile program\n\nC.To automatically make needed files for program\tD.To debug program\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.To automatically make needed files for program");break;}


  case 8:
  printf("\n\n\nWhat is name of OS Software Engineering Professor?");
  printf("\n\nA.Choi Oleg\tB.Jang-Ho Lee\n\nC.Professor\tD.Mun-Jeong Jang\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Mun-Jeong Jang");break;}



    case 9:
  printf("\n\n\nWhat is purpose of Make?");
  printf("\n\nA.To create object files\tB.To compile program\n\nC.To automatically make needed files for program\tD.To debug program\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.To automatically make needed files for program");break;}

    case 10:
  printf("\n\nWhich character describe that you openned Terminal as root?");
  printf("\n\nA.#\tB.$\n\nC.none\tD.&\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.#");break;}

  case 11:
  printf("\n\n\nWho developed linux?");
  printf("\n\nA.Steve Jobs\tB.Bill Gates\n\nC.Steve Wozniak\tD.Linus Torvalds\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Linus Torvalds");break;}

  }
	
	 i++;
 if (i<=5) goto start;
 finaltime=time(NULL);
}
