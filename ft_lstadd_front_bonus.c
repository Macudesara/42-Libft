/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:21:38 by mde-sara          #+#    #+#             */
/*   Updated: 2024/04/16 11:41:38 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	new->next = *lst;
	*lst = new;
}

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Crear un nuevo nodo y asignarle contenido
    int *data = malloc(sizeof(int));
    if (!data)
    {
        perror("Error: malloc failed");
        return 1;
    }
    *data = 42; // Asignamos el valor 42 al entero

    t_list *new_node = ft_lstnew(data);
    if (!new_node)
    {
        perror("Error: ft_lstnew failed");
        free(data);
        return 1;
    }

    // Lista existente (podría ser NULL si la lista está vacía)
    t_list *existing_list = NULL;

    // Agregar el nuevo nodo al frente de la lista
    ft_lstadd_front(&existing_list, new_node);

    printf("Contenido del primer nodo: %d\n", *(int *)(existing_list->content));

    free(data); // Liberamos la memoria del contenido del nodo
    free(new_node); // Liberamos la memoria del nodo

    return (0);
}*/
