#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>

void displayscore()
 {
 char name[20];
 float s;
 FILE *f;
 system("cls");
 f=fopen("score.txt","r");
 fscanf(f,"%s%f",&name,&s);
 fclose(f);
 getch();
 }

void writescore(float score, char plnm[20])
 {
 float sc;
 char nm[20];
 FILE *f;
 system("cls");
 f=fopen("score.txt","r");
 fscanf(f,"%s%f",&nm,&sc);
 if (score>=sc)
   { sc=score;
     fclose(f);
     f=fopen("score.txt","w");
     fprintf(f,"%s\n%.2f",plnm,sc);
     fclose(f);
   }
 }
int main()
{
	int countq,countr;
    int r,i,choice;
    int pa;int nq[6];int w;
    float score;
    char playername[20];
    time_t initialtime,finaltime;
    system("cls");
    
    //Quiz Welcome Screen
	mainhome:
	printf("\n=====================================");
	printf("\n    Welcome to simple quiz game.");
	printf("\n=====================================");
    choice:
    printf("\n\n\nYour options:\n 1) Starts The Quiz \n 2) Exit \n");
	scanf("%d",&choice);
		
	if (choice==2)
	return 0;
    else if(choice==1){
     system("cls");

     printf("\n\n\n\t\t\tEnter your name...");
     printf("\n\t\t\t(only one word)\n\n\t\t\t");
     gets(playername);

     home:
     system("cls");
     initialtime=time(NULL);
     countq=countr=0;
     i=1;
     start:
     srand ( time(NULL) );
     r=rand()%23+1;
     nq[i]=r;
     for (w=0;w<i;w++)
 if (nq[w]==r) goto start;

     switch(r)
  {
  case 1:
  printf("\n\nWhat is the maximum no. of asymptotes of the curve x^4+2x+6=0?");
  printf("\n\nA.4\tB.3\n\nC.none\tD.infinite\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.4");break;}

  case 2:
  printf("\n\n\nHow many points are possible in a compound pendulum about which");
  printf("time period is same?");
  printf("\n\nA.4\tB.2\n\nC.none\tD.infinite\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         printf("\n\nWrong!!! The correct answer is A.4");
  break;

  case 3:
  printf("\n\n\nWho was the first US President?");
  printf("\n\nA.Richard Nikson\tB.Abraham Linkon\n\nC.John F. Kennedy\tD.George Washington\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.George Washington");break;}


  case 4:
  printf("\n\n\nWho was awarded the 'Man of the Tournament' of ICC WORLD CUP 2007?");
  printf("\n\nA.Glen Magrath\tB.Mahela Jawardan\n\nC.Mathew Hayden\tD.Sachin Tendulkar\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Glen Magrath");break;}


  case 5:
  printf("\n\n\nWhich country won the Fifa World Cup 1998?");
  printf("\n\nA.France\tB.Brazil\n\nC.Italy\tD.England\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.France");break;}

  case 6:
  printf("\n\n\nWhich syllabe is stressed in the word 'democracy'?");
  printf("\n\nA.1st\tB.2nd\n\nC.3rd\tD.4th\n\n");
  countq++;
  if (toupper(getch())=='B' )
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.2nd");break;}


  case 7:
  printf("\n\n\nWhich country was the winner of Cricket World Cup 1987?");
  printf("\n\nA.West Indies\tB.India\n\nC.Australia\tD.England\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Australia");break;}


  case 8:
  printf("\n\n\nWhat is the height of Mount everest in feet?");
  printf("\n\nA.8648\tB.6648\n\nC.8884\tD.8848\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.8848");break;}


  case 9:
  printf("\n\n\nWhat is the capital of Denmark?");
  printf("\n\nA.Copenhagen\tB.Helsinki\n\nC.Rome\t\tD.Madrid\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Copenhagen");break;}


  case 10:
  printf("\n\n\nWhich syllabe is stressed in the word 'instanteneous'?");
  printf("\n\nA.1st\tB.2nd\n\nC.3rd\tD.4th\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.3rd");break;}


  case 11:
  printf("\n\n\nWho was the only player to score 6 successive sixes in an over?");
  printf("\n\nA.Adam Gilchrist\tB.M.S.Dhoni\n\nC.Herschel Gibbs\tD.Sanath Jayasurya\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Herschel Gibbs");break;}

  case 12:
  printf("\n\n\nWho was the only player to take 4 successive wickets?");
  printf("\n\nA.Malinga Bandara\tB.Lasith Malinga\n\nC.Bret Lee\tD.Murali Daran\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Lasith Malinga");break;}

  case 13:
  printf("\n\n\nWhich country is hosting the Fifa World Cup 2010?");
  printf("\n\nA.South Africa\tB.Italy\n\nC.Argentina\tD.Spain\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.South Africa");break;}

  case 14:
  printf("\n\n\nWho is the author of 'Pulpasa Cafe'?");
  printf("\n\nA.Narayan Wagle\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\tD.Khagendra Sangraula\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Narayan Wagle");break;}

  case 15:
  printf("\n\n\nWhich country is Maria Sarapova from?");
  printf("\n\nA.Russia\tB.Switzerland\n\nC.Argentina\tD.Spain\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Russia");break;}

  case 16:
  printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
  printf("\n\nA.Wayne Rooney\tB.Lucas Podolski\n\nC.Lionel Messi\tD.Christiano Ronaldo\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Lucas Podolski");break;}


  case 17:
  printf("\n\n\nWhat is the smallest district of Nepal?");
  printf("\n\nA.Lalitpur\tB.Karnali\n\nC.Bhaktapur\tD.Gulmi\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Bhaktapur");break;}

  case 18:
  printf("\n\n\nWhat is the headquarter of Western Development Region?");
  printf("\n\nA.Dhankuta\tB.Kathmandu\n\nC.Dhangadhi\tD.Pokhara\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Pokhara");break;}

  case 19:
  printf("\n\n\nWhich place is called 'The Cherrapunji of Nepal'?");
  printf("\n\nA.Dharan\tB.Kathmandu\n\nC.Pokhara\tD.Butwal\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Pokhara");break;}

  case 20:
  printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
  printf("\n\nA.Rome\tB.Vactican City\n\nC.Madrid\tD.Berlin\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Rome");break;}

  case 21:
  printf("\n\n\nWho was the F1 racing champion of 2006?");
  printf("\n\nA.Louis Hamilton\tB.Felipe Massa\n\nC.Fernando Alonso\tD.Michael Schumaker\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Fernanda Alonso");break;}

  case 22:
  printf("\n\n\nWho won the Women Australian Open 2007?");
  printf("\n\nA.Martina Hingis\tB.Maria Sarapova\n\nC.Kim Clijster\tD.Serena Williams\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Serena Williams");break;}

  case 23:
  printf("\n\n\nName the country where there no mosquito is found?");
  printf("\n\nA.Germany\tB.Spain\n\nC.Japan\tD.France\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.France");break;}



  }
 i++;
 if (i<=10) goto start;
 finaltime=time(NULL);
 score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
 if (score<0) score=0;
 printf("\n=====================================");
 printf("\n\n\nYour Score: %.2f out of 100.",score);
 if (score==100) printf("\n\nEXCELLENT!!! KEEP IT UP");
 else if (score>=80 && score<100) printf("\n\nVERY GOOD!!");
 else if (score>=60 &&score<80) printf("\n\nGOOD! BUT YOU NEED TO KNOW MORE.");
 else if (score>=40 && score<60) printf("\n\nSATISFACTORY RESULT.");
 else printf("\n\nWORK HARD");
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
 Sleep(700);
 goto mainhome;
 }
 return 0;
}
