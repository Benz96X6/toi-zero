#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
     if (a<=0)
     {
        printf("Error : Please input positive number");  /* code */
        return 0;
     }
     if (a>=10)
     {
        printf("“Error : Out of range”");   /* code */
        return 0;
     }
     
     
    if(a==1) {printf("I");}
     if (a==2) printf("II");
     if(a==3)printf("III");
     if(a==4)printf("IV");
     if(a==5)printf("V");
     if(a==6)printf("VI");
     if(a==7)printf("VII");
     if(a==8)printf("VIII");
     if(a==9)printf("IX");
   

    return 0;
    
}