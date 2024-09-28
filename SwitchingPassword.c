#include <stdio.h>

#define POOL "adeflr"
#define LEN 6 

void rec(int n){
    // static variables
    static int perm[LEN] = {0};
    static int used[LEN] = {0};
    static int count = 0;
    
    if(n==0){
        count++;
        printf("%d. ", count);
        for(int i=0; i<LEN; i++){
            printf("%c", POOL[perm[i]]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < LEN; i++){
        if(used[i]) continue;
        used[i]= 1;
        perm[LEN - n]= i;
        rec(n-1);
        used[i] = 0;
        
    }
}
int main()
{
    rec(LEN);

    return 0;
}
