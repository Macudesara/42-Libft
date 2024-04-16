/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:23:26 by mde-sara          #+#    #+#             */
/*   Updated: 2024/04/16 11:39:56 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/*void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list *node1 = malloc(sizeof(t_list));
    node1->content = "Hello";
    t_list *node2 = malloc(sizeof(t_list));
    node2->content = "world!";
    t_list *node3 = malloc(sizeof(t_list));
    node3->content = "Welcome";
    t_list *node4 = malloc(sizeof(t_list));
    node4->content = "to";
    t_list *node5 = malloc(sizeof(t_list));
    node5->content = "My Github";

    // Configuramos los punteros next para formar una lista
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    // Llamamos a ft_lstiter para imprimir el contenido de cada nodo
    ft_lstiter(node1, &print_content);

    // Liberamos la memoria asignada a los nodos
    free(node1);
    free(node2);
    free(node3);
    free(node4);
    free(node5);

    return (0);
}*/
