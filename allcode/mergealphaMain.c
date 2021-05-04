#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <sys/time.h>
#include"mergealpha.h"
char arr[1000000][101];

int main(){
    struct  timeval start;
    struct  timeval end;
    unsigned  long diff;
    int i,j;

    for(i = 0; i<1000000; i++){
        scanf("%s", arr[i]);
    }
    gettimeofday(&start, NULL);
    merge_sort(arr,0, 1000000-1);
    gettimeofday(&end, NULL);
    for(i = 0; i<1000000; i++){
        printf("%s\n", arr[i]);
    }
    diff = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;     // 實際的時間差
    printf("Sorting performance %ld us (equal %f sec)\n", diff, diff / 1000000.0);
    return 0;
}
