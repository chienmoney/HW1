#include <stdio.h>
#include <stdlib.h>
#include"quickint.h"
#include <sys/time.h>
int main(void) {
    struct  timeval start;
    struct  timeval end;
    unsigned  long diff;
    int num;
    int idx=0;
    int number[1000000];
    while(scanf("%d",&num)!=EOF){
        number[idx]=num;
        idx++;
    }
    gettimeofday(&start, NULL);
    quickSort(number, 0, 1000000-1);
    gettimeofday(&end, NULL);

    int i;
    for(i = 0; i < 1000000; i++){
        printf("%d ", number[i]);
        printf("\n");
    }
    diff = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;     // 實際的時間差
    printf("Sorting performance %ld us (equal %f sec)\n", diff, diff / 1000000.0);
    return 0;
}
