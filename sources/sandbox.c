#include <stdlib.h>
#include <stdio.h>

int staticParam () {
	static int param = 0;
	return ++param ;
}
