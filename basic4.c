#include <stdio.h>    
#include <stdlib.h>    
    
int main()    
{    
    int starthour, startmin, endhour, endmin, fee=0, totalhour, totalmin, totaltime;    
    while(scanf("%d %d\n%d %d",&starthour,&startmin,&endhour,&endmin)!=EOF)  
    {    
        totalhour = (endhour-starthour)*60;     
        totalmin = endmin-startmin;     
        totaltime = totalhour + totalmin;     
        if(totaltime>240)    
        {    
            fee = fee + ((totaltime-240)/30)*60;    
            totaltime = 240;    
        }    
        if(totaltime>120)    
        {    
            fee = fee + ((totaltime-120)/30)*40;    
            totaltime = 120;    
        }    
        if(totaltime<=120)    
        {    
            fee = fee + (totaltime/30)*30;    
        }  
    }  
    printf("%d\n",fee);  
}  