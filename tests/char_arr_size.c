#include <stdio.h>
#include <stdlib.h>

int main(){
        char *arr = malloc(100000000LU);
        for(long i=0; i<10000000LU; ++i){
                *(arr+i) = 'a';
                printf("%c", *(arr+i));
        }
        return 0;
}

