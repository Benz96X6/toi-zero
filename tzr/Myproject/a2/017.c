#include<stdio.h>
int main(){
    char a;
    char b;
    char c;
    int chi;
    scanf(" %c %c %c%d",&a,&b,&c,&chi);
    int p;
    
    if(a=='S'&&b=='R')p=60;
    if(a=='M'&&b=='R')p=80;
    if(a=='L'&&b=='R')p=100;
    if(a=='S'&&b=='T')p=80;
    if(a=='M'&&b=='T')p=100;
    if(a=='L'&&b=='T')p=120;
    if(c=='P')printf("%d",p+15*chi);
    if(c=='E')printf("%d",p+10*chi);
    if(c=='N')printf("%d",p);
}   