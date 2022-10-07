#include <stdio.h>

int main(void)
{
	char f, s, m, l;
	int age;

	printf("Enter your inicials followed by your age: ");	
	scanf("%c %c %c %c %d", &f, &s, &m, &l, &age);
	printf("My initials are: %c%c%c%c and my age is %d.\n",f,s,m,l,age);
	return(0);
}	
