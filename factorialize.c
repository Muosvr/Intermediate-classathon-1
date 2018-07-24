#include <stdio.h>
#include <cs50.h>
#include <string.h>

int factorial(int n){
    if (n == 1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int main (int argc, string argv[])
{
    if (argc != 2){
        printf("Usage: factorialize number\n");
        return 1;
    }
int num = atoi(argv[1]);

printf("%i\n", factorial(num));
return 0;

}
