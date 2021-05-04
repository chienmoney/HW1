#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "radixint.h"
int data[1000000];
int main(void) {
    struct  timeval start;
    struct  timeval end;
    unsigned  long diff;
    int i=0;
    int num;
    while(scanf("%d",&num)!=EOF){
        data[i]=num;
        i++;
    }
    gettimeofday(&start, NULL);
    radixSort(data);
    gettimeofday(&end, NULL);
    for(i = 0; i < 1000000; i++){
        printf("%d\n", data[i]);
    }
    diff = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;     // ®É¶¡®t
    printf("Sorting performance %ld us (equal %f sec)\n", diff, diff / 1000000.0);
    return 0;
}
