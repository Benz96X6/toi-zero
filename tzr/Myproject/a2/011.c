#include<stdio.h>
#include<stdbool.h>
int main(){
   int a[10005];
    for (int i = 0; i < 10; i++)
    {
       int x;
        scanf("%d",x);
       if(!a[x])print("%d",x);//!a[x] มีค่าเป็น false
       a[x] = true;//พอทำเสร็จตรงนี้ทำให้เป็น true ครั้งหน้าที่เจอเลขนี้ก็จะไม่printเพราะมันเป็น true มันจะปริ้นต่อเมื่อ!a[x]เป็น false
    }
    return 0;
}