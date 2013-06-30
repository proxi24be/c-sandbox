# ifndef STRUCT_TEST

# define STRUCT_TEST

# include "params.h"

typedef struct User User;

struct User
{
	char firstName[MAX_SIZE], lastName[MAX_SIZE] ;
	char *email;
};


int runStructTest ();

/**
 * Test the creation of a new User
 * @return true if the test completed successfully 
 * otherwise an error is raised up.
 */
int testCreateUser ();

/**
 * Test the initiation the parameters of a new User
 * @return true if the test completed successfully 
 * otherwise an error is raised up.
 */
int testInitUserParams ();

/**
 * Test the constructor.
 * @return true if the test completed successfully 
 * otherwise an error is raised up.
 */
int testConstructUser ();

static constructUser (User *user);

static setUser (User *user);


#endif