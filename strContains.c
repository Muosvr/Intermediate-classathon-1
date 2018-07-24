#include <stdio.h>
#include <string.h>

//main function takes two strings as arguments
int main(int argc, char* argv[])
{
    if(argc != 3){
        printf("Usage: strContains: string1 string 2\n");
        return 3;
    }
    // printf("%s, %s\n", argv[1], argv[2]);
//take the first char from string 2
    // printf("%c\n",argv[2][0]);
    char lead = argv[2][0];
    int counter = 0;
    int decision = 0;

//compare it with every char from string 1 to find match
    for (int i = 0; i<strlen(argv[1]); i++){

        char target = argv[1][i];
        if (lead == target){
            if(strlen(argv[2])==1){
                decision = 1;
            }else{
                for(int j = 1; j < strlen(argv[2]); j++){

                    if(argv[2][j] != argv[1][i+j]){
                        decision = 0;
                        break;
                    }
                    decision = 1;
                }
            }

            if (decision == 1){
                counter ++;
                decision = 0;
            }

        }
    }

    // printf("There are %i matches\n", counter);


//if there is a match compare the following characters in string 2 to see if match
//counter + 1 for every full match

//return 0 and "The string does not exist" if counter = 0
    if(counter == 0){
        printf("The string does not exist\n");
        return 0;
//return 1 and "The string exist" if counter = 1
    }else if(counter == 1){
        printf("The string exist\n");
        return 1;
//return 2 and  "This string is full of the word" if counter > 1
    }else if(counter > 1){
        printf("This string is full of the word\n");
        return 2;
    }
}
