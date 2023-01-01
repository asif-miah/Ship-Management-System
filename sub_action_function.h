
void help(void)
{
    system("cls");
    FILE *ptr = NULL;
    int ch = 0 ;
    ptr = fopen("help.txt", "r");
    while(!feof(ptr))
    {
       ch = fgetc(ptr);

        printf("%c", ch);

    }
    fclose(ptr);
    printf("\n\nPress any key for previous menu\n");
    getch();
    system("cls");

}
void info(void)
{
system("cls");
    FILE * fp = NULL;
   int str = 0;
    fp = fopen("information.txt", "r");
      while(!feof(fp))
    {
       str = fgetc(fp);

        printf("%c", str);

    }

    fclose(fp);

    printf("\n\nPress any key for previous menu\n");
    getch();
    system("cls");


}

typedef struct{
    char name[20];
    char time[10];
    int price

}Ship;

void ticket(long long int number, char * password , char * name)
{
    int serial_number = 0, bookrtn = 0;
    int sit_number = 0;
    char dstn = ' ';
    int sit[12][3];
    int ship_Num = 0;

    Ship ship[4];
    system("cls");


    printf("Choice your destination\n");
    printf("A. Narsingdi.\n");
    printf("B. Barishal.\n");
    printf("C. Chittagong.\n");
    printf("D. Mymensing.\n");
    printf("E. Sonargaon.\n");
    printf("F. Comilla.\n");
    dstn = getch();
    system("cls");


    ship_Num = ship_choice(&ship);


    system("cls");
    sitplan(sit);


    display(sit);



    printf("\nHow many sit you want to book ? Enter the number.\n");
    scanf("%d", &sit_number);
    printf("Choose available sit from this sit table\n");
    printf("Remember, int sit plan table '0' for booked sit and serial number for available sit.\n\n");
    for(int i = 1; i<= sit_number; i++)
    {


        level:
            system("cls");

            display(sit);

      printf("Remember, int sit plan table '0' for booked sit and serial number for available sit.\n\n");

      printf("Enter the available sit's serial number for ( %d ) number person.\n", i);
      scanf("%d",&serial_number);

      bookrtn = sitbook(sit[0],serial_number);


     if(bookrtn == 1)
     {
         system("color E0");
        system("cls");
         display(sit);
         printf("%d number sit is booked for %d number person\n",serial_number,  i);
         sleep(TIME);
         system("cls");
         bookrtn = 0;
         system("color 0F");

     }
     else
     {
       system("cls");
        display(sit);
        goto level;
     }

    }

    system("cls");
    system("color 0A");
    display(sit);
    sleep(TIME);
    system("color 0F");
    int flag = 0;
    char file[30];
    char ch = 'y';
    fflush(stdin);
    for(int i = 15; i >= 0; i-- )
    {
        system("cls");
    printf("\n\nEnter any key for collecting ticket\n");
    printf("Otherwise you will be exited after than %d second\n", i);
    sleep(1);
    system("cls");
    if(kbhit())
    {
        flag++;
        getch();
        break;
    }


    }
    fflush(stdin);
    if(flag == 0)
       {
           system("cls");
       printf("Do you want to download your ticket in your drive ?\nIf then press y or n for exit.\n");

       ch = getch();
       }
       if(ch == 'y'  || flag != 0)
       {
           system("cls");


           FILE * fticket;
           system("cls");
           printf("Enter your file name with extension where you want to save ticket.\n");
           scanf("%s", file);
           fticket =  fopen(file, "w+");
           fflush(stdin);
           fprintf(fticket, "\t\tEVER  GREEN\n");
           fprintf(fticket, "\n\n");
           fprintf(fticket, "Name : ");
           fputs(name,fticket);
           fprintf(fticket, "\n");
           fprintf(fticket, "Phone Number: %lld\n", number);
           fprintf(fticket, "Password: %s\n", password);
           fprintf(fticket, "Number of booked sit : %d\n", sit_number);
           fprintf(fticket, "\n\n\tTicket information\n\n");

          for(int sitcount = 1; sitcount <= sit_number; sitcount++)
          {

              fprintf(fticket,"( %d )\n", sitcount);
              fprintf(fticket, "%s\n", ship[ship_Num].name);
              fprintf(fticket, "%s\n", ship[ship_Num].time);
              fprintf(fticket, "%d\n", ship[ship_Num].price);
              fprintf(fticket, "\n\n");



          }





           fclose(fticket);


       }
            system("cls");



           system("color 0A");
           printf("\tEVER  GREEN\t\n");
           printf("\n\n");
           printf("Name: %s\n", name);
           printf("Phone Number: %lld\n", number);
           printf("Password: %s\n", password);
           printf("Number of booked sit : %d\n", sit_number);
           printf("\n\n\tTicket information\n\n");

          for(int sitcount = 1; sitcount <= sit_number; sitcount++)
          {

              printf("( %d )\n", sitcount);
              printf("%s\n", ship[ship_Num].name);
              printf("%s\n", ship[ship_Num].time);
              printf("%d\n", ship[ship_Num].price);
              printf("\n\n");



          }


          Beep(BEEP, 1000);
          system("color F0");


       printf("Your ticket is saved in %s\n", file);
       printf("Wait for 3 second. You will be shifted in main manue.\n");
       system("color E0");
       sleep(TIME);
       system("cls");
       system("color 07");








}
