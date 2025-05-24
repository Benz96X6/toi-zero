#include<stdio.h>
#include<string.h>
#include<limits.h>
int main(){
    int n;//รับจำนวน
    int res = 0;//นับจำนวนคนที่ได้มากกว่า 15
    char s[1000];//ชื่อ
    int mx = INT_MIN;//ทำหน้าที่ไว้รับคะแนนที่มากที่สุด
    scanf("%d",&n);
    for (int i = 0; i < n; i++)//loop ตามจำนวน
    {
        char str[1005];//ตัวแปรเก็บชื่อ
        int w;//ตัวแปรเก็บน้ำหนัก
        scanf("%s%d",str,&w);//รับช่ื่อและน้ำหนัก
        if (w>15) ++res;//+จำนวนคนที่ได้เข้าไป 1 

        if (w>mx)//รับคะแนนที่มากที่สุด
        {
           mx=w;//เปลี่ยนmxให้เป็นน้ำหนักที่มากที่สุด
           strcpy(s,str);//ก็อป str ไปไว้ใน s
        }
        
    }
    printf("%d\n %s  %d",res,s,mx);
    
}