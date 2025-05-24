#include<stdio.h>
int main(){
    char a;
    int b;
    scanf("%c",&a);
    scanf("%d",&b);
    if (a =='H'&& b ==4567)
    {
        printf("safe unlocked");
    }
    else if(a =='H'&&b!=4567){
        printf("safe locked - change digit");
    }
    else if(a !='H'&&b ==4567){
        printf("safe locked - change char");
    }
    else printf("safe locked");
}