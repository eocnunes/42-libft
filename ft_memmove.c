/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunes <eocnunes@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 13:37:32 by enunes            #+#    #+#             */
/*   Updated: 2017/06/13 17:24:56 by enunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dst_str;
	char	*src_str;
	char	*temp;

	i = 0;
	dst_str = (char *)dst;
	src_str = (char *)src; 
	temp = (char *)malloc(sizeof(*temp) * n);
	while (i < n)
	{
		temp[i] = src_str[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dst_str[i] = temp[i];
		i++;
	}
	return (dst);
}
