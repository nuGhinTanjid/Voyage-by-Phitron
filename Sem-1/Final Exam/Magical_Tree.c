#include <stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    
    
    if(n%2!=0 && n<=21)
 {
        
        int star=1;
        int line= n/2  +6;
        int space=line-1;

    for(int i=0; i<line; i++){

        for(int j=0; j<space; j++)
        {
            printf(" ");
        }
        for(int j=0; j<star; j++)
        {
            printf("*");
        }

        space--;
        star=star+2;
        
        printf("\n");
    }
    for(int i=0; i<5; i++){
        for (int j = 0; j < 5; j++) {
                printf(" ");
            }
        for(int j=0; j<n; j++){
            printf("*");
        }
        
        printf("\n");
    }
 }
    
    

return 0;
}