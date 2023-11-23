/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouhssei <iouhssei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 23:40:59 by iouhssei          #+#    #+#             */
/*   Updated: 2023/11/17 20:50:08 by iouhssei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
/*
int main()
{
    int data1 = 13;
    int data2 = 14;
    int data3 = 19;

    t_list *node1 = isnew(&data1);
    t_list *node2 = isnew(&data2); 
    t_list *node3 = isnew(&data3);
    node3->next = NULL;
    node2->next = node3;
    node1->next = node2;


    t_list *dataout = ft_lstlast(node1);
    printf("%p\n", dataout->content);
    printf("%p\n", &data3);
    free(node1);
    free(node2);
    free(node3);
    return 0;
}
*/
