/*
 * This file gives the hello world message after compiling and running it

 * $ gcc hello.c[ENTER]		...Compile, Creates default object file
 * $ ./a.out[ENTER]		...Run
 * $ rm a.out[ENTER]		...Delete

 * OR...

 * $ gcc hello.c -o H[ENTER]	...Compile, Creates named object file
 * $ ./H[ENTER]			...Run
 * $ rm H[ENTER]		...Delete
 */
#include<stdio.h>
int main(void){
	printf("Hello, World!\n");
	return 0;
}
