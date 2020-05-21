/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agloin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 10:04:58 by agloin            #+#    #+#             */
/*   Updated: 2019/10/02 13:12:14 by agloin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*nextlist;

	if (!alst && !del)
		return ;
	else
		while (*alst)
		{
			nextlist = (*alst)->next;
			ft_lstdelone(alst, del);
			*alst = nextlist;
		}
}
