#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if (argc != 2){
        printf("Usage: ./factorial number\n");
        return 1;
    }
    
    factorial(atoi(argv[2]));
}

int factorial(int n){
    if (n = 1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}