/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:29:41 by mde-sara          #+#    #+#             */
/*   Updated: 2023/05/18 09:43:30 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*is used to put in zero a block of memory*/

/*#include <strings.h>
#include <stdio.h>*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
		str[i++] = 0;
}

/*int	main(void)
{
	char	str[] = "Everyone is different";
	char	orig[] = "Everyone is different";
	ft_bzero(str, sizeof(str));
	printf("Created: %s\n", str);
	bzero(orig, sizeof(orig));
	printf("Original: %s", orig);
	return (0);
}*/
