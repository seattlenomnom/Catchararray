/* catchararry.c
 * source file for catchararry, a program to concatenate two character arrays.
 * This is horribly pedantic, but I'll learn to love strings doing this :)
*/

#include <stdio.h>

void concat(char result[], const char str1[], int n1,
        const char str2[], int n2);

int main(int argc, char *argv[]) {



















    return(0);
}

void concat(char result[], const char str1[], int n1,
        const char str2[], int n2) {

    int i, j;    // indices for loops

    /* copy str1 to result */

    for(i = 0; i < n1; ++i)
        result[i] = str1[i];

    /* copy str2 to end of result */

    for(j = 0; j < n2; ++j)
        result[n1 + j] = str2[j];

}


