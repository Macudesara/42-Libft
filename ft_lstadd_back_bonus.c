/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macudesarasqueta <macudesarasqueta@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:30:33 by mde-sara          #+#    #+#             */
/*   Updated: 2024/04/15 14:49:36 by macudesaras      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last;

    if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));
    t_list *new_node = malloc(sizeof(t_list));

    if (!node1 || !node2 || !node3 || !new_node)
    {
        perror("Error: malloc failed");
        return 1;
    }

    node1->content = "First";
    node1->next = node2;
    node2->content = "Second";
    node2->next = node3;
    node3->content = "Third";
    node3->next = NULL;
    new_node->content = "New Node";
    new_node->next = NULL;

    // Llamamos a ft_lstadd_back para agregar el nuevo nodo al final de la lista
    ft_lstadd_back(&node1, new_node);

    t_list *current_node = node1;
    while (current_node)
    {
        printf("%s -> ", (char *)current_node->content);
        current_node = current_node->next;
    }
    printf("NULL\n");

    free(node1);
    free(node2);
    free(node3);
    free(new_node);

    return (0);
}*/