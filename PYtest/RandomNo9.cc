#include <iostream>
#include <stdlib.h>   
#include <time.h>
int main() {
    int number[7] ={},number3[4]={},q=2000;
    std::srand(time(NULL));
   
   for (int i = 0;i<6;i++) 
    {
        number[i] =std::rand()%9;
    std::cout << number[i] ;}

  
}
