#include "../includes/push_swap.h"

int ft_list_size(t_list *list)
{
    int size;
    size = 0;
    while(list)
    {
        list = list->next;
        size++;
    }
    return size;
}