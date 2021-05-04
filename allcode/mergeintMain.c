#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "mergeint.h"

int main(){
    struct  timeval start;
    struct  timeval end;
    unsigned  long diff;
    int i;
    int list[1000000];
    for(i = 0; i<1000000; i++){
        scanf("%d", &list[i]);
    }
    gettimeofday(&start, NULL);
    merge_sort(list, 0, 1000000-1);
    gettimeofday(&end, NULL);
    for(i = 0; i<1000000; i++){
        printf("%d\n", list[i]);
    }
    diff = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;     // 實際的時間差
    printf("Sorting performance %ld us (equal %f sec)\n", diff, diff / 1000000.0);
    return 0;
}
