#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int column, int row)
{
    COORD coord;
    COORD.X= coulmn;
    COORD.Y= row;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main()
{
    int size =3;
    int col =size/ 2+1;
    int row =1;
    for (int i=1; i<size*size; i++)
    {
        gotoxy(col*3,row*3);
        printf("%i",i)

        if (i%size!=0)
        {
            row--;
            col--;
            if(row<3)
            {
                row =3;
            }
            if(col<3)
            {
                col =3;
            }
            else{
                row++;
            }
        }
    }

            return 0;
}
