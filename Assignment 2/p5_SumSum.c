#include <stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    int a;
    int sumNeg=0, sumPos=0;
    
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        if(a>0)
        {
            sumPos=sumPos+a;
        }
        else
        {
            sumNeg= sumNeg+a;
        }
        
    }

    printf("%d %d", sumPos, sumNeg);



return 0;
}