
/*
* Sign up function definition. Here, we will take user name, number and password.
* After that we will try user to quick sign in.
*If user not want to quick sign in then user will shift in main menue.
*/

int signup(long long int *numptr, char * passptr, char * name) // 1 number action function for signup
{


   char ch = ' ';

   int  sninrtn = 0;
   printf("Note: Please enter all legal information. Your name and password must have to be character only. ");
   printf("leter limit 10 characters. Remember your number and password for further verification.\n\n");
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
       sninrtn = signin(numptr, passptr, name);
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



/*
* sign in function definition. Here we will take user number and password
* and check them with previously entered user name and password in sign up section.
*/



int signin(long long int *numptr, char * passptr, char  * name) // 2 number action function signin
{

   long long num = 0;
   char pass[10]= " ";
   int flag = 0;
   again:
       system("color 0A");
       printf("Reminder:\nYou will be able to sign in if you signed up in our Ship Management System.\n");
       printf("Remember, you have %d chance to try. If you failed then automatically you will be sifted to Home menu\n", 2 - flag);

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
                system("color FC");
                printf("Mismatch your number and password.\Please, wait 3 seconds , and try again\n ");
                sleep(TIME);
                system("cls");
                if(flag == 2)
                {
                  return 0;

                }
                goto again;
            }
       }
       system("color 0F");
       return 1;

}
void home(long long int number, char * password ,char * name) //3 number action function for home menu
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


       ticket(number, password , name);
        break;
       }

    case 'b':
        {
        info();
        goto level;
        break;
        }
    case 'c':
        help();
        goto level;
        break;
    case 'd':
        return 0;
        break;
    default :
        {
        printf("You press invalid choice\n");
        printf("Please wait 3 seconds and try again\n");
        Beep(BEEP, 3000);
        system("cls");
        goto level ;
        }
}
}

/*
*Admin login for ship management authority to maintain the system.
* Admin function definition
* We will setup a secret password which will be known by only authority.
* Here we will try to match the secret pass with entered password by admin.
*/

int admin_login(long long int *numptr, char * passptr, char  * name)
{
    system("color 04");
    printf("Please, enter the admin name.\n");
    gets(name);
    fflush(stdin);
    printf("Enter admin password.\n");
    gets(passptr);
    char admin_name[10] = "asif";
    char admin_pass[15] = "asif";
     system("color 0F");
    if(!strcmp(admin_name, name) && !strcmp(admin_pass, passptr))
        return 1;
    return 0;



}

