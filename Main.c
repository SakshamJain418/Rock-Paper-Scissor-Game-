#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int you,computer;
int menu()
{
    int choice;
    printf("\n1.Select Rock");
    printf("\n2.Select Paper");
    printf("\n3.Select Scissor");
    printf("\n4.Exit");
    printf("Enter Your Choice");
    scanf("%d",&choice);
    return(choice);
}
void SetUp()
{
    label:
    computer=rand()%4;
    if(computer==0)
        goto label;
        you=menu();
}
void MakeLogic()
{
    switch(you)
    {
    case 1:
        if(computer==1)//you=rock,computer=rock;
        {
            printf("\nGame Draw");
            printf("\nyou=Rock\ncomputer=Rock");
        }
        else if(computer==2)//you=rock,computer=paper;
        {
            printf("\nComputer Won");
            printf("\nyou=Rock\ncomputer=paper");
        }
        else//you=rock,computer=scissor;
        {
            printf("\nYou Won");
            printf("\nyou=Rock\ncomputer=scissor");
        }
        break;
    case 2:
       if(computer==1)//you=paper,computer=rock;
        {
            printf("\nYou Won");
            printf("\nyou=paper\ncomputer=Rock");
        }
        else if(computer==2)//you=paper,computer=paper;
        {
            printf("\nGame Draw");
            printf("\nyou=paper\ncomputer=paper");
        }
        else//you=paper,computer=scissor;
        {
            printf("\nComputer Won");
            printf("\nyou=paper\ncomputer=scissor");
        }
        break;
    case 3:
        if(computer==1)//you=scissor,computer=rock;
        {
            printf("\nComputer Won");
            printf("\nyou=scissor\ncomputer=Rock");
        }
        else if(computer==2)//you=scissor,computer=paper;
        {
            printf("\nYou Won");
            printf("\nyou=scissor\ncomputer=paper");
        }
        else//you=scissor,computer=scissor;
        {
            printf("\nGame Draw");
            printf("\nyou=scissor\ncomputer=scissor");
        }
        break;
    case 4:
        exit(0);
    default:
        printf("\nInvalid Choice");
    }
}
int main()
{
    while(1)
    {
        system("cls");
        SetUp();
        MakeLogic();
        getch();
    }
    return 0;
}
