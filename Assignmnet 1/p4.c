#include <stdio.h>
int main(){

int N;
scanf("%d", &N);

if( N>1000 && N-1000>=500)
{
    printf("I will buy Punjabi\nI will buy new shoes\nAlisha will buy new shoes");
}
    else if(N > 1000 || N ==1500)
    {
        printf("I will buy Punjabi");
    }
    else
    {
            printf("Bad Luck");
    } 
   return 0;

}
//IF-ELSE LADDER

 