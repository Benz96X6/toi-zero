    #include<stdio.h>
    int main(){
        int a;
        int b[1000] ={0};
        int x;
        scanf("%d",&a);
        for(int i = 0; i<a; ++i){
        
        scanf("%d",&x);
        ++b[x];
    }
        int cnt= 0;
        for (int i = 1;i<= 300;i++)
        {
            if(b[i]>cnt)
            cnt = b[i];
        }
        printf("%d",cnt);
    }