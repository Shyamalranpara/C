
#include <stdio.h>
main(){
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 6-i; j++){
            printf("%d ",j%2);
        }
        printf("\n");
    }
}   
