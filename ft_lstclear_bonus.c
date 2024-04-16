/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:22:15 by mde-sara          #+#    #+#             */
/*   Updated: 2024/04/16 11:40:48 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void delete_content(void *content)
{
    printf("Deleting content: %s\n", (char *)content);
    free(content); // Liberamos la memoria asignada para el contenido
}

int main()
{
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    node1->content = strdup("Node 1");
    node2->content = strdup("Node 2");
    node3->content = strdup("Node 3");

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Llamamos a ft_lstclear para limpiar la lista
    ft_lstclear(&node1, &delete_content);
    printf("Lista limpiada correctamente\n");
    return 0;
}*/
