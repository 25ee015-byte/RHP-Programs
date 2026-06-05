#include <stdio.h>
#include <stdlib.h>
int main(){
    char str[100001];
    scanf(“%s”, str);
    int flag = 0;
    for(int i = 0; str[i] != ‘\0’; i++){
        char ch = str[i];
        flag = flag | (1 << (ch - ‘a’));
    }
    if(flag == (1 << 26)-1){
        printf(“Yes”);
    }else{
        printf(“No”);
    }
}
