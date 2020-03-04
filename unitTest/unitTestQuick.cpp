
#include "TXLib.h"
#include "BubleSorting.h"
#include <stdlib.h>

int RunTest();

int main()
    {
    txCreateWindow(800, 600);
    int number[1000] = {0};
    int sswop  = 0;
    int eequal = 0;

    for (int i = 10; i <= 1000; i+=100)
        {
        sswop  = 0;
        eequal = 0;
        srand(1);
        ArrayCreateRand (i, number);
        QuickSorting (i, number, &sswop, &eequal);

        printf ("\n элементов [%d] %f ", i, (double)(i*365/1000));
        printf (" перестановок [%d] %f ", sswop, (double)(sswop*475/500000));
        printf (" Сравнений [%d] %f ", eequal, (double)(eequal*475/500000));
             printf ("\n");

        /*
        txSetColor (TX_WHITE);
                //MyPoint(i, eequal, color, 230, 40);
                //MyPoint(i, sswop,  color, 610, 40);
        printf ("элементов массива  %d \n", i);
        printf ("перестановок  %d %f\n", sswop, (sswop/150));
        printf ("сравнений  %d %f\n", eequal, (eequal/150));
        }  */
        }
    return 0;
    }

int RunTest()
    {

    }
