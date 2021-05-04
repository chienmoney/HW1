#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "quickalpha.h"
int partition(char list[][101], int left, int right) {
    int i = left - 1;
    int j;
    for(j = left; j < right; j++) {
        if(strcmp(list[j],list[right])<=0) {
            i++;
            char t[101];
            strcpy(t,list[i]);
            strcpy(list[i],list[j]);
            strcpy(list[j],t);
        }
    }
    char k[101];
    strcpy(k,list[i+1]);
    strcpy(list[i+1],list[right]);
    strcpy(list[right],k);
    return i+1;
}

void quickSort(char list[][101], int left, int right) {
    if(left < right) {
        int q = partition(list, left, right);
        quickSort(list, left, q-1);
        quickSort(list, q+1, right);
    }
}
