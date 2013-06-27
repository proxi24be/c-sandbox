# include <stdio.h>
# include <string.h>
# include <assert.h>


int runStringTest () {
	if (testStringStrCpy() 
		&& testStringCat () 
		&& testStringStrChr()
		&& testStringPBrk()
		&& testStringStr() 
		&& testSprintF())

		return 1;
}


int testStringStrCpy () {
	char s[] = "hello the world" , sCopy[100];
	char *ps;
	ps = s;
	strcpy (sCopy, s);
	assert (strcmp (sCopy, s) == 0);
	// Even if this assertion is correct *ps is not a copy
	// just a pointer to s !!
	assert (strcmp (ps, sCopy) == 0);
	strcpy(s, "bonjour le monde");
	// The altering of the value in s is reflected to ps as well.
	assert (strcmp (ps, "bonjour le monde") == 0);
	assert (strcmp (ps, sCopy) != 0);

	return 1;
}

int testStringCat () {
	char s[] = "hello ", ss[] = "the world ";
	char *ps = "of C";
	char sFinal [100];

	strcat(sFinal, s);
	assert(strcmp(sFinal, "hello ") == 0);
	strcat(sFinal, ss);
	assert(strcmp(sFinal, "hello the world ") == 0);
	strcat(sFinal, ps);
	assert(strcmp(sFinal, "hello the world of C") == 0);
	strcpy(s, sFinal);
	assert(strcmp(s, "hello the world of C") ==0);

	return 1;
}

int testStringStrChr () {
	char s[] = "hello", *ps = NULL;
	ps = strchr(s, 'A');
	assert (ps == NULL);
	ps = strchr(s, 'e');
	assert (ps != NULL);
	assert (strcmp(ps, "ello") == 0);
	ps = strchr(s, 'o');
	assert (strcmp(ps, "o") == 0);

	return 1;
}

int testStringPBrk () {

	char s[] = "hello", *ps = NULL;
	ps = strpbrk (s, "A");
	assert (ps == NULL);
	ps = strpbrk (s, "AE");
	assert (ps == NULL);
	ps = strpbrk (s, "Ae");
	assert (ps != NULL);
	assert (strcmp(ps, "ello") == 0);

	return 1;
}

int testStringStr () {

	char s[] = "abracadabra", *ps = NULL;
	ps = strstr(s, "magic");
	assert (ps == NULL);
	ps = strstr(s, "a");
	assert (strcmp(ps, s) == 0);
	ps = strstr(s, "ra");
	assert (strcmp(ps, "racadabra") == 0);

	return 1;
}

int testSprintF () {
	char s[200] , ss[] = "hello";
	int x = 1; 
	// Not very usefull as a test...
	// But aim to prove that one can mix "type" with the sprintf function.
	sprintf(s, "%s the world. (%d)", ss, x);
	assert (strcmp(s, "hello the world. (1)") == 0);

	return 1;
}


