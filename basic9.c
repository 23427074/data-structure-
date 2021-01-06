#include <stdio.h>  
  
int main()  
{  
    int num=0;  
    while(scanf("%d",&num)!=EOF)  
    {  
        int j=0;  
        for(int i=3;i<=num;i=i+3)  
        {  
            j=j+i;  
        }  
        printf("%d\n",j);  
    }  
}  