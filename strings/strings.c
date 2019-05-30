#include <stdio.h>
#include <stdlib.h>

/*
    Given a character array s (as a pointer), return the number of 
    characters in the string.
    
    Do not just use the `strlen` function from the standard libary.
*/
int string_length(char *s)
{
    // int runner = 1;
    // int counter = 0;

    // while(runner == 1) {
    //     if(s[counter] != '\0'){
    //         counter++;
    //     } else {
    //         runner = 0;
    //         break;
    //     }
    // }
    // return counter;

    int i, stringlen = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        stringlen++;
    }

    return stringlen;
}

/*
    Write a function that reverses the order of string s and outputs 
    the reversed string to the input array rv. The rv array will have 
    enough space for the reversed string. Don't forget to terminate 
    the reversed string with a null character. Return the rv array.
*/
char *reverse_string(char *rv, char *s)
{
    int stringlen = string_length(s);
    int curchar = 0;

    while (stringlen >= 0) {
        stringlen -= 1;
        *(rv + curchar) = *(s + stringlen);
        curchar += 1;
    }
    *(rv + curchar) = '\0';
    return rv;
}

#ifndef TESTING
int main(void)
{
    char quote1[] = "Don't forget to be awesome";
    char quote2[] = "a man a plan a canal panama";

    char rv[512];

    printf("The string 'Don't forget to be awesome' has %d characters.\n", string_length(quote1));
    printf("The string 'a man a plan a canal panama' reversed is: '%s'\n", reverse_string(rv, quote2));

    return 0;
}
#endif
    
