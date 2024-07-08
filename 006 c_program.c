#include <stdio.h>
int main(){
     int flying_time , hr , min ;
     flying_time = hr = min = 0;


     printf("Enter flying time from HYD to Singapore in minutes....: ");
     scanf("%d",&flying_time);

     hr = flying_time/60;
     min = flying_time%60;

     printf("flying time from HYD to singapore is.....:%d hours and %d mintues\n",hr,min);

return 0;

}
