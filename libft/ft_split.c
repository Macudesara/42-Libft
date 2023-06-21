/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 09:18:09 by mde-sara          #+#    #+#             */
/*   Updated: 2023/06/21 17:06:26 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

/*int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}*/

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
		if (str[i] != sep && str[i-1] == sep)
			numword++;
	i++;
	}
	return (numword);
}

int	ft_countletters (char *str, char c, int i)
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

void	*ft_free(char **memtot, int word_index)
{
	while (--word_index >= 0)
		free(memtot[word_index]);
	free(memtot);
	return (NULL);
}

char	**ft_memword(char **memtot, char *str, char c, int word_length, int word_index)
{
	int	i;
	int	num;

	i = 0;
	while (str[i])
    {
		num = ft_countletters(str, c, i);
        if (num > 0)
        {
            memtot[word_index] = (char *)malloc((num + 1) * sizeof(char));
			if (!memtot[word_index])
				return (ft_free(memtot, word_index));
			word_length = 0;
			while (word_length < num)
			{
				if (str[i] != c)
					memtot[word_index][word_length] = str[i];
				i++;
				word_length++;
			}
			memtot[word_index][word_length] = '\0';
			word_index++;
		}
		else
			i++;
	}
	return (memtot);
}

char	**ft_split(char const *s, char c)
{
	int		lentot;
	int		word_index;
	char	**memtot;
	char	*str;

	word_index = 0;
	str = (char *)s;
	lentot = ft_countwords(str, c);
	memtot = (char **)malloc((lentot + 1) * sizeof(char *));
	if (!memtot)
		return (NULL);
	memtot[lentot] = NULL;
	ft_memword(memtot, str, c, 0, 0);
	return (memtot);
}

int	main(void)
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
}
