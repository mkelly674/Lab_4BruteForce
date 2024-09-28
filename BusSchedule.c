#include <stdio.h>
#include <stdlib.h>

#define oo 893288923

int recurse(int arrive, int lo, int hi, int* buses){
    
    if(lo>hi){
        return oo;
    }
    
    int m = (hi + lo)/2;
    
    if(buses[m] >= arrive){
        int ans = recurs(arrive, lo, m-1, buses);
        if(ans)
    }
}
int main()
{
    printf("Hello World");

    return 0;
}
