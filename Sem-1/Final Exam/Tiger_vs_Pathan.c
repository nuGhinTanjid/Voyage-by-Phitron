#include <stdio.h>
int main(){

    int t;
    scanf("%d", &t);
    
    
    
    for(int i=1; i<=t; i++){

        int n;
        scanf("%d", &n);
        char a[n];
        int cnt=0, cntp=0;
        for(int j=0; j<n; j++)
        {
            scanf(" %c", &a[j]);
            
            if(a[j]=='T'){
                cnt++;
            }
            else if(a[j]=='P'){
                cntp++;
            }     
        }


         if (cnt > cntp) {
            printf("Tiger\n");
        } else if (cnt < cntp) {
            printf("Pathaan\n");
        } else {
            printf("Draw\n");
        }


    }

return 0;
}




