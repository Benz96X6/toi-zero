#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<1582){
        if(a%4 == 0)
            printf("yes");
            else printf("no");
        
    }
    if (a%4 != 0) printf("no");
    else {
        if (a%100 !=0) printf("yes");
        else {
            if (a %400 !=0) printf("no");
            else printf("yes");
        }
    }
    
    
}