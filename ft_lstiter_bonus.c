/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouhssei <iouhssei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:04:20 by iouhssei          #+#    #+#             */
/*   Updated: 2023/11/17 20:53:07 by iouhssei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*next;
	t_list	*tmp;

	if (lst == NULL || f == NULL)
		return ;
	tmp = lst;
	while (tmp)
	{
		next = tmp->next;
		f(tmp->content);
		tmp = next;
	}
}

// void f(void *content)
// {
//     int *data = (int *)content;
//     printf("%d ", *data);
// }

// int main()
// {
//     int data1 = 13;
//     int data2 = 14;
//     int data3 = 19;

//     t_list *node1 = ft_lstnew(&data1);
//     t_list *node2 = ft_lstnew(&data2); 
//     t_list *node3 = ft_lstnew(&data3);
//     node3->next = NULL;
//     node2->next = node3;
//     node1->next = node2;
//     ft_lstiter(node1, f);

//     free(node1);
//     free(node2);
//     free(node3);
//     return 0;
// }
