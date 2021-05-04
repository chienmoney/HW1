#include <stdio.h>
#include <stdlib.h>
#include"quickint.h"
int partition(int number[], int left, int right) {
    int i = left - 1;
    int j;
    for(j = left; j < right; j++) {
        if(number[j] <= number[right]) {
            i++;
            int t;
            t = number[i];
            number[i]=number[j];
            number[j]= t;
        }
    }
    int k;
    k = number[i+1];
    number[i+1]=number[right];
    number[right]= k;
    return i+1;
}

void quickSort(int number[], int left, int right) {
    if(left < right) {
        int q = partition(number, left, right);
        quickSort(number, left, q-1);
        quickSort(number, q+1, right);
    }
}
