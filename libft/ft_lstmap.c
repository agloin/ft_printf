/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agloin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 16:50:28 by agloin            #+#    #+#             */
/*   Updated: 2019/10/02 17:20:57 by agloin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *))
{
	t_list	*newlist;
	
	if (!lst)
		return (NULL);
	else
		while (lst)
		{
			newlist = lst->next;
			ft_lstnew(lst->content, lst->content_size);
			lst = newlist->next;
		}
	return (newlist);
}
