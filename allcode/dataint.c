#include<stdio.h>
#include<stdlib.h>
int main(){
    int dataint[1000000];
    int i;
    for(i=0;i<1000000;i++){
        dataint[i]=rand();
    }
    for(i=0;i<1000000;i++){
        printf("%d\n",dataint[i]);
    }
    return 0;
}
