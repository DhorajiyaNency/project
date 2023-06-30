#include <stdio.h>

int main()
{
     int x=10, y = 30;
     
     x = x + y; 
     // x=40
     y = x - y; // y=40-30=10
     // y = 10
     x = x - y; // x=40-10=30
     // x = 30
     
     printf("\n y = %d",y);
     printf("\n X = %d",x);
     

    return 0;
}
