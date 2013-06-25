#include <stdio.h>

int staticParam () {
	static int param = 0;
	return ++param ;
}

static void staticFunction() {
	printf("only functions in the same file can see me\n");
}