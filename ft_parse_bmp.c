/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_bmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlernoul <tlernoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 17:47:02 by tlernoul          #+#    #+#             */
/*   Updated: 2020/06/17 14:12:12 by tlernoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

unsigned char	*read_pixel(int size, int fd)
{
	int				i;
	t_image			img;
	unsigned char	*ret;

	i = -1;
	ret = ft_memalloc(sizeof(unsigned char) * (size * 4) + 1);
	while (++i < size)
	{
		read(fd, &img, sizeof(t_image));
		ret[i * 4 + 0] = img.r;
		ret[i * 4 + 1] = img.g;
		ret[i * 4 + 2] = img.b;
		ret[i * 4 + 3] = img.a;
	}
	return (ret);
}

void			ft_free_bmp(t_bmp *file)
{
	free(file->img);
	ft_memdel((void*)&file);
}

t_bmp			*ft_parse_bmp(char *pth)
{
	t_fileheader	header;
	t_bmp			*ret;
	int				fd;

	ret = ft_memalloc(sizeof(t_bmp));
	if ((!(fd = open(pth, O_RDONLY))) > 0)
		return (NULL);
	read(fd, &header, sizeof(t_fileheader));
	if (header.type != 19778 || header.width <= 0 || header.height <= 0)
		return (NULL);
	ret->fheader = header;
	ret->img = read_pixel(header.height * header.width, fd);
	return (ret);
}
