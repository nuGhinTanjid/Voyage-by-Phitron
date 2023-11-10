#include <stdio.h>
int main(){

    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int flag=1;
    if(n!=m){
        flag=0;
    }

     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            
        //    if( (i==j) || (i+j==n-1) || (i == n - 1 - j))
        //    // if((i == j) || (i == n - 1 - j))
        //     {

        //         continue;
        //     }
        //     if(a[i][j]!=0){
        //         flag=0;
        //     }




             if ((i == j || i + j == n - 1) && a[i][j] != 1) {
                flag = 0; // It's not a Jadu Matrix
                break;
            } else if (i != j && i + j != n - 1 && a[i][j] != 0) {
                flag = 0; // It's not a Jadu Matrix
                break;
            }

        }
    }

    





if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }




    
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         printf("%d ", a[i][j]);
    //     }
    //     printf("\n");
    // }

return 0;
}