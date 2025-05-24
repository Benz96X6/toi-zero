#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    char c[100];
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    int e = strlen(b);
    if (strlen(a)>5)
    {
        printf("%c%c%c%c",a[0],a[1],b[e -1],c[1]);
    }
    else printf("%c%c%c%c",a[0],c[0],c[1],b[e -1]);
    return 0;
}