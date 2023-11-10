#include <stdio.h>
#include <string.h>
int main(){

    char s[10001];
    scanf("%s", s);
    // printf("%s", s);

    int cnt[26] ={0};

    for(int i=0; i<strlen(s); i++)
    {
        int value = s[i]- 'a';
        cnt[value]++;
    }

    
    for(int i=0; i<26; i++)
    {
      
        if(cnt[i]!=0)
        {   
          printf("%c - %d\n",i+97, cnt[i]);
        }
        
    }



return 0;
}