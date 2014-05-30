#include <stdio.h>
#include <stdlib.h> // for random
// stackoverflow.com/questions/3067364/generating-random-numbers-in-c

void DrawHero(int x, int y){ // отрисовка перса
    int i;

    for(i=0; i<y; i++){ // положение по вертикали
        printf ("\n");
    }
    for(i=0; i<x; i++){ // положение по горизонтали
        printf (" ");
    }
    printf ("@\n"); // рисуем героя
}

int CalcHeroX(void){ // вычисление X героя
    srand ( time(NULL) );
    int random_number = rand();
    int rand_capped = random_number % 30;
    return rand_capped;
}
int CalcHeroY(void){ // вычисление Y героя
    srand ( time(NULL) );
    int random_number = rand();
    int rand_capped = random_number % 20;
    return rand_capped;
}

// ================ MAIN ===================================

int main (void)
{
    int a; // код клавиши
    int x=0; // горизонталь
    int y=0; // вертикаль

    // printf ("Superprog\n");

    do {
        system("cls"); // очистка экрана
        DrawHero(x,y); // отрисовка перса

        a = _getch(); // ждем нажатия клавиши

        if(a=='w'){        // up
            if(y>0){y--;}
        } else if(a=='s'){ // down
            if(y<20){y++;}
        } else if(a=='a'){ // left
            if(x>0){x--;}
        } else if(a=='d'){ // right
            if(x<30){x++;}
        } else if(a=='r'){ // random
            x = CalcHeroX();
            y = CalcHeroY();
        }

    } while( a != 'q' );

    printf ("quit");

    return 0;
}
