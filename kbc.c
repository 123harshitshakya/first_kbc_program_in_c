#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void question1();
void question2();
void question3();
void question4();
void question5();
void question6();
void question7();


int main()
{
    int i;
    printf("\t\t\t\t\t*Kaun banega crorepati*\n\n");
        while(1)
    {
    for(i=1;i<10;i++)
    switch(i)
    {
        case 1: question1();
                 break;
        case 2: question2();
                 break;
        case 3: question3();
                 break;
        case 4: question4();
                 break;
        case 5: question5();
                  break;
        case 6: question6();
                 break;
        case 7:  question7();
                  break;
    }
}
}
 void question1()
 {
     int c;
    printf("Que 1.What is the name of prime minister\n\n");
    printf(" 1 Rahul gandhi\t\t 2 Narendra modi\n 3 Arun jateli\t\t 4 Yogi adityanath\n");
    while(c!=2)
    {
    printf("Enter the choice\n");
    scanf("%d",&c);
    if(c==2)
    {
      printf("*Correct answer*\n");
      printf("You have win 5000$\n\n");
    }
    else
    {
       printf("Wrong answer\n");
    }
    }
   /* while(c!=2)
    {
    printf("Enter the choice\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1: printf("Wrong answer\n");
                break;
        case 2: printf("*Correct answer*\n");
                printf("You have win 5000$\n\n");
                break;
        case 3: printf("Wrong answer\n");
                break;
        case 4: printf("Wrong answer\n");
                break;
    }
    }*/
}
void question2()
{
int c;
printf("Que 2.What is the name of national bird in india\n");
printf(" 1 Crow\t\t\t 2 Hen\n 3 Peacock\t\t 4 Parrot\n");
 while(c!=3)
    {
    printf("Enter the choice\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1: printf("Wrong answer\n");
                break;
        case 2: printf("*Wrong answer*\n");
                break;
        case 3: printf("Correct answer\n");
                printf("You have win 10000$\n\n");
                break;
        case 4: printf("Wrong answer\n");
                break;
    }
    }
}
void question3()
{
  int c;
printf("Que 3.Who is the father of c programming\n");
printf(" 1 Dennish richtie\t 2 Harshit shakya\n 3 John backus\t\t 4 Kathleen booth\n");
 while(c!=1)
    {
    printf("Enter the choice\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1: printf("Correct answer\n");
                printf("You have win 15000$\n\n");
                break;
        case 2: printf("*Wrong answer*\n");
                break;
        case 3: printf("Wrong answer\n");
                break;
        case 4: printf("Wrong answer\n");
                break;
    }
    }
}
void question4()
{
   int c;
printf("Que 4.Who is the father of computer\n");
printf(" 1 Dennish richtie\t\t 2 Vint cerf\n 3 Charles babbage\t\t 4 John wick\n");
 while(c!=3)
    {
    printf("Enter the choice\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1: printf("Wrong answer\n");
                break;
        case 2: printf("*Wrong answer*\n");
                break;
        case 3: printf("Correct answer\n");
                printf("You have win 20000$\n\n");
                break;
        case 4: printf("Wrong answer\n");
                break;
    }
    }
}
void question5()
{
       int c;
printf("Que 5.Who is the father of internet\n");
printf(" 1 Dennish richtie\t\t 2 Vint cerf\n 3 Charles babbage\t\t 4 John wick\n");
 while(c!=2)
    {
    printf("Enter the choice\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1: printf("Wrong answer\n");
                break;
        case 2: printf("*correct answer*\n");
                printf("You have win 25000$\n\n");
                break;
        case 3: printf("Wrong answer\n");
                break;
        case 4: printf("Wrong answer\n");
                break;
    }
    }
}
void question6()
{
        int c;
printf("Que 6.What is the name of holy river in india\n");
printf(" 1 Ganga\t\t 2 saraswati\n 3Yamuna\t\t 4 bharamputra\n");
 while(c!=1)
    {
    printf("Enter the choice\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1: printf("Correct answer\n");
                printf("You have win 30000$\n\n");
                break;
        case 2: printf("*Wrong answer*\n");
                break;
        case 3: printf("Wrong answer\n");
                break;
        case 4: printf("Wrong answer\n");
                break;
    }
    }
}
void question7()
{
         int c;
printf("Que 7.Who is the first object oriented programming language\n");
printf(" 1 Java\t\t 2 c\n 3 c++\t\t 4 python\n");
 while(c!=3)
    {
    printf("Enter the choice\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1: printf("Wrong answer\n");
                break;
        case 2: printf("*Wrong answer*\n");
                break;
        case 3: printf("Correct answer\n");
                printf("You have win 35000$\n\n");
                break;
        case 4: printf("Wrong answer\n");
                break;
    }
    }
}
