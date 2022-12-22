#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
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
    ship_name();
    sleep(1);
    system("cls");
    ship();
    sleep(1);
    system("cls");
    while(1)
    {
     level:
    system("color 07");
    signin_up();

    printf("\n\nPress 'i' for sign in \n");
    printf("Press 'u' for sign up\n");
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
      default:
       {
           system("color 7C");
        printf("You press invalid character.\n");
        printf("Please,wait for 2 second and then try again.\n");
        sleep(2);
        system("cls");
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
 sleep(1);
 system("cls");
 ship_name();
 home(&number, password , name);

    return 0;
}
