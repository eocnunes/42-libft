/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunes <eocnunes@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 21:48:50 by enunes            #+#    #+#             */
/*   Updated: 2017/06/18 18:28:30 by enunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*static int		dst_len(char const *s, char ch)
{
	int	i;

	i = 0;
	while(*s)
	{
		if (*s != ch)
			i++;
		s++;
	}
	return (i);
}
*/

char			**ft_strsplit(char const *s, char c)
{
	int i;
	int j;
	char **str_arr;

	i = 0;
	str_arr = (char **)malloc(sizeof(**str_arr) * 100 + 1);
	while(*s)
	{
		j = 0;
		while (*s != c)
		{
			str_arr[i][j] = *s;
			s++;
			j++;
			if (*s == c)
				i++;
		}
		while (*s == c)
			s++;
	}
	return (str_arr);
}
