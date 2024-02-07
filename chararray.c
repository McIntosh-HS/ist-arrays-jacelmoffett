#include <stdio.h>

int main()
{
	char name[] = "Jace Moffett"; // edit this line
	char user[69];               // create this line and replace N with however many elements you think is necessary

	// Prompt the user for their name
	// Use scanf("%s", &user) to store the user's name
    printf("What is your name? ");
	scanf("%s", &user);

	nameprintf("Hello %s! Nice to meet you. MY name is %s\n",user ,name );

	return 0;
}
