# include <stdio.h>
# include <assert.h>
# include "sandbox.h"
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

	// magic !
	int array[5] = {0}, x ;
	for (x = 0; x < 5; x++)
		printf("%d\n", array[x]);

	return 0;
}

