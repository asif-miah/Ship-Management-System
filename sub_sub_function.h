void sitplan(char sit[12][3])

{

   for(int i = 0; i<12; i++)
   {
       for(int j = 0; j<3; j++)
        sit[i][j] = 'A';
   }

   for(int i = 0; i<12; i++)
   {
       for(int j = 0; j<3; j++)
        if(i%2 ==  0)
        sit[i][j] = 'B';
   }

}

void display(char sit[12][3])
{
    printf("B for sit bokeed and A for sit available\n\n\n");
    for(int i = 0; i<12; i++)
   {
       for(int j = 0; j<3; j++)
       printf("%c\t",sit[i][j]);
        printf("\n\n");
   }

}

int sitbook(char sit[12][3], int row, int col)
{

       if(sit[row][col] != 'B')
       {
           sit[row][col] = 'B';
           return 1;
       }
       else
       {
           printf("Error> You entered booked sit's row and column\n");
       }
}

void choice_ship_time()
{
   printf("THE SHIP SHEDULE:\n\n");
   printf("(1)\n");
   printf("Ship Name : EVER GREEN 101\n");
   printf("Start Time : 10 AM\n");
   printf("Ticket price : 600 TK(BDT)\n\n");
   printf("(2)\n");
   printf("Ship Name : EVER GREEN 102\n");
   printf("Start Time : 1 PM\n");
   printf("Ticket price : 700 TK(BDT)\n\n");
   printf("(3)\n");
   printf("Ship Name : EVER GREEN 103\n");
   printf("Start Time : 8 PM\n");
   printf("Ticket price : 700 TK(BDT)\n");


}
