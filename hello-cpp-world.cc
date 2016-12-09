#include <iostream>
#include <stdlib.h>   
#include <time.h>

int main() {
    int number =0;
    
    std::srand(time(NULL));
   
    for (int i = 0;i<100;i++) 
    {number =std::rand()%100+1;
    std::cout << number <<" ";}
}
