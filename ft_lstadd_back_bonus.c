/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouhssei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 23:35:23 by iouhssei          #+#    #+#             */
/*   Updated: 2023/11/16 23:40:16 by iouhssei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
}
/*
int main()
{
    int data1;
    int data2;
    int data3;
    t_list  *head = NULL;
    
    data1 = 10;
    data2 = 11;
    data3 = 12;

    t_list  *node1 = is_new(&data1);
    t_list  *node2 = is_new(&data2);
    t_list  *node3 = is_new(&data3);
    
    ft_lstadd_back(&head, node1);
    ft_lstadd_back(&head, node2);
    ft_lstadd_back(&head, node3);

    t_list *current = head;
    while (current != NULL)
    {
        printf("%d\n", *(int *)(current->content));
        current = current->next;
    }

    current = head;
    while (current != NULL)
    {
        t_list *next = current->next;
        free(current);
        current = next;
    }
    return 0;
}
*/
