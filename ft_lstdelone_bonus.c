/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macudesarasqueta <macudesarasqueta@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:30:33 by mde-sara          #+#    #+#             */
/*   Updated: 2024/04/15 14:48:41 by macudesaras      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (lst)
    {
        (*del)(lst->content);
        free(lst);
    }
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
    // Creamos un nodo para la lista enlazada
    t_list *node = malloc(sizeof(t_list));
    if (!node)
    {
        perror("Error: malloc failed");
        return 1;
    }

    // Asignamos un valor al contenido del nodo
    node->content = strdup("Contenido extra a elimiar");

    // Llamamos a ft_lstdelone para eliminar el nodo y su contenido
    ft_lstdelone(node, &delete_content);

    return (0);
}*/