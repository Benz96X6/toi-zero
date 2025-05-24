#include<stdio.h>
int main(){
    int a[1000];//ตัวเก็บเลข
    int b;
    scanf("%d",&b);
    for (int i = 0; i < b; i++)
    scanf("%d",&a[i]);
    int c = 0;
    for (int i = 0; i < b; i++)
    {
        if (a[i]>a[i+1]&&a[i]>a[i-1]) ++c;

        
        
    }
    printf("%d",c);
    
}