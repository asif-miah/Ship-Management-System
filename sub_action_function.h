
void help(void)
{
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

    FILE * fp = NULL;
   int str = 0;
    fp = fopen("information.txt", "w+");
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



void ticket(long long int number, char * password , char * name)
{
    int row = 0, col = 0, bookrtn = 0;
    int sit_number = 0;
    char dstn = ' ';
    char sit[12][3];
    int ship_choice =  0;

    printf("Choice your destination\n");
    printf("A. Narsingdi.\n");
    printf("B. Barishal.\n");
    printf("C. Chittagong.\n");
    printf("D. Mymensing.\n");
    printf("E. Sonargaon.\n");
    printf("F. Comilla.\n");
    dstn = getch();
    system("cls");

    choice_ship_time();
    printf("Please, enter your choice.\n");
    scanf("%d", &ship_choice);

    system("cls");
    sitplan(sit);
    display(sit);
    printf("\nHow many sit you want to book ? Enter the number.\n");
    scanf("%d", &sit_number);
    printf("choose available sit from this sit table\n");
    printf("Enter the row and column number in sequentially.\n Row and column index start with 0 (enter 0 for row, column number 1, and enter 1 for row column number 2 \n\n");
    for(int i = 1; i<= sit_number; i++)
    {
        level:
      printf("Enter row of %d number sit.\n", i);
      scanf("%d", &row);
      printf("Enter column of %d number sit.\n", i);
      scanf("%d", &col);
      bookrtn = sitbook(sit,row, col);
     if(bookrtn == 1)
     {
         printf("%d number sit is booked\n", i);
     }
     else
     {
         printf("\nPlease enter available sit address.\n");
       goto level;
     }

    }

    display(sit);
    int flag = 0;
    char file[30];
    char ch = 'y';

    for(int i = 15; i >= 0; i-- )
    {
    printf("\n\nEnter any key for collecting ticket\n");
    printf("Otherwise you will be exited after than %d second\n", i);
    sleep(1);
    system("cls");
    if(kbhit())
    {
        flag++;
        break;
    }

    }
    if(flag == 0)
       {
           system("cls");
       printf("Do you want to save your ticket in drive ? If then press y or n for exit.\n");
       fflush(stdin);
       ch = getch();
       }
       if(ch == 'y'  || flag != 0)
       {
           char sp_nm[10] = "EVER GREEN";
           FILE * fticket;
           system("cls");
           printf("Enter your file name with extension where you want to save ticket.\n");
           scanf("%s", file);
           fticket =  fopen(file, "w+");
           fprintf(fticket, "\t%s\n", sp_nm);
           fprintf(fticket, "\n\n");
           fprintf(fticket, "Name : ");
           fputs(name,fticket);
           fprintf(fticket, "\n");
          fprintf(fticket, "Phone Number: %lld\n", number);
          fprintf(fticket, "Password: %s\n", password);


           fclose(fticket);

       }
       system("cls");
       printf("Your ticket is saved in %s\n", file);
       printtf("Wait for 4 second. You will be shifted in main manue.\n");
       sleep(4);
       system("cls");

     return 1;



}
