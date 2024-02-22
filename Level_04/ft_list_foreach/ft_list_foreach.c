#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}

void multiply_by_2(void *num)
{
	*(int *)num *= 2;
	return ;
}

#include <stdlib.h>

int main()
{
	t_list *list;
	t_list *head;
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	i;


	list = malloc(sizeof(t_list));
	head = list;
	i = 0;
	while (i < sizeof(arr) / sizeof(arr[0]))
	{
		list->data = &arr[i];
		if (i < sizeof(arr) / sizeof(arr[0]) - 1)
		{
			list->next = malloc(sizeof(t_list));
			list = list->next;
		}
		else
			list->next = NULL;
		i++;
	}


}
