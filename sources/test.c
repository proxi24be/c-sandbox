#include <stdio.h>
#include <assert.h>
#include "sandbox.h"
#include "test.h"



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
