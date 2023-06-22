/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 09:18:09 by mde-sara          #+#    #+#             */
/*   Updated: 2023/06/22 14:54:13 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h>
#include <stdio.h>*/

int	ft_countwords(char *str, char sep)
{
	int	numword;
	int	i;

	i = 1;
	numword = 0;
	if (str[0] != sep && str[0] != '\0')
			numword++;
	while (str[i])
	{
		if (str[i] != sep && str[i - 1] == sep)
			numword++;
	i++;
	}
	return (numword);
}

int	ft_countletters(char *str, char c, int i)
{
	int	j;

	j = 0;
	while (str[i] != c && str[i])
	{
		i++;
		j++;
	}
	return (j);
}

char	*ft_malloc_free(char **memtot, int word_index, int num)
{
	memtot[word_index] = (char *)malloc((num + 1) * sizeof(char));
	if (!memtot[word_index])
	{
		while (--word_index >= 0)
			free(memtot[word_index]);
		free(memtot);
		return (NULL);
	}
	return (memtot[word_index]);
}

char	**ft_memword(char **memtot, char *str, char c, int num)
{
	int	i_inde_len[3];

	i_inde_len[0] = 0;
	i_inde_len[1] = 0;
	while (str[i_inde_len[0]])
	{
		num = ft_countletters(str, c, i_inde_len[0]);
		if (num > 0)
		{
			memtot[i_inde_len[1]] = ft_malloc_free(memtot, i_inde_len[1], num);
			i_inde_len[2] = 0;
			while (i_inde_len[2] < num)
			{
				if (str[i_inde_len[0]] != c)
					memtot[i_inde_len[1]][i_inde_len[2]] = str[i_inde_len[0]];
				i_inde_len[0]++;
				i_inde_len[2]++;
			}
			memtot[i_inde_len[1]][i_inde_len[2]] = '\0';
			i_inde_len[1]++;
		}
		else
			i_inde_len[0]++;
	}
	return (memtot);
}

char	**ft_split(char const *s, char c)
{
	int		lentot;
	char	**memtot;
	char	*str;

	str = (char *)s;
	lentot = ft_countwords(str, c);
	memtot = (char **)malloc((lentot + 1) * sizeof(char *));
	if (!memtot)
		return (NULL);
	memtot[lentot] = NULL;
	ft_memword(memtot, str, c, 0);
	return (memtot);
}

/*int	main(void)
{
	char const	str[] = "   hello my beauty ";
	char	sep = ' ';

	char **split = ft_split(str, sep);
	if (split)
	{
		int	i = 0;
		while (split[i])
		{
			printf("%s\n", split[i]);
			free(split[i]);
			i++;
		}
		free (split);
	}
	return (0);
}*/
