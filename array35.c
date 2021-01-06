#include <stdio.h>  
#define ROW 12  
#define COL 10  
int count (int x)  
{  
    if(x<=2008 && (2008-x)%12==0)  
        return 0;  
    else if(x>2008)  
        return (x-2008)%12;  
    else  
        return 12-(2008-x)%12;  
}  
  
int main()  
{  
    int n;  
    scanf("%d",&n);  
    if(count(n)==0)  
    printf("rat\n");  
    else if(count(n)==1)  
    printf("ox\n");  
    else if(count(n)==2)  
    printf("tiger\n");  
    else if(count(n)==3)  
    printf("rabbit\n");  
    else if(count(n)==4)  
    printf("dragon\n");  
    else if(count(n)==5)  
    printf("snake\n");  
    else if(count(n)==6)  
    printf("horse\n");  
    else if(count(n)==7)  
    printf("sheep\n");  
    else if(count(n)==8)  
    printf("mokey\n");  
    else if(count(n)==9)  
    printf("rooster\n");  
    else if(count(n)==10)  
    printf("dog\n");  
    else if(count(n)==11)  
    printf("pig\n");  
    else  
    printf("ox\n");  
    return 0;  
}  