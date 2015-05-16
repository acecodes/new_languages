#include <stdio.h>
#include <string.h>

// int main() {
//     // Playing around with arrays
//     char str_a[20];

//     strcpy(str_a, "Hello world!\n");
//     printf(str_a);
// }

// // Exploring sizes of data types

// int main() {
//     printf("The 'int' data type is\t\t %d bytes\n", sizeof(int));
//     printf("The 'unsigned int' data type is\t\t %d bytes\n", sizeof(unsigned int));
//     printf("The 'short int' data type is\t\t %d bytes\n", sizeof(unsigned int));
//     printf("The 'long int' data type is\t\t %d bytes\n", sizeof(long int));
//     printf("The 'long long int' data type is\t\t %d bytes\n", sizeof(long long int));
//     printf("The 'float' data type is\t\t %d bytes\n", sizeof(float));
//     printf("The 'char' data type is\t\t %d bytes\n", sizeof(char));
// }

int main() {
    char str_a[20]; // 20-element array
    char *pointer; // A point for the character array
    char *pointer2; // Another one

    strcpy(str_a, "Hello world!\n");
    pointer = str_a; // Set first pointer to start of array
    printf(pointer);

    pointer2 = pointer + 2; // Set second pointer 2 bytes further in
    printf(pointer2);
    strcpy(pointer2, "y you guys!\n"); // Copy into that spot
    printf(pointer);
}