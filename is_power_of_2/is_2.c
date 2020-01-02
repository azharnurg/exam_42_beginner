#include <stdio.h>
int is_power_of_2(unsigned int n){
	
	int i;
	int d;
	int two_power;
	two_power = 2;
	d = n;
	i = 0;

	if (d % 2 == 0)
	{
		while (d >= 2)
		{
			d = d / 2;
			i++;
		}
		printf ("i = %d\n", i);

		while (i > 1)
		{
			two_power *= 2;
			i--;
		}
		printf("two_power = %d\n", two_power);
		printf ("n = %d\n", n);
		if (two_power == n)
			return 1;
	}
	return 0;
}

#include <stdlib.h>
int main (int ac, char **av)
{
	int new;

	if (ac == 2)
	{
		new = atoi (av[1]);
		printf ("is power of 2 = %d\n", is_power_of_2(new));
	}
	return 0;
}
