/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurgali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 17:39:49 by anurgali          #+#    #+#             */
/*   Updated: 2019/11/12 17:44:48 by anurgali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ulstr(char *av)
{
	int i;

	i = 0;
	while (av[i] != '\0')
	{
		if (av[i] >= 'a' && av[i] <= 'z')
			av[i] = av[i] - 32;
		else if (av[i] >= 'A' && av[i] <= 'Z')
			av[i] = av[i] + 32;
		else
			av[i] = av[i];
		write (1, &av[i], 1);
		i++;
	}
}
int main (int ac, char **av)
{
	if (ac == 2)
	{
		ulstr(av[1]);
	}
	write (1, "\n", 1);
	return (0);
}
