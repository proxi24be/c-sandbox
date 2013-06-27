/**
 * 	Test package on the library string.
 */

# ifndef STRING_TEST

# define STRING_TEST


/**
 * Run all the tests included in the package stringTest.c
 * @return [description]
 */
int runStringTest ();

/**
 * Test the strcpy function from string.h
 * @return true if the test completed successfully 
 * otherwise an error is raised up.
 */
int testStringStrCpy ();

/**
 * Test the strchr function from string.h
 * @return true if the test completed successfully 
 * otherwise an error is raised up.
 */
int testStringStrChr ();

/**
 * Test the strcat function from string.h
 * @return true if the test completed successfully 
 * otherwise an error is raised up.
 */
int testStringCat ();

/**
 * Test the strpbrk function from string.h
 * @return true if the test completed successfully 
 * otherwise an error is raised up.
 */
int testStringPBrk ();

/**
 * Test the strstr function from string.h
 * @return true if the test completed successfully 
 * otherwise an error is raised up.
 */
int testStringStr ();

/**
 * Test the sprintf function from stdio.h
 * @return true if the test completed successfully 
 * otherwise an error is raised up.
 */
int testSprintF ();

# endif 