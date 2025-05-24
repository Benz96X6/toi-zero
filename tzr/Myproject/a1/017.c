#include<stdio.h>
int main(){
    int y1;
    int m1;
    int d1;
    int y2;
    int m2;
    int d2;
    scanf("%d%d%d",&y1,&m1,&d1);
    scanf("%d%d%d",&y2,&m2,&d2);
    if (y1<y2||y1==y2&&m1<m2||y1==y2&&m1==2&&d1<d2)
    {
        printf("1");
    }
    else if (y2<y1||y2==y1&&m2<m1||y2==y1&&m2==m1&&d2<d1)
    {
       printf("2");
    }
     else if(y1==y2&&m1==m2&&d1==d2){
        printf("0");
     }
    return 0;

}