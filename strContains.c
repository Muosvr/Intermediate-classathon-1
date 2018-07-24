#include <stdio.h>
#include <string.h>

//main function takes two strings as arguments
int main(int argc, char* argv[])
{
    //check input argument
    if(argc != 3){
        printf("Usage: strContains: string1 string 2\n");
        return 3;
    }

    //take the first char from string 2 to search for potential words matching the first letter
    char lead = argv[2][0];
    int counter = 0;
    int decision = 0;

    //compare it with every char from string 1 to find match
    for (int i = 0; i<strlen(argv[1]); i++){
        //set the character to be compared in string 1 as target character
        char target = argv[1][i];

        //set decision as 1 to count this as match if the first character of string 1 and string 2 match and if string 2 has only 1 character
        if (lead == target){
            if(strlen(argv[2])==1){
                decision = 1;
            }else{
                //if there is a match and string 2 has more than 1 character, compare the following characters in string 2 to see if match
                for(int j = 1; j < strlen(argv[2]); j++){

                    if(argv[2][j] != argv[1][i+j]){
                        decision = 0;
                        break;
                    }
                    decision = 1;
                }
            }
            //counter + 1 for every full match
            if (decision == 1){
                counter ++;
                decision = 0;
            }
        }
    }

    // printf("There are %i matches\n", counter);

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
