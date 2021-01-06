#include <stdio.h>    
    
    
int main()  
{    
    int m=0;    
    int n=0;     
       
        scanf("%d",&m);    
        scanf("%d",&n);    
        switch(m)  
        {  
            case 1:  
            if(n<20)  
            printf("Capricorn\n");  
            else  
            printf("Aquarius\n");  
            break;  
            case 2:  
            if(n<19)  
            printf("Aquarius\n");  
            else  
            printf("Pisces\n");  
            break;  
            case 3:  
            if(n<21)  
            printf("Pisces\n");  
            else  
            printf("Aries\n");  
            break;  
            case 4:  
            if(n<21)  
            printf("Aries\n");  
            else  
            printf("Taurus\n");  
            break;  
            case 5:  
            if(n<22)  
            printf("Taurus\n");  
            else  
            printf("Gemini\n");  
            break;  
            case 6:  
            if(n<22)  
            printf("Gemini\n");  
            else  
            printf("Cancer\n");  
            break;  
            case 7:  
            if(n<23)  
            printf("Cancer\n");  
            else  
            printf("Leo\n");  
            break;  
            case 8:  
            if(n<24)  
            printf("Leo\n");  
            else  
            printf("Virgo\n");  
            break;  
            case 9:  
            if(n<24)  
            printf("Virgo\n");  
            else  
            printf("Libra\n");  
            break;  
            case 10:  
            if(n<24)  
            printf("Libra\n");  
            else  
            printf("Scorpio\n");  
            break;  
            case 11:  
            if(n<23)  
            printf("Scorpio\n");  
            else  
            printf("Sagittarius\n");  
            break;  
            case 12:  
            if(n<22)  
            printf("Sagittarius\n");  
            else  
            printf("Capricorn\n");  
            break;  
              
        }  
      
}  