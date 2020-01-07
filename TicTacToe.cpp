#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<cstdlib>
#include<ctime>

int Player_1_score=0;
int Player_2_score=0;
int Computer_score=0;

int Round=1;
int Switch1(char x[],char z[]);
int Switch2(char u[],char v[]);

int twoplayer(char a[],char b[]);
int oneplayer(char c[],char d[]);

int main()
{
    int ch,r;

    char Player_1[20];
    char Player_2[20];
    char Computer[20];


    printf("\n Do you want to play : \n 1. Against the computer \n 2. 2 player \n Enter the number accordingly  :  ");
    scanf("%d",&ch);


    printf("\n Enter your names : \n");
    printf("\n Player 1 (X) = ");
    scanf("%s",Player_1);
    if(ch==2)
       {
        printf("\n Player 2 (O) = ");
        scanf("%s",Player_2);
       }
    else
    {
        printf("\n Computer (O) = ");
        scanf("%s",Computer);

    }

    if(ch==2)
    twoplayer(Player_1,Player_2);
    if(ch==1)
    oneplayer(Player_1,Computer);





   return 0;
}



int twoplayer(char Player_1[],char Player_2[])
{


beginning : printf("\n Round : %d\n",Round);

    char check[10]={0,0,0,0,0,0,0,0,0,0};


    char disp[10]={0,1,2,3,4,5,6,7,8,9};
    char arr[10]={0,1,2,3,4,5,6,7,8,9};
    int i,y,z;
    int t;
    char prompt;

    int *pfa,*pfb;

    int fa=0,fb=0;


    pfa=&fa;
    pfb=&fb;



    printf("\n  %d  |  %d  |  %d  \n-----+-----+-----\n  %d  |  %d  |  %d  \n-----+-----+-----\n  %d  |  %d  |  %d  \n",
           disp[1],disp[2],disp[3],disp[4],disp[5],disp[6],disp[7],disp[8],disp[9]);

   // printf("\n %s(Player 1)  :  X  \n %s(Player 2)  :  O  \n",Player_1,Player_2);


    for(t=0;t<=10;t++)
      {
        arr[t]='_';
        check[t]='_';
       // printf("\n%c",arr[t]);
      }


    for(i=1;i<=5;i++)
    {
        //printf("\n Round :  %d \n",i);

ifinvalid1 : printf("\n %s \t",Player_1);
        scanf("\n %d",&y);
        if(check[y]=='_')
        {check[y]='X';
        arr[y]='X';}
        else
           {
            printf("\n Invalid position, try again ");
            goto ifinvalid1;
           }

        printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);


        if((arr[1]=='X'&&arr[2]=='X'&&arr[3]=='X')||
        (arr[1]=='X'&&arr[4]=='X'&&arr[7]=='X')||
        (arr[1]=='X'&&arr[5]=='X'&&arr[9]=='X')||
        (arr[2]=='X'&&arr[5]=='X'&&arr[8]=='X')||
        (arr[3]=='X'&&arr[6]=='X'&&arr[9]=='X')||
        (arr[4]=='X'&&arr[5]=='X'&&arr[6]=='X')||
        (arr[7]=='X'&&arr[8]=='X'&&arr[9]=='X')||
        (arr[3]=='X'&&arr[5]=='X'&&arr[7]=='X'))
        {
            printf("\n \t\t %s is the winner! \n",Player_1);
            Player_1_score++;
             fa=1;

             break;
        }
        if(i<5)
        {
 ifinvalid2 : printf("\n %s \t",Player_2);
        scanf("\n %d",&z);
        if(check[z]=='_')
        {check[z]='O';
        arr[z]='O';}
        else
           {
            printf("\n Invalid position, try again ");
            goto ifinvalid2;
           }

        printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);

   if((arr[1]=='O'&&arr[2]=='O'&&arr[3]=='O')||
        (arr[1]=='O'&&arr[4]=='O'&&arr[7]=='O')||
        (arr[1]=='O'&&arr[5]=='O'&&arr[9]=='O')||
        (arr[2]=='O'&&arr[5]=='O'&&arr[8]=='O')||
        (arr[3]=='O'&&arr[6]=='O'&&arr[9]=='O')||
        (arr[4]=='O'&&arr[5]=='O'&&arr[6]=='O')||
        (arr[7]=='O'&&arr[8]=='O'&&arr[9]=='O')||
        (arr[3]=='O'&&arr[5]=='O'&&arr[7]=='O'))
        {
            printf("\n \t\t %s is the winner! \n",Player_2);
            Player_2_score++;
            fb=1;

            break;
        }
         }

         // cout<<"\n"<<  arr[1]  <<"|"<<  arr[2]  <<"|"<<  arr[3]  <<"\n-----+-----+-----\n"<<  arr[4]  <<"|"<<  arr[5]  <<"|"<<  arr[6]  <<"\n-----+-----+-----\n"<<  arr[7]  <<"|"<<  arr[8]  <<"|"<<  arr[9]  <<"\n";
       //  printf("\n  %d  |  %d  |  %d  \n-----+-----+-----\n  %d  |  %d  |  %d  \n-----+-----+-----\n  %d  |  %d  |  %d  \n",
          //  arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);


          //FUNCTION


          }

    if(fa==0&&fb==0)
    printf("\n \t \t Draw");

    printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);


    Round++;
    int ffa;           //function flag for a;
    repeat : printf("\n Do you want to play again? y/n \n");
    scanf("%s",&prompt);



   /*
    if((prompt=='y'||prompt=='Y')/*&&fa==1*/

   /* {
        if(fa==1)
       goto beginning;

        if(fb==1)
        {
         Switch1(Round,Player_1,Player_2);

        }
    }
    else
    {
        printf("\n Thankyou for playing \n");
        printf("\n Final Score : \n %s = %d \n %s = %d \n",Player_1,Player_1_score,Player_2,Player_2_score);
    }
       goto repeat;
       */

     int counter1=0;
     int counter2=0;

     if((prompt=='y'||prompt=='Y')&&fa==1)
     {
        goto beginning;
     }

     if((prompt=='y'||prompt=='Y')&&fb==1)
    {
        fa=Switch1(Player_1,Player_2);
        counter1++;
        goto repeat;
    }
        counter2++;
    if(prompt=='n'||prompt=='N')
      {
        printf("\n Thankyou for playing \n");
        printf("\n Final Score : \n %s = %d \n %s = %d \n",Player_1,Player_1_score,Player_2,Player_2_score);
      }



}


int Switch1(char Player_1[],char Player_2[])
{

    //int Round;
    //char Player_1[20];
    //char Player_2[20];

    printf("\n Round : %d\n",Round);
    char check[10]={0,0,0,0,0,0,0,0,0,0};

    char disp[10]={0,1,2,3,4,5,6,7,8,9};
    char arr[10]={0,1,2,3,4,5,6,7,8,9};
    int i,y,z;
    int t;
    char prompt;

    int fa=0,fb=0;



    int *pfa,*pfb;


    pfa=&fa;
    pfb=&fb;





    printf("\n  %d  |  %d  |  %d  \n-----+-----+-----\n  %d  |  %d  |  %d  \n-----+-----+-----\n  %d  |  %d  |  %d  \n",
           disp[1],disp[2],disp[3],disp[4],disp[5],disp[6],disp[7],disp[8],disp[9]);

   // printf("\n %s(Player 1)  :  X  \n %s(Player 2)  :  O  \n",Player_1,Player_2);


    for(t=0;t<=10;t++)
      {
        arr[t]='_';
        check[t]='_';
       // printf("\n%c",arr[t]);
      }


    for(i=1;i<=5;i++)
    {
        //printf("\n Round :  %d \n",i);

ifinvalid3 : printf("\n %s \t",Player_2);
        scanf("\n %d",&z);
        if(check[z]=='_')
        {check[z]='O';
        arr[z]='O';}
        else
           {
            printf("\n Invalid position, try again ");
            goto ifinvalid3;
           }

        printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);

   if((arr[1]=='O'&&arr[2]=='O'&&arr[3]=='O')||
        (arr[1]=='O'&&arr[4]=='O'&&arr[7]=='O')||
        (arr[1]=='O'&&arr[5]=='O'&&arr[9]=='O')||
        (arr[2]=='O'&&arr[5]=='O'&&arr[8]=='O')||
        (arr[3]=='O'&&arr[6]=='O'&&arr[9]=='O')||
        (arr[4]=='O'&&arr[5]=='O'&&arr[6]=='O')||
        (arr[7]=='O'&&arr[8]=='O'&&arr[9]=='O')||
        (arr[3]=='O'&&arr[5]=='O'&&arr[7]=='O'))
        {
            printf("\n \t\t %s is the winner! \n",Player_2);
            Player_2_score++;
            fb=1;

            break;
        }

        if(i<5)
        {

ifinvalid4 : printf("\n %s \t",Player_1);
        scanf("\n %d",&y);
        if(check[y]=='_')
        {check[y]='X';
        arr[y]='X';}
        else
           {
            printf("\n Invalid position, try again ");
            goto ifinvalid4;
           }

        printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);


        if((arr[1]=='X'&&arr[2]=='X'&&arr[3]=='X')||
        (arr[1]=='X'&&arr[4]=='X'&&arr[7]=='X')||
        (arr[1]=='X'&&arr[5]=='X'&&arr[9]=='X')||
        (arr[2]=='X'&&arr[5]=='X'&&arr[8]=='X')||
        (arr[3]=='X'&&arr[6]=='X'&&arr[9]=='X')||
        (arr[4]=='X'&&arr[5]=='X'&&arr[6]=='X')||
        (arr[7]=='X'&&arr[8]=='X'&&arr[9]=='X')||
        (arr[3]=='X'&&arr[5]=='X'&&arr[7]=='X'))
        {
            printf("\n \t\t %s is the winner! \n",Player_1);
            Player_1_score++;
            fa=1;

             break;
        }
         }
          }

    if(fa==0&&fb==0)
    printf("\n \t \t Draw");

    printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);

    Round++;
    return (fa);

}




int oneplayer(char Player_1[],char Computer[])
{

    int Round=1;
    char check[10]={0,0,0,0,0,0,0,0,0,0};

beginning : printf("\n Round : %d\n",Round);
    int a[10]={0,0,0,0,0,0,0,0,0,0};
    int b[10]={0,0,0,0,0,0,0,0,0,0};
    char disp[10]={0,1,2,3,4,5,6,7,8,9};
    char arr[10]={0,1,2,3,4,5,6,7,8,9};
    int i,y,z;
    int t;
    char prompt;

    int fa=0,fb=0;
    int fcheck=0;

    srand(time(NULL));
   // printf("\n r is : %d",rand()%10);


    printf("\n  %d  |  %d  |  %d  \n-----+-----+-----\n  %d  |  %d  |  %d  \n-----+-----+-----\n  %d  |  %d  |  %d  \n",
           disp[1],disp[2],disp[3],disp[4],disp[5],disp[6],disp[7],disp[8],disp[9]);

   // printf("\n %s(Player 1)  :  X  \n %s(Player 2)  :  O  \n",Player_1,Player_2);


    for(t=0;t<=10;t++)
      {
        arr[t]='_';
        check[t]='_';
       // printf("\n%c",arr[t]);
      }



    for(i=1;i<=5;i++)
    {
        //printf("\n Round :  %d \n",i);

        Up : printf("\n");

        if(arr[1]!='_'&&arr[2]!='_'&&arr[3]!='_'&&arr[4]!='_'&&arr[5]!='_'&&arr[6]!='_'&&arr[7]!='_'&&arr[8]!='_'&&arr[9]!='_')
        {
            goto draw;
        }

       ifinvalid5 : printf("\n %s \t",Player_1);
        scanf("\n %d",&y);
        if(check[y]=='_')
        {check[y]='X';
        arr[y]='X';}
        else
           {
            printf("\n Invalid position, try again ");
            goto ifinvalid5;
           }

        printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);


        if((arr[1]=='X'&&arr[2]=='X'&&arr[3]=='X')||
        (arr[1]=='X'&&arr[4]=='X'&&arr[7]=='X')||
        (arr[1]=='X'&&arr[5]=='X'&&arr[9]=='X')||
        (arr[2]=='X'&&arr[5]=='X'&&arr[8]=='X')||
        (arr[3]=='X'&&arr[6]=='X'&&arr[9]=='X')||
        (arr[4]=='X'&&arr[5]=='X'&&arr[6]=='X')||
        (arr[7]=='X'&&arr[8]=='X'&&arr[9]=='X')||
        (arr[3]=='X'&&arr[5]=='X'&&arr[7]=='X'))
        {
            printf("\n \t\t %s is the winner! \n",Player_1);
            Player_1_score++;
            fa=1;

             break;
        }




        if(i<5)
        {


      //printf("\n if i<5 statement");




        if(arr[4]=='O'&&arr[7]=='O'&&arr[1]=='_')
            {printf("\n %s ",Computer);
                arr[1]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[2]=='O'&&arr[3]=='O'&&arr[1]=='_')
            {printf("\n %s ",Computer);
                arr[1]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[5]=='O'&&arr[9]=='O'&&arr[1]=='_')
            {printf("\n %s ",Computer);
                arr[1]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[1]=='O'&&arr[2]=='O'&&arr[3]=='_')
            {printf("\n %s ",Computer);
                arr[3]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[5]=='O'&&arr[7]=='O'&&arr[3]=='_')
            {printf("\n %s ",Computer);
                arr[3]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[9]=='O'&&arr[6]=='O'&&arr[3]=='_')
            {printf("\n %s ",Computer);
                arr[3]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[1]=='O'&&arr[4]=='O'&&arr[7]=='_')
            {printf("\n %s ",Computer);
                arr[7]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[8]=='O'&&arr[9]=='O'&&arr[7]=='_')
            {printf("\n %s ",Computer);
                arr[7]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[3]=='O'&&arr[5]=='O'&&arr[7]=='_')
            {printf("\n %s ",Computer);
                arr[7]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[3]=='O'&&arr[6]=='O'&&arr[9]=='_')
            {printf("\n %s ",Computer);
                arr[9]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[7]=='O'&&arr[8]=='O'&&arr[9]=='_')
            {printf("\n %s ",Computer);
                arr[9]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[1]=='O'&&arr[5]=='O'&&arr[9]=='_')
            {printf("\n %s ",Computer);
                arr[9]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[1]=='O'&&arr[7]=='O'&&arr[4]=='_')
            {printf("\n %s ",Computer);
                arr[4]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[5]=='O'&&arr[6]=='O'&&arr[4]=='_')
            {printf("\n %s ",Computer);
                arr[4]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[1]=='O'&&arr[3]=='O'&&arr[2]=='_')
            {printf("\n %s ",Computer);
                arr[2]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[5]=='O'&&arr[8]=='O'&&arr[2]=='_')
            {printf("\n %s ",Computer);
                arr[2]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[3]=='O'&&arr[9]=='O'&&arr[6]=='_')
            {printf("\n %s ",Computer);
                arr[6]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[4]=='O'&&arr[5]=='O'&&arr[6]=='_')
            {printf("\n %s ",Computer);
                arr[6]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[7]=='O'&&arr[9]=='O'&&arr[8]=='_')
            {printf("\n %s ",Computer);
                arr[8]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[2]=='O'&&arr[5]=='O'&&arr[8]=='_')
            {printf("\n %s ",Computer);
                arr[8]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[1]=='O'&&arr[9]=='O'&&arr[5]=='_')
            {printf("\n %s ",Computer);
                arr[5]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[3]=='O'&&arr[7]=='O'&&arr[5]=='_')
            {printf("\n %s ",Computer);
                arr[5]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[2]=='O'&&arr[8]=='O'&&arr[5]=='_')
            {printf("\n %s ",Computer);
                arr[5]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}
        if(arr[4]=='O'&&arr[6]=='O'&&arr[5]=='_')
            {printf("\n %s ",Computer);
                arr[5]='O';
            fb=1;
             printf("\n \t\t %s is the winner! \n",Computer);
        Computer_score++;
            goto neOt;}




        if(arr[4]=='X'&&arr[7]=='X'&&arr[1]=='_')
            {printf("\n %s ",Computer);
                arr[1]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[2]=='X'&&arr[3]=='X'&&arr[1]=='_')
            {printf("\n %s ",Computer);
                arr[1]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[5]=='X'&&arr[9]=='X'&&arr[1]=='_')
            {printf("\n %s ",Computer);
                arr[1]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[1]=='X'&&arr[2]=='X'&&arr[3]=='_')
            {printf("\n %s ",Computer);
                arr[3]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[5]=='X'&&arr[7]=='X'&&arr[3]=='_')
            {printf("\n %s ",Computer);
                arr[3]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[9]=='X'&&arr[6]=='X'&&arr[3]=='_')
            {printf("\n %s ",Computer);
                arr[3]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[1]=='X'&&arr[4]=='X'&&arr[7]=='_')
            {printf("\n %s ",Computer);
                arr[7]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[8]=='X'&&arr[9]=='X'&&arr[7]=='_')
            {printf("\n %s ",Computer);
                arr[7]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[3]=='X'&&arr[5]=='X'&&arr[7]=='_')
            {printf("\n %s ",Computer);
                arr[7]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[3]=='X'&&arr[6]=='X'&&arr[9]=='_')
            {printf("\n %s ",Computer);
                arr[9]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[7]=='X'&&arr[8]=='X'&&arr[9]=='_')
            {printf("\n %s ",Computer);
                arr[9]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[1]=='X'&&arr[5]=='X'&&arr[9]=='_')
            {printf("\n %s ",Computer);
                arr[9]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[1]=='X'&&arr[7]=='X'&&arr[4]=='_')
            {printf("\n %s ",Computer);
                arr[4]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[5]=='X'&&arr[6]=='X'&&arr[4]=='_')
            {printf("\n %s ",Computer);
                arr[4]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[1]=='X'&&arr[3]=='X'&&arr[2]=='_')
            {printf("\n %s ",Computer);
                arr[2]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[5]=='X'&&arr[8]=='X'&&arr[2]=='_')
            {printf("\n %s ",Computer);
                arr[2]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[3]=='X'&&arr[9]=='X'&&arr[6]=='_')
            {printf("\n %s ",Computer);
                arr[6]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[4]=='X'&&arr[5]=='X'&&arr[6]=='_')
            {printf("\n %s ",Computer);
                arr[6]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[7]=='X'&&arr[9]=='X'&&arr[8]=='_')
            {printf("\n %s ",Computer);
                arr[8]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[2]=='X'&&arr[5]=='X'&&arr[8]=='_')
            {printf("\n %s ",Computer);
                arr[8]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[1]=='X'&&arr[9]=='X'&&arr[5]=='_')
            {printf("\n %s ",Computer);
                arr[5]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[3]=='X'&&arr[7]=='X'&&arr[5]=='_')
            {printf("\n %s ",Computer);
                arr[5]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[2]=='X'&&arr[8]=='X'&&arr[5]=='_')
            {printf("\n %s ",Computer);
                arr[5]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}
        if(arr[4]=='X'&&arr[6]=='X'&&arr[5]=='_')
            {printf("\n %s ",Computer);
                arr[5]='O';
             printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
            goto Up;}




      //  next : printf("\n");



/*

      if(arr[5]=='_')                                //To make the computer game play a little more tough...
      {
          arr[5]='O';
          goto normalcheck;
      }


*/


        ifinvalid6 : printf("\n %s \t",Computer);
        z=rand()%10;
        //printf("\n z is %d\n",z);
        if(z==10)
            goto ifinvalid6;
        //scanf("\n %d",&z);

        if(arr[z]=='_')
        {check[z]='O';
        arr[z]='O';}
        else
           {
            //printf("\n Invalid position, try again ");
            goto ifinvalid6;
           }


        normalcheck :
        printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);


   if((arr[1]=='O'&&arr[2]=='O'&&arr[3]=='O')||
        (arr[1]=='O'&&arr[4]=='O'&&arr[7]=='O')||
        (arr[1]=='O'&&arr[5]=='O'&&arr[9]=='O')||
        (arr[2]=='O'&&arr[5]=='O'&&arr[8]=='O')||
        (arr[3]=='O'&&arr[6]=='O'&&arr[9]=='O')||
        (arr[4]=='O'&&arr[5]=='O'&&arr[6]=='O')||
        (arr[7]=='O'&&arr[8]=='O'&&arr[9]=='O')||
        (arr[3]=='O'&&arr[5]=='O'&&arr[7]=='O'))

        {
            printf("\n \t\t %s is the winner! \n",Computer);
            Computer_score++;
            fb=1;
            break;
        }
         }
}

         // cout<<"\n"<<  arr[1]  <<"|"<<  arr[2]  <<"|"<<  arr[3]  <<"\n-----+-----+-----\n"<<  arr[4]  <<"|"<<  arr[5]  <<"|"<<  arr[6]  <<"\n-----+-----+-----\n"<<  arr[7]  <<"|"<<  arr[8]  <<"|"<<  arr[9]  <<"\n";
       //  printf("\n  %d  |  %d  |  %d  \n-----+-----+-----\n  %d  |  %d  |  %d  \n-----+-----+-----\n  %d  |  %d  |  %d  \n",
          //  arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);


          //FUNCTION




       neOt : printf("\n");

       draw : printf("\n");

    if(fa==0&&fb==0)
    printf("\n Draw");

    printf("\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n-----+-----+-----\n  %c  |  %c  |  %c  \n",
                    arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);

    Round++;
    printf("\n Do you want to play again? y/n \n");
    scanf("%s",&prompt);
    if(prompt=='y'||prompt=='Y')
    {goto beginning;}
    else
        printf("\n Thankyou for playing \n");

    printf("\n Final Score : \n %s = %d \n %s = %d \n",Player_1,Player_1_score,Computer,Computer_score);


}


