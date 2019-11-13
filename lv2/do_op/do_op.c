/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurgali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 19:21:34 by anurgali          #+#    #+#             */
/*   Updated: 2019/11/12 19:36:27 by anurgali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int do_op(char *p1, char op, char *p2)
{
	int par1;
	int par2;
	int result;
	
	par1 = atoi((char*)p1);
	par2 = atoi((char*)p2);
	result = 0;
	if (op == '*')
		result = par1 * par2;
	else if (op == '/')
		result = par1 / par2;
	else if (op == '+')
		result = par1 + par2;
	else if (op == '-')
		result = par1 - par2;
	else if (op == '%')
		result = par1 % par2;
	return (result);
}

int main (int ac, char **av)
{
	int result;

	if (ac == 4)
	{
		result = do_op(av[1], av[2][0], av[3]);
		printf("%d\n", result);
	}
	else
	write (1, "\n", 1);
	return (0);
}
