    #include <stdio.h>


    int main()
    {
        char name[100], surname[100];
        printf("%s",name);
        if(scanf("%s",name) != 1){
            printf("error");
        }
           
        
        
        printf("%s",surname);
       if ( scanf("%s", surname)!=1)
       {
        printf("error");
       }
       
        printf("Hello %s %s\n",name ,surname);
        printf("%c%c%c%c",name[0],name[1],surname[0],surname[1]);
        
        
    }
    