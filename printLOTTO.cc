#include <iostream>
#include <stdlib.h>   
#include <time.h>
int main() {
    int number[7] ={},number3[4]={},q=2000;
    std::srand(time(NULL));
   
   for (int i = 0;i<6;i++) 
    {
        number[i] =std::rand()%10;
    std::cout << number[i] ;}
    std::cout<<std::endl;
    for(int j =0 ; j<5;j++)
    { 
        for(int k =0 ; k < 3 ; k++)
        {
            number3[k] =std::rand()%10;
            std::cout << number3[k] ;
            while(q!=0){q--;}
        }
        std::cout<<std::endl;
    }
}
