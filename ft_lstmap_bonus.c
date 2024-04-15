/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macudesarasqueta <macudesarasqueta@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:30:33 by mde-sara          #+#    #+#             */
/*   Updated: 2024/04/15 15:14:09 by macudesaras      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_lst;
    t_list  *new_elem;

    new_lst = NULL;
    if (!lst)
		return (NULL);
  
	while (lst)
	{
		new_elem = ft_lstnew((*f)(lst->content));
		if (!new_elem)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

// Función de mapeo: duplica el contenido de un nodo
void *map_function(void *content)
{
    char *original = (char *)content;
    char *copy = strdup(original); // Duplicamos el contenido
    return (copy);
}

void delete_content(void *content)
{
    free(content); // Liberamos la memoria asignada para el contenido
}

int main()
{
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");

    // Enlazamos los nodos
    ft_lstadd_back(&node1, node2);
    ft_lstadd_back(&node1, node3);

    printf("Lista original:\n");
    print_list(node1);

    // Llamamos a ft_lstmap para aplicar la función de mapeo a la lista original
    t_list *mapped_list = ft_lstmap(node1, &map_function, &delete_content);

    printf("Lista mapeada:\n");
    print_list(mapped_list);

    // Limpiamos la lista mapeada
    ft_lstclear(&mapped_list, &delete_content);

    return (0);
}*/