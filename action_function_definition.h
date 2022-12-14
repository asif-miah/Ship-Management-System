int signup(long long int *numptr, char * passptr ) // 1 number action function for signup
{


    char ch = ' ';
   char  name[10]= " ";
  int  sninrtn = 0;
   printf("Note: Please enter all legal information. Your name and password must have to be character only. ");
   printf("leter limit 10 characters. Remember your number and password for further verification.\n\n ");
   printf("Enter your mobile number \n");
   scanf("%lld", numptr);

   printf("Enter your first name\n");
   scanf("%s", name);
   printf("Enter your password\n");
   scanf("%s", passptr);
   system("cls");
   printf("Do you want quick to sign in ?\n");
   printf("Press 'y' otherwise press 'n' to return Home menu\n");
   ch = getch();
   switch(ch)
   {
   case 'y':
       system("cls");
       sninrtn = signin(numptr, passptr);
        return sninrtn;
        break;
   case 'n':
       system("cls");
    return 0;
    break;
   default:
    printf("You pressed invalid character.");
    printf("press any key to return Home menu\n");
    system("pause");
    system("cls");
    return 0;

   }



}
int signin(long long int *numptr, char * passptr) // 2 number action function signin
{
   long long num = 0;
   char pass[10]= " ";
   int flag = 0;
   again:
       printf("Reminder:\nYou will be able to sign in if you signed up in our Ship Management System.\n");
       printf("Remember, you have %d chance to try. If you failed then automatically you will be sifted to Home menu\n", 2 - flag);
       system("color 07");
   printf("Enter your phone number\n");
   scanf("%lld", &num);
   printf("Enter your password\n");
   scanf("%s", pass);

       for(int count = 0; pass[count] != NULL && passptr[count] != NULL; count++)
       {
           if(num != *numptr || pass[count]!=  passptr[count])
            {

                flag++;
                system("cls");
                system("color 7C");
                printf("Mismatch your number and password.\Please, wait 3 seconds , and try again\n ");
                sleep(2);
                system("cls");
                if(flag == 2)
                {
                  return 0;

                }
                goto again;
            }
       }
       return 1;

}
void home(void) //3 number action function for home menu
{
    char choice = ' ';
    level :
    printf("\n\nOur services\n\n");
    printf("A.\tTicket\n");
    printf("B.\tInformation about EVER GREEN\n");
    printf("C.\tNeed help\n\n");
    printf("Please press your choice\n");
    choice = getch();
    switch(choice)
    {
    case 'a':
        {


       // ticket();
        break;
       }

    case 'b':
        {
            //info();
            break;
        }
    case 'c':
        //help();
        break;
    default :
        {
        printf("You press invalid choice\n");
        printf("please wait 3 seconds and try again\n");
        sleep(1);
        system("cls");
        goto level;
        }
}
}

