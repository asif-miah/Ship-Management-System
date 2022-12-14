
void help(void)
{
    FILE *ptr = NULL;
    char ch[10] ;
    ptr = fopen("help.txt", "r");
    while(!feof(ptr))
    {
        fgets(ch ,1, ptr);

        printf("%s", ch);

    }
    fclose(ptr);
}
