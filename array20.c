#include <stdio.h>  
#include <stdlib.h>  
#define max 128  
  
int main()  
{  
    int num=0;  
    int k[max]={0};  
    int print=0;  
    int tmp=0;  
    scanf("%d",&num);  
    int *number=malloc(sizeof(int)*num);  
    for(int i=0;i<num;i++)  
    {  
        scanf("%d ",&number[i]);  
    }  
    for(int l=0;l<num;l++)  
    {  
        tmp=number[l];  
        k[tmp]++;  
    }  
    for(int j=0;j<max;j++)  
    {  
        if(k[j]>1)  
        {  
            print=1;  
            break;  
        }  
    }  
    if(print==0)  
    {  
        printf("1\n");  
    }  
    else  
    {  
        printf("0\n");  
    }  
} 