int main()
{
    char ch;
    printf("Enter Key");
    ch=getch();

    if(ch==-32)
    {
        ch=getch();
        printf("Extended key with ascii NULL|%i",ch);
    }
    else
    {
        printf("normal key with ascii %i",ch);

    }

    switch(ch)
    {
        case -32:
        ch=getch();
        printf("Extended key with ascii %i",ch);
        break;
        default:
        printf("normal key with ascii %i",ch);
        break;
    }
    return 0;
}
