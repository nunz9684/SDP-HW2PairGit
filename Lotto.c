
#include <stdlib.h>   
#include <time.h>
        int random_number(int min_num, int max_num);

        int main(void) {
          printf("Min : 000000 Max : 999999 %d\n",random_number(000000,999999));
          for (int i=0 ; i < 5 ;i++) {
          printf("Min : 000 Max : 999 %d\n",random_number(000,999));
          }
          return 0;
        }

        int random_number(int min_num, int max_num)
        {
            int result=0,low_num=0,hi_num=0;
            if(min_num<max_num)
            {
                low_num=min_num;
                hi_num=max_num+1; // this is done to include max_num in output.
            }else{
                low_num=max_num+1;// this is done to include max_num in output.
                hi_num=min_num;
            }
            srand(time(NULL));
            result = (rand()%(hi_num-low_num))+low_num;
            return result;
        }