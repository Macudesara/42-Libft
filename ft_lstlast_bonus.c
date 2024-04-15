/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macudesarasqueta <macudesarasqueta@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:30:33 by mde-sara          #+#    #+#             */
/*   Updated: 2024/04/15 15:00:48 by macudesaras      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Creamos algunos nodos para una lista enlazada
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    if (!node1 || !node2 || !node3)
    {
        perror("Error: malloc failed");
        return 1;
    }

    // Asignamos algunos valores a los nodos
    node1->content = "First";
    node1->next = node2;
    node2->content = "Second";
    node2->next = node3;
    node3->content = "Third";
    node3->next = NULL;

    t_list *last_node = ft_lstlast(node1);
    printf("Contenido del último nodo: %s\n", (char *)last_node->content);

    free(node1);
    free(node2);
    free(node3);

    return (0);
}*/