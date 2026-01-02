 #include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
typedef struct s_list
{
    int                content;
    struct s_list    *next;
}                    t_list;

t_list    *ft_new_node(int content)
{
    t_list    *node;

    node = malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return (node);
}

void    ft_add_back(t_list **head, t_list *new)
{
    t_list    *tmp;

    if (!*head)
    {
        *head = new;
        return ;
    }
    tmp = *head;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new;
}

int main()
{
    t_list *stack_a;
    t_list *i;
    t_list *j;
    stack_a = ft_new_node(1);
    ft_add_back(&stack_a, ft_new_node(1));
    ft_add_back(&stack_a, ft_new_node(-1));
    ft_add_back(&stack_a, ft_new_node(4));
    ft_add_back(&stack_a, ft_new_node(5));
    ft_add_back(&stack_a, ft_new_node(6));

    i = stack_a;
    j = stack_a->next;

    while(j)
    {
        if (j->content < i->content)
            exit(1);
        else
            printf("%d", i->content);
        if (!j->next)
            printf("%d", j->content);
        
        i = i->next;
        j = j->next;
    }
    return 0;
}