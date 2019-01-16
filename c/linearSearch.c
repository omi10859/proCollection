#include <stdio.h>

int main(){
    int n, arry[20];
    int s=0;
    printf("Enter Length of Array: \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter Value for %d :", i);
        scanf("%d",&arry[i]);
    }
    printf("Enter Value you want to search \n");
    scanf("%d", &s);
    for(int j=0;j<n;j++){
        if(s==arry[j]){
            printf("Value Found At: %d", j);
            break;
        }
        else{
            printf("Value does not found");
            break;
        }

    }
}
