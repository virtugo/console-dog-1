#include <stdio.h>
#include <stdlib.h> // for random

// ================ FUNCTIONS ==============================

void drawMass(int mXY[30][20], int x, int y){
    int i,j;
    for(j=0; j<19; j++){ // первая строка, затем вторая и тд
        for(i=0; i<19; i++){ // первый столбец, второй и тд
            printf (mXY[i][j]);
        }
        printf ("\n"); // перевод строки
    }
}

// ================ MAIN ===================================

int main (void)
{
    int mXY[30][20];
    int i,j;
    int x,y = 0; // координаты героя
    int a;

    for(j=0; j<19; j++){ // обнуляем массив, y
        for(i=0; i<29; i++){ // x
            mXY[i][j]="1";
        }
    }

    do {
        system("cls"); // очистка экрана
        drawMass(mXY, x, y);
        a = _getch(); // ждем нажатия клавиши

        if(a=='w'){        // up
            if(y>0){y--;}
        } else if(a=='s'){ // down
            if(y<19){y++;}
        } else if(a=='a'){ // left
            if(x>0){x--;}
        } else if(a=='d'){ // right
            if(x<29){x++;}
        }
    } while( a != 'q' );

    return 0;
}
