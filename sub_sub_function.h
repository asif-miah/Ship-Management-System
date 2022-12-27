void sitplan(int sit[12][3])

{
    int serial_num = 0;

   for(int i = 0; i<12; i++)
   {

       for(int j = 0; j<3; j++)
       {

        serial_num++;
        sit[i][j] = serial_num;
        }

   }




   for(int i = 0; i<12; i++)
   {
       for(int j = 0; j<3; j++)
        {
            if(i%4 ==  0)
            sit[i][j] = 0;
        }
   }

}

void display(int sit[12][3])
{
    printf("Sit Plan: \n\n\n");

    for(int i = 0; i<12; i++)
   {
        printf("----------------------\n");
       for(int j = 0; j<3; j++)
       {
           printf("|");
          if(sit[i][j] >= 0 && sit[i][j] <= 9)
           printf("  0%d  ",sit[i][j]);
          else
           printf("  %d  ",sit[i][j]);


       }
       printf("|");
        printf("\n");
   }
   printf("----------------------\n");

}

int sitbook(int sit[12][3], int serial_number)
{

    if(serial_number > 0 && serial_number <= 36)
    {


       for(int i = 0; i<12; i ++)
       {
          for(int j = 0; j < 3 ; j++)
          {
               if(sit[i][j] == serial_number)
                 {
                   sit[i][j] = 0;
                   return 1;
                 }


          }

        }


      }




           system("cls");
           printf("Error> You entered invalid sit number.\n");
           printf("%d number sit is booked or out of sit range.\n");
           printf("Please, wait for 3 seconds and try again.\n");
           sleep(3);
           return 0;



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
