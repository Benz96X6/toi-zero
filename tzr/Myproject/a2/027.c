#include<stdio.h>
#include<limits.h>
int main(){
    int a;
    int c = INT_MIN;
    int res =1;
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
       int b;
       scanf("%d",&b);
       if (b>c)
       {
            c=b;

       }    
       else if(b==c) ++res;
    }
    printf("%d\n%d",c,res);
}