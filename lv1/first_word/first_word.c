/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurgali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 16:11:50 by anurgali          #+#    #+#             */
/*   Updated: 2020/01/17 16:32:41 by anurgali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void first(char *str)
{
	int i;

	i = 0;
		while(str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' )
		{
			write (1, &str[i], 1);
			i++;
		}
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		first(av[1]);
	}
	write (1, "\n", 1);
   return (0);	
}
