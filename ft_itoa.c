/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunes <eocnunes@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 20:21:57 by enunes            #+#    #+#             */
/*   Updated: 2017/06/21 21:18:19 by enunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char			*ft_itoa(int n)
{
	int		len;
	int		neg;
	char	*str;

	neg = 0;
	len = ft_intlen(n);
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		neg = 1;
		len++;
	}
	if ((str = (char*)malloc(sizeof(char) * len)) == 0)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
