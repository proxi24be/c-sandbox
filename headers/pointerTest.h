

int runPointerTest();

/**
 * @return true (1) if the tests did end successfully 
 * otherwise an error (assert) is raised up.
 */
int testParamStatic();

/**
 * Basic test on pointer. Test how the pointer is addressed and used.
 * @return true (1) if the tests did complete successfully 
 * otherwise an error (assert) is raised up.
 */
int testPointer1();


/**
 * Test a function by using pointer as parameters.
 * @return true (1) if the tests did end successfully 
 * otherwise an error (assert)is raised up.
 */
int testPointer2();

/**
 * At every call that function will increment "a" by 1 and "b" by 2.
 * 
 * @param  a int *
 * @param  b int *
 */
static void incrementBy1AndBy2(int *a, int *b);

int testStaticArray();

int testPointerAndFunction();

int testMyStrLen();

int testMyStrCpy();

int testMyIntCpy();

static mystrlen(const char *s);

static char * mystrcpy (char *destination, const char *origin);

static int * myintcpy (int *destination, const int *source, const int size);
	

