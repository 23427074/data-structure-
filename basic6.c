#include<stdio.h>  
  
int main(void)  
{  
    int season=0;  
    while(scanf("%d",&season)!=EOF)  
    {  
        if(season>=3&&season<=5)  
        {  
            printf("Spring\n");  
        }  
        else if(season>=6&&season<=8)  
        {  
            printf("Summer\n");  
        }  
        else if(season>=9&&season<=11)  
        {  
            printf("Autumn\n");  
        }  
        else if(season==1||season==2||season==12)  
        {  
            printf("Winter\n");  
        }  
    }  
}  