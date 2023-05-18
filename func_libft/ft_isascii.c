/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:26:34 by mde-sara          #+#    #+#             */
/*   Updated: 2023/05/09 13:33:07 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h>*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 177)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("Orginal %i \n", isascii(' '));
	printf("Created %i", ft_isascii(' '));
	return (0);
}*/
