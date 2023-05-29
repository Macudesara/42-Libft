/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:07:23 by mde-sara          #+#    #+#             */
/*   Updated: 2023/05/25 13:36:46 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

/*displays at which position the first desired character was found*/
/*and if it doesn't find it, it returns NULL*/

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (NULL);
}

/*int main(void)
{
    const char	*s = "Love Fridays";
    char	character;
	char	*resultado;

	character = 'v';
	resultado = strchr(s, character);
    printf("Original found letter: %s\n", strchr(s, character));
	printf("Created found letter: %s\n", ft_strchr(s, character));
	printf("In posicion: %ld", resultado - s + 1);
    return (0);
}*/
