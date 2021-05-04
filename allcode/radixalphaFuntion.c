#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "radixalpha.h"
char temp[26][1000000][101];
int order[26] = {0};
int radixSort(char data[][101]) {
    int j;
    for(j=99;j>=0;j--){
        int n;
        int i;
        for(i = 0; i < 1000000; i++) {
            int lsd;
            lsd = data[i][j]-'a';
            strcpy(temp[lsd][order[lsd]] , data[i]);
            order[lsd]++;
        }
        // ­«·s±Æ¦C
        int k = 0;
        for(i = 0; i < 26; i++) {
            if(order[i] != 0)  {
                int j;
                for(j = 0; j < order[i]; j++, k++) {
                    strcpy(data[k] , temp[i][j]);
                }
            }
            order[i] = 0;
        }
    }
    return 0;
}
