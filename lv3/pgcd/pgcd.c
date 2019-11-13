/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurgali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 20:00:38 by anurgali          #+#    #+#             */
/*   Updated: 2019/11/12 20:09:29 by anurgali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int pgcd(char *par1, char *par2)
{
	int p1;
	int p2;

	p1 = atoi(par1);
	p2 = atoi(par2);
	if (p1 > 0 && p2 > 0)
	{
		while (p1 != p2)
		{
			if (p1 > p2)
				p1 -= p2;
			else 
				p2 -= p1;
		}
	}
	return (p1);
}


int main (int ac, char **av)
{
	int result;

	if (ac == 3)
	{
		result = pgcd(av[1], av[2]);
		printf("%d", result);
	}
	printf("\n");
	return (0);
}
