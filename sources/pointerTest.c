#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "sandbox.h"
#include "pointerTest.h"
#include "params.h"


int runPointerTest() {

	assert(testPointer1());
	assert(testPointer2());
	assert(testPointerAndFunction());
	assert(testMyStrLen());
	assert(testMyStrCpy());
	assert(testMyIntCpy());

	return 1;
}


int testParamStatic () {
	int x ;
	for (x = 1; x<10; ++x)
		assert(x == staticParam());

	return 1;
}

int testPointer1 () {
	int x = 0;
	int *a = &x, *b;
	b = a ;
	assert (x == *b);

	int age = 33;
	int *pAge = &age;

	assert(age == *pAge);
	assert(&age == pAge);
	assert(&age == &*pAge);
	age = 43;
	assert(age == *pAge);

	return 1;
}

int testPointer2() {

	int a,b ;
	a = b = 1;
	incrementBy1AndBy2(&a, &b);
	assert (a == 2);
	assert (b == 3);
	incrementBy1AndBy2(&a, &b);
	assert (a == 3);
	assert (b == 5);

	return 1;

}

static void incrementBy1AndBy2 (int *a, int *b) {
	*a += 1;
	*b += 2;
}

int testStaticArray() {

	int array [4] ;
	array[0] = 1;	
	array[1] = 2;	
	array[2] = 3;
	array[3] = 4;

	// reference the first index.
	assert (1 == *array);
	assert (array[0] == *array);
	// reference the second index.
	assert (array[1] == *(array + 1));

	return 1;	

}

int testPointerAndFunction() {

	// To implement.
	return 1;
}

int testMyStrLen () {
	char s[] = "12345", ss[MAX_SIZE];
	assert(mystrlen(s) == strlen(s));

	strcpy(ss, "bonjour le monde libre");
	assert(mystrlen(ss) == strlen(ss));

	return 1;
}

int testMyStrCpy() {
	char ss[MAX_SIZE], myss[MAX_SIZE];

	strcpy(ss, "xbox one vs ps4 this is very interesting.");

	// Test if the copied strings are the same.
	mystrcpy(myss, ss);
	assert(strcmp(ss, myss) == 0);

	// Test 
	strcpy(ss, "bonjour");
	assert(strcmp(ss, myss) != 0);
	
	mystrcpy(myss,"");
	assert(strcmp(myss, "") == 0);

	assert(mystrlen(myss)==0);

	return 1;
}

int testMyIntCpy() {
	int x[] = {1,2,3,4,5}, xx[MAX_SIZE];
	myintcpy(xx, x, 5);
	int y ;
	for (y = 0; y < 5; y++)
		printf("testMyIntCpy : %d\n", xx[y]);

	return 1;
}


static mystrlen (const char *s) {
	int size = 0;
	while (*s++)
		size++;

	return size ;
}

static char * mystrcpy (char *destination, const char *origin) {
	
	// Iterate while not end of the string.
	// The end is represented by '\0'.
	while (*origin) 
		*destination++ = *origin++;

	*destination = '\0';

	return destination;

}

static int * myintcpy (int *destination, const int *source, const int size) {
	int x;
	for(x = 0; x<size; x++)
		*destination++ = *source++;

	return destination;
}

