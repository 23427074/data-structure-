#include <stdio.h>  
#include <ctype.h>  
#include <string.h>  
  
int transformation ( int value , int number )  
{  
    if ( value == 0 )  
    {  
        return 0 ;  
    }   
    else  
    {  
        transformation ( value / number , number );  
        int test = value % number;  
        if ( test >= 10 )  
        {  
            printf ( "%c" , (char) ( test - 10 + 'a' ));  
        }   
        else  
        {  
            printf ( "%d" , test );  
        }  
    }  
}   
  
int main ()  
{  
    int value = 0 , mode = 0;  
    scanf ( "%d" , &value );  
    scanf ( "%d" , &mode );  
    printf ( "The base %d representation of %d is " , mode , value );  
    if ( value == 0 )  
    {  
        printf ( "0" );  
    }  
    else  
    {  
        transformation ( value , mode );  
    }  
    printf(".\n");  
}  