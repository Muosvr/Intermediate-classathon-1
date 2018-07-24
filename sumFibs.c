#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (int argc, char *argv[]){
    if (argc != 2){
        printf("Usage: sumFibs integer");
        return 1;
    }

    int max = atoi(argv[1]);

    // printf("%i\n", max);
    int pre = 1;
    int curr = 1;
    int sum = pre+curr;
    int next = 0;

    //1 1 2 3 5 8
    while(next < max)
    {
        int temp = curr + pre;
        if(temp%2 !=0){
            sum = sum + temp;
            // printf("%i\n", temp);
        }

        pre = curr;
        curr = temp;

        next = curr + pre;
    }
    printf("%i\n", sum);
    return 0;
}