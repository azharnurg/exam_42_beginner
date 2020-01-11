/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurgali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 20:19:35 by anurgali          #+#    #+#             */
/*   Updated: 2020/01/10 20:33:02 by anurgali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
	int len;
	char *s;

	len = 0;
	while (src[len] != '\0')
	len++;

	if (!(s = (char *)malloc(sizeof(*s) + (len + 1))))
	   return (0);
	s[len] = '\0';	
	while (len >= 0)
	{
		s[len] = src[len];
		len--;
	}
	return (s);
}

