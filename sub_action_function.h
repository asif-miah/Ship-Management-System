
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

void ticket(void)
{
    int row = 0, col = 0, bookrtn = 0;
    int number = 0;
    char dstn = ' ';
    char sit[12][3];
    printf("Choice your destination\n");
    printf("A. Narsingdi.\n");
    printf("B. Barishal.\n");
    printf("C. Chittagong.\n");
    printf("D. Mymensing.\n");
    printf("E. Sonargaon.\n");
    printf("F. Comilla.\n");
    dstn = getch();
    system("cls");
    sitplan(sit);
    display(sit);
    printf("\nHow many sit you want to book ? Enter the number.\n");
    scanf("%d", &number);
    printf("choose available sit from this sit table\n");
    printf("Enter the row and column number in sequentially.\n Row and column index start with 0 (enter 0 for row, column number 1, and enter 1 for row column number 2 \n\n");
    for(int i = 1; i<=number; i++)
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



}
