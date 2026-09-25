#include <stdio.h>
#define LEN_INPUT 21

int main(void) {
    
    char s1[LEN_INPUT];
    int len = 0;
    
    scanf("%s", s1);
    
    for (int i=0; i<LEN_INPUT; i++) {
        
        if (s1[i]=='\0') break;
        len++;
        
    }
    
    for (int i=0; i<len; i++) {
        
        if (s1[i]>=65 && s1[i]<97) {    //대문자를 소문자로 변환
            printf("%c",s1[i]+32);
        }
        
        else {
            printf("%c",s1[i]-32);  //소문자를 대문자로 변환
        }
    }

    return 0;
    
}
