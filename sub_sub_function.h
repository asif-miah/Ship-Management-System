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
           system("color FC");
           Beep(BEEP, 3500);
           system("color 0F");

           return 0;



}



int ship_choice(Ship (*ship)[4])
{
    int choice = 1;
    strcpy(ship[0]->name, "EVER  GREEN 110");

    /* (*ship)[x].name it will only work when print by (*ship)[x].name . otherwise we have to*/
    strcpy(ship[0]->time, "10 : 00  AM");
    ship[0]->price = 799;

    strcpy((*ship)[1].name, "EVER  GREEN 101");
    strcpy(ship[1]->time, "01 : 00  PM");
    ship[1]->price = 699;

    strcpy((*ship)[2].name, "EVER  GREEN 108");
    strcpy(ship[2]->time, "08 : 30  PM");
    ship[2]->price = 899;
   system("E:\\Programming\\ship1.jpg");
    printf("\n\tEVER  GREEN\n\n");

    for(int i = 0; i < 3; i++)
    {
        printf("( %d )\n", i+1);
        printf("Ship Name: %s\n", (*ship)[i].name);
        printf("Ship Launch Time: %s\n", ship[i]->time);
        printf("Ticket Price: %d\n", ship[i]->price);
        printf("\n\n");


    }


    printf("Please, enter your choice.\n");
    scanf("%d", &choice);
    return choice - 1;


}
