#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy( int column, int row )
{
    COORD coord;
    coord.X = column;
    coord.Y = row;
    SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}

int main()
{
    int size;
    do{
         printf("Enter box size\n");
    scanf("%i",&size);
    }
   while (size%2 ==0  || size == 1);
    int col=size/2+1;
    int row=1;


    for(int i=1;i<=size*size;i++)
    {
        gotoxy(col*3,row*3);
        printf("%i",i);

        if(i%size!=0)
        {
            row--;
            col--;
            if(row<1){row=size;}
            if(col<1){col=size;}
        } else
        {
            row++;
        }
    }

    return 0;
}
