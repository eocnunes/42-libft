/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunes <eocnunes@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 18:39:03 by enunes            #+#    #+#             */
/*   Updated: 2017/06/20 19:01:45 by enunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *tmp;
	t_list *lst;

	lst = *alst;
	while (lst != 0)
	{
		tmp = lst->next;
		del(lst, lst->content_size);
		lst = tmp;
	}
	free(tmp);
	*alst = 0;
}
