/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurgali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 16:50:16 by anurgali          #+#    #+#             */
/*   Updated: 2019/11/12 17:02:23 by anurgali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rot_13(char *av)
{
	int i;

	i = 0;
	while (av[i] != '\0')
	{
		if ((av[i] >= 'a' && av[i] < 'n') || (av[i] >= 'A' && av[i] < 'N'))
			av[i] = av[i] + 13;
		else if ((av[i] >= 'n' && av[i] <= 'z') || (av[i] >= 'N' && av[i] <= 'Z'))
			av[i] = av[i] - 13;
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
		rot_13(av[1]);
	}
	write (1, "\n", 1);
	return (0);
}
