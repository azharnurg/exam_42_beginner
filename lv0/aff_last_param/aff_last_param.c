/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurgali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 16:41:20 by anurgali          #+#    #+#             */
/*   Updated: 2019/11/12 16:47:15 by anurgali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{
	int i;

	i = 0;
	if (ac >= 2) //check how many arguments we have in our command line
	{
		while (av[ac - 1][i] != '\0') // ac-1 - bringing the last argument and reding it
		{
			write(1, &av[ac-1][i], 1); // while reading a string printing
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
