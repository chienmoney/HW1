#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <sys/time.h>
#include "radixalpha.h"
char data[1000000][101];
int main(void) {
    struct  timeval start;
    struct  timeval end;
    unsigned  long diff;
    int i=0;
    char word[100];
    while(scanf("%s",word)!=EOF){
        strcpy(data[i],word);
        i++;
    }
    gettimeofday(&start, NULL);
    int a=radixSort(data);
    gettimeofday(&end, NULL);
    for(i = 0; i < 1000000; i++){
        printf("%s\n", data[i]);
    }
    diff = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;     // ®É¶¡®t
    printf("Sorting performance %ld us (equal %f sec)\n", diff, diff / 1000000.0);
    return 0;
}

