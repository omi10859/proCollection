#include <stdio.h>
#include <unistd.h>
#include <term.h>
#include <stdlib.h>


int main(){
for(int z=1;z<=12;z++){
    for(int j=1;j<=60;j++){
      for(int i=1;i<=60;i++){
        sleep(1);
        system("clear");
        printf("TIME: %d: %d: %d \n", z, j, i);
      }
    }
  }
return 0;
}
