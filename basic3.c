#include <stdio.h>   
#include <stdlib.h>     
#include <math.h>    
    
int main()  
{    
    int i[2];    
    for(int j=0;j<2;j++)  
    {    
        scanf("%d",&i[j]);    
    }    
    if(pow(i[0],2)+pow(i[1],2)<=pow(100,2))  
    {    
        printf("inside\n");    
    }    
    else  
    {    
        printf("outside\n");    
    }    
}  