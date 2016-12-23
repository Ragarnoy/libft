/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlernoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 17:38:05 by tlernoul          #+#    #+#             */
/*   Updated: 2016/12/22 17:54:30 by tlernoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 1;
	if (n == 0)
		return (1);
	if (!(s1) || !(s2))
		return (0);
	while (*s1 == *s2 && i < n)
	{
		i++;
		s1++;
		s2++;
		if (i == n && *s1 == *s2)
			return (1);
		if (*s1 == '\0' && *s2 == '\0')
			return (1);
	}
	return (0);
}
