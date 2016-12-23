/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlernoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 16:24:56 by tlernoul          #+#    #+#             */
/*   Updated: 2016/11/29 17:53:56 by tlernoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*g;
	size_t			i;

	i = 0;
	g = (unsigned char*)s;
	while (i < n)
	{
		g[i] = '\0';
		i++;
	}
}
