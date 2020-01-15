/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurgali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:10:36 by anurgali          #+#    #+#             */
/*   Updated: 2020/01/15 15:53:21 by anurgali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return 0;
	unsigned int d;
	if (a > b)
		d = a;
	else
		d = b;
	while (1)
	{
		if (d % a == 0 && d % b == 0)
			return d;
			++d;
	}
}
