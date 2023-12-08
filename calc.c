#include <stdio.h>
#include <ctype.h>

struct addr 
{
	char name[30];
	char street[40];
	char city[20];
	char state[3];
	unsigned long int zip;
};

	struct addr addr_info;

int main(void)
{

		scanf("%s'n",addr_info.name);

	printf("NAME == %s\n",addr_info.name);
}
