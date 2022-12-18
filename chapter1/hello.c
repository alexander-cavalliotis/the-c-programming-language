#include <stdio.h>

void main()
{
	// first way
	printf("hello, world\n");

	// second, identical way
	printf("hello, ");
	printf("world");
	printf("\n");
	
	// Ex 1-2
	printf("hello, world\a");  // \a is the "bell"
	printf("hello, world\f");  // \f is the "form-feed"
	printf("hello, world\b");  // \b is the "backspace"
	printf("hello, world\v");  // \v is the "vertical tab"
	printf("hello, world\t");  // \t is the "horizontal tab"
		
	
// } // Ex 1-1: leave out bracket, get "hello.c:18:9: error: expected declaration or statement at end of input"
}