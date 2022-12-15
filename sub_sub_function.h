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
