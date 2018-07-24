#include <stdio.h>
#include <cs50.h>

int main(int argc, char *argv[]){

    if(argc != 2){
        printf("Usage: sumPrimes integer\n");
        return 1;
    }

    int max = atoi(argv[1]);

    int sum = 0;
    int i = 1;

    while(i<=max){

        int decision = 1;

        for (int j=2; j<i; j++){
            if (i%j == 0){
                decision = 0;
                break;
            }
        }
        if (decision == 1){
            sum = sum + i;
            // printf("%i\n", i);
        }
        i++;
    }
    printf("Sum is: %i\n", sum);
    return 0;
}