#include <stdio.h>
#include <stdlib.h>
#include "radixint.h"
int temp[10][1000000] = {0};
int order[10] = {0};

void radixSort(int data[]) {


    int n = 1;
    while(n <= 1000000000) {

        int i;
        for(i = 0; i < 1000000; i++) {
            int lsd = ((data[i] / n) % 10);
            temp[lsd][order[lsd]] = data[i];
            order[lsd]++;
        }

        // ­«·s±Æ¦C
        int k = 0;
        for(i = 0; i < 10; i++) {
            if(order[i] != 0)  {
                int j;
                for(j = 0; j < order[i]; j++, k++) {
                    data[k] = temp[i][j];
                }
            }
            order[i] = 0;
        }

        n *= 10;
    }
}
