#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int , int))
{
	int	tmpdata;
	t_list	*tmp;

	tmp = lst;
	while (lst->next != NULL)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			tmpdata = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmpdata;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	return (lst);
}
