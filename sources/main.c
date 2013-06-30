# include <stdio.h>
# include <assert.h>
# include <string.h>
# include "sandbox.h"
# include "stringTest.h"
# include "pointerTest.h"
# include "structTest.h"



int main () {

	if (runPointerTest())
		printf("All the tests in pointerTest.c did complete successfully\n");

	if (testStaticArray())
		printf("the test staticArray did end successfully\n");

	if (runStringTest())
		printf("All the tests in stringTest.c did complete successfully\n");

	if (runStructTest())
		printf("All the tests in structTest.c did complete successfully\n");


	return 0;
}

