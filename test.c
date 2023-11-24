
#include <stdio.h>
#include "libft.h"

void fprinting(void *content)
{
	printf("%ls\n", (int *)content);
}

void *del(void *content)
{
	if (content)
		free(content);
	return (NULL);
}

int main()
{
	char  *data1 = "1";
	char  *data2 = "2";
	char  *data3 = "3";
	char  *data4 = "0";

	t_list *node1 = ft_lstnew(ft_strdup(data1));
	t_list *node2 = ft_lstnew(ft_strdup(data2));
	t_list *node3 = ft_lstnew(ft_strdup(data3));
	t_list *noda_lighnzid = ft_lstnew(ft_strdup(data4));

	node1->next = node2;
	node2->next = node3;

	ft_lstadd_back(&node1, noda_lighnzid);

	ft_lstiter(node1, fprinting);
}