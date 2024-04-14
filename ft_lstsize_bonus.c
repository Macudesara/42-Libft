#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int len;

    len = 0;
    while (lst)
    {
        len++;
        lst = lst->next;
    }
    return (len);
}

/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

	int *data1 = malloc(sizeof(int));
    *data1 = 10;
    node1->content = data1;

    int *data2 = malloc(sizeof(int));
    *data2 = 20;
    node2->content = data2;

    int *data3 = malloc(sizeof(int));
    *data3 = 30;
    node3->content = data3;
    // Asignar valores a los nodos

    // Enlazar los nodos
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

	node1->next = node2;
	node2->next = node3;
	int size = ft_lstsize(node1);
	printf("Size = %d\n", size);
	return 0;
}*/