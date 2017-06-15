/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunes <eocnunes@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 18:07:54 by enunes            #+#    #+#             */
/*   Updated: 2017/06/11 15:36:30 by enunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*dststr;
	char	*srcstr;

	i = 0;
	dststr = (char *)dst;
	srcstr = (char *)src;
	while (i < n)
	{
		dststr[i] = srcstr[i];
		i++;
	}
	return (dst);
}
