/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macudesarasqueta <macudesarasqueta@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:30:33 by mde-sara          #+#    #+#             */
/*   Updated: 2024/04/15 15:05:10 by macudesaras      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list  *new_node;

    new_node = malloc(sizeof (t_list));
    if (new_node)
    {
        new_node->content = content;
        new_node->next = NULL;
    }
    return (new_node);
}

/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char    str[] = "que tal?";
	char    *cont;
	t_list	*node;

	node = ft_lstnew(str);
	if (node != NULL)
	{
		cont = (char *)node->content;
		printf("Contingut de node->content: %s\n", cont);
	}
	free(node);
	return (0);
}*/