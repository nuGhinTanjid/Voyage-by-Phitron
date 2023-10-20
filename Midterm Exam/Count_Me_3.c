#include <stdio.h>
#include <string.h>
int main(){

    int testcase;
    scanf("%d", &testcase);

    for(int i=1; i<=testcase; i++)
    {


        char s[10001];
        scanf("%s", s);

        int capital=0, small=0, digits=0;

        for(int j=0; j<strlen(s); j++)
        {
            if(s[j]>= 'a' && s[j]<= 'z')
            {
                small++;
            }
            else if(s[j]>= 'A' && s[j]<= 'Z')
            {
                capital++;
            }
            else if(s[j]>= '0' && s[j]<= '9')
            {
                digits++;
            }
           
        }

            printf("%d %d %d\n", capital, small, digits);

    }

return 0;
}