/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:44:55 by mde-sara          #+#    #+#             */
/*   Updated: 2023/05/25 13:02:35 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdio.h>*/
//#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && (str1[i] || str2[i]) && --n)
			i++;
	return ((unsigned char) str1[i] - str2[i]);
}

/*int	main(void)
{
	char	str1[] = "I   dant to finish this";
	char	str2[] = "I u will";
	size_t	i;

	i = 6;
	printf("Original: %i\n", strncmp(str1, str2, i));
	printf("Created: %i\n", ft_strncmp(str1, str2, i));
	return (0);
}*/
