#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#define BEEP 400
#define TIME 3
#include "shape_function_definition.h"
#include "action_function_definition.h"
#include "sub_action_function.h"
#include "sub_sub_function.h"



int main()
{

    long long int number = 0;
    char password[10] = " ";
    char  name[10]= " ";
    int  sninrtn = 0;
    char ch = ' ';
    system("color 0A");

    ship_name();
    sleep(TIME);

    system("cls");
     system("color F1");
    ship();
    sleep(TIME);
    system("cls");
     system("color 0F");
    while(1)
    {
     level:
    system("color 0F");
    signin_up();

    printf("\n\nPress 'i' for sign in \n");
    printf("Press 'u' for sign up\n");
    printf("Press 'a' for admin login(Only for Authority).\n");
    ch = getch();
    system("cls");
    switch(ch)
      {
      case 'i':


       sninrtn = signin(&number, password , name);


        break;
      case 'u':

      sninrtn =  signup(&number, password , name);


        break;

      case 'a':

        sninrtn = admin_login(&number, password , name);

        if(sninrtn)
            {
            printf("Well Come, Admin.\n");
            sleep(2);
            system("cls");
            }
        break;
      default:
       {
           system("color FC");
        printf("You press invalid character.\n");
        printf("Please,wait for 2 second and then try again.\n");
        sleep(2);
        system("cls");
         system("color 0F");
       }
      }
      if(sninrtn == 1)
      break;
      else if(sninrtn == 0)
      {
          goto level;
      }

    }

 printf("well Come to EVER GREEN.\n");
 wellcome();
 sleep(TIME);
 system("cls");
 ship_name();




 system("cls");
 home(number, password , name);
 system("cls");
 happyjourney();
 sleep(2);
    return 0;
}
