#include<stdio.h>
#include<string.h>
int main(){
    char pw[8];
    scanf("%s",pw);
    if (pw[2]=='1'&&pw[3]=='6')
    {
        printf("yes");
    }
    else printf("no");
    return 0;
}