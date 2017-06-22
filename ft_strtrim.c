/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunes <eocnunes@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 14:00:52 by enunes            #+#    #+#             */
/*   Updated: 2017/06/21 15:27:59 by enunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static	int		nowp_len(char const *str)
{
	int	i;

	i = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t')
		str++;
	while (*str)
	{
		i++;
		str++;
	}
	str--;
	while (*str == ' ' || *str == '\n' || *str == '\t')
	{
		i--;
		str--;
	}
	return (i);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = nowp_len(s);
	str = (char *)malloc(sizeof(*str) * len + 1);
	if (!s || !str)
		return (0);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		s++;
	while (i < len)
	{
		str[i] = *s;
		i++;
		s++;
	}
	str[i] = '\0';
	return (str);
}
