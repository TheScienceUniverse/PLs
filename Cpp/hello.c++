/*
 * This file gives the hello world message after compiling and running it

 * $ g++ hello.c++[ENTER]	...Compile, Creates default object file
 * $ ./a.out[ENTER]		...Run
 * $ rm a.out[ENTER]		...Delete

 * OR...

 * $ g++ hello.c++ -o H[ENTER]	...Compile, Creates named object file
 * $ ./H[ENTER]			...Run
 * $ rm H[ENTER]		...Delete
 */
#include<iostream>
using namespace std;
int main(void){
	cout << "Hello, World!" << endl;
	return 0;
}
