#include <stdio.h>
int main(){


int testcase;
scanf("%d", &testcase);

for(int i=0; i<testcase; i++)
{


    int n;
    scanf("%d", &n);
    int ar[n];
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }
    
    int x;
    scanf("%d", &x);
    int foundX=0;

     for(int i=0; i<n; i++)
     {
        if(ar[i] == x)
        {
            foundX =1;
            break;
        }
        
    }

    if (foundX) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }

}
return 0;
}