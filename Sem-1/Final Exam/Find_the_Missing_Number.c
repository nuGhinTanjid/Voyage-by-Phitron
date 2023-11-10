#include <stdio.h>
int main(){

    long long int t;
    scanf("%lld", &t);
    long long int ar[t][4];
    //taking input
    for(int i=0; i<t; i++){
        for(int j=0; j<4; j++){
            scanf("%lld", &ar[i][j]);
        }
    }

   //main operation
   long long int res, res1;
   
    
       
        for (int i = 0; i < t; i++) {
        res = ar[i][1] * ar[i][2] * ar[i][3];
        if (res != 0 && ar[i][0] % res == 0) {
            res1 = ar[i][0] / res;
            printf("%lld\n", res1);
        } else {
            printf("-1\n");
        }
    }
           
           
return 0;
}