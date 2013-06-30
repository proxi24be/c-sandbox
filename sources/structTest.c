# include <stdio.h>
# include <assert.h>
# include <string.h>
# include "structTest.h"

int runStructTest () {
	if (testCreateUser() 
		&& testInitUserParams() 
		&& testConstructUser()
		&& testSetUser())
		return 1;
}

int testCreateUser () {

	User user ;
	assert (&user != NULL);

	return 1;

}

int testInitUserParams () {
	User user = {"John", "Doe"};
	user.email = "john.doe@test.be";
	char fullName [MAX_SIZE];

	// Test the initial init.
	assert (strcmp(user.firstName, "John") == 0);
	assert (strcmp(user.lastName, "Doe") == 0);
	assert (strcmp(user.email, "john.doe@test.be") == 0);

	// Now I assign new value to firstName and lastName.
	strcpy(user.firstName, "Stefan");
	strcpy(user.lastName, "King");

	assert (strcmp(user.firstName, "Stefan") == 0);
	assert (strcmp(user.lastName, "King") == 0);

	return 1;
}

int testConstructUser () {
	User user;
	constructUser(&user);
	assert (strcmp(user.firstName, "John") == 0);
	assert (strcmp(user.lastName, "Doe") == 0);

	return 1;
}

int testSetUser () {
	User realUser ;
	User *user = &realUser;
	setUser(user);
	assert(strcmp(realUser.firstName, "test") == 0);
	assert(strcmp(user->firstName, "test") == 0);
	assert(strcmp((*user).firstName, "test") == 0);
}



static constructUser (User *user) {
	strcpy((*user).firstName, "John");
	strcpy(user->lastName, "Doe");
}

static setUser (User *user) {
	if (user != NULL)
		strcpy(user->firstName, "test");
}
