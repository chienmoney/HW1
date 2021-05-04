#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include<string.h>
#include "quickalpha.h"
char list[1000000][101];
int main() {
    struct  timeval start;
    struct  timeval end;
    unsigned  long diff;
    char word [101];
    int idx=0;

    while(scanf("%s",word)!=EOF){
        strcpy(list[idx],word);
        idx++;
    }
    gettimeofday(&start, NULL);
    quickSort(list,0, 1000000-1);
    gettimeofday(&end, NULL);
    printf("排序後\n");
    int i;
    for(i = 0; i < 1000000; i++){
        printf("%s", list[i]);
        printf("\n");
    }
    diff = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;     // 實際的時間差
    printf("Sorting performance %ld us (equal %f sec)\n", diff, diff / 1000000.0);
    return 0;
}
