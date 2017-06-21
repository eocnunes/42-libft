/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunes <eocnunes@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 20:21:57 by enunes            #+#    #+#             */
/*   Updated: 2017/06/18 23:53:12 by enunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static size_t	int_len(int n)
{
	size_t		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = int_len(n) + 1;
	str = (char*)malloc(sizeof(*str) * i);
	if (!str)
		return (0);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n--;
	}
	str[--i] = '\0';
	while (n)
	{
		i--;
		str[i - 1] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
