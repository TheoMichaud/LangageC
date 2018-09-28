#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float total = 1, base = 3;

    for(i=1; i<100000; i++){
        if(i%2 == 0){
            total = total + (1/base);
            base += 2;
        }
        else{
            total = total - (1/base);
            base += 2;
        }
    }

    printf("pi = %.4f", total*4);
    return 0;
}
