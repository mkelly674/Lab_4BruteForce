#include <stdio.h>

#define NUM_FRUIT 7
#define NEED 3 
char * FRUITS[NUM_FRUIT] = {"apples", "grapes", "oranges", "grapefruit", "kiwi", "totamoes", "bananas"};

void rec(int n, int need){
    static int selected[NEED];
    
    if(need ==0){
        static int count = 0;
        count++;
        printf("%d. ", count);
        for(int i= 0; i< NEED;i++){
            printf(" %s", FRUITS[selected[i]]);
        }
        
        printf("\n");
    }
}
int main()
{
    printf("Hello World");

    return 0;
}
