#include <stdio.h>
#include <string.h>
int main(){

    char s[100001];;
    scanf("%s", s);

    int cons=0;

    for(int j=0; j<strlen(s); j++)
        {
            if(s[j]!= 'a' && s[j]!= 'e' && s[j]!= 'i' && s[j]!= 'o' && s[j]!= 'u')
            {
                cons++;
            } 
        }
       printf("%d\n", cons);
return 0;
}








// #include <stdio.h>
// #include <string.h>

// int main() {
//     char s[100001];
//     scanf("%s", s);

//     int cons = 0;

//     for (int j = 0; j < strlen(s); j++) {
//         if (s[j] != 'a' && s[j] != 'e' && s[j] != 'i' && s[j] != 'o' && s[j] != 'u') {
//             cons++;
//         }
//     }

//     printf("%d\n", cons);

//     return 0;
// }
