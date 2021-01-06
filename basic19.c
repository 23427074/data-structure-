#include <stdio.h>  
  
int main()  
{  
    int casenum=0,max=0,t[25]={0};  
    scanf("%d",&casenum);  
    int s=0;  
    int d=0;  
    for(int j = 0;j < casenum;j++)    
    {    
        scanf("%d",&s);  
        scanf("%d",&d);   
        for(int i = s;i < d;i++)    
        {    
            t[i]++;    
        }    
    }    
    for(int k = 0;k < 25;k++)    
    {    
        if(t[k] > max)    
        {    
            max = t[k];    
        }    
    }    
    printf("%d\n",max);  
}  