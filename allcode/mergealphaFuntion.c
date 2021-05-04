#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"mergealpha.h"
char A[1000000][101];
char B[1000000][101];
void merge(char arr[][101], int head, int mid, int tail){
    int lenA = mid - head + 1;
    int lenB = tail - (mid + 1) + 1;

    //Copy data to temp arrays A[] and B[]
    int i, j, k;
    for(i = 0; i < lenA; i++){
        strcpy(A[i] , arr[head + i]);
    }
    for(j = 0; j < lenB; j++){
        strcpy(B[j] , arr[mid + 1 + j]);
    }
    // Merge two temp arrays back into arr[head..tail]
    i = 0;
    j = 0;
    k = head;
    //while array A and B haven't finished scanning
    while(i < lenA && j < lenB){
        if(strcmp(A[i] , B[j])<0){
            strcpy(arr[k] , A[i]);
            i++;
        }
        else{
            strcpy(arr[k] , B[j]);
            j++;
        }
        k++;
    }
    //Copy the remaing elements into arr[], if A[] haven't finished scanning
    while(i < lenA){
        strcpy(arr[k] , A[i]);
        i++;
        k++;
    }
    //Copy the remaing elements into arr[], if B[] haven't finished scanning
    while(j < lenB){
        strcpy(arr[k] , B[j]);
        j++;
        k++;
    }
}
void merge_sort(char arr[][101],int head, int tail){
    if(head < tail){
        int mid = (head + tail) / 2;
        merge_sort(arr,head, mid);
        merge_sort(arr,mid+1, tail);
        merge(arr,head, mid, tail);
    }
}
