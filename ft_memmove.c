/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlernoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 17:45:30 by tlernoul          #+#    #+#             */
/*   Updated: 2016/12/07 13:01:58 by tlernoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (n == 0)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (n-- != 0)
		((unsigned char*)dest)[n] = ((unsigned char*)src)[n];
	return (dest);
}
