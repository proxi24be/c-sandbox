# include <stdio.h>
# include <assert.h>
# include <string.h>
# include "sandbox.h"
# include "stringTest.h"
# include "test.h"


int main () {

	if (testParamStatic())
		printf("test param static function did end successfully\n");

	if (testPointer1())
		printf("the test pointer1 did end successfully\n");

	if (testPointer2())
		printf("the test pointer2 did end successfully\n");

	if (testStaticArray())
		printf("the test staticArray did end successfully\n");

	if (runStringTest())
		printf("All the tests in stringTest.c did complete successfully\n");

	return 0;
}

