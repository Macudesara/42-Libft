/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 09:18:09 by mde-sara          #+#    #+#             */
/*   Updated: 2023/06/09 13:14:40 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;
	char	*ptrsrc;
	char	*ptrdest;

	ptrsrc = (char *)src;
	ptrdest = (char *)dest;
	len = ft_strlen(ptrsrc);
	if (dstsize < 1)
		return (len);
	i = 0;
	while (ptrsrc[i] && i < dstsize -1)
	{
			ptrdest[i] = ptrsrc[i];
			i++;
	}
	ptrdest[i] = '\0';
	return (len);
}

int	ft_countwords(char *str, char sep)
{
	int	numword;
	int	i;

	i = 0;
	numword = -1;
	while (str[i])
	{
		if (str[i] == sep && str[i + 1] != sep)
			numword++;
	i++;
	}
	return (numword);
}

char	*ft_memword(char **memtot, char *str, int i, int word_length, int word_index)
{
	int	j;

	memtot[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
	if (!memtot[word_index])
	{
		j = 0;
		while (j < word_index)
		{
			free(memtot[j]);
			j++;
		}
		free(memtot);
		return NULL;
	}
	ft_strlcpy(memtot[word_index], &str[i - word_length + 1], word_length + 1);
	memtot[word_index][word_length] = '\0';
	word_index++;
	word_length = 0;
	return (memtot[word_index]);
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
//ARRAY CREADA CORRECTAMENTE
	int word_index;
	int word_length;
	int i;

	word_index = 0;
	word_length = 0;
	i = 0;
	while (str[i])
	{
		if(str[i] != c)
		{
			word_length++;
			if (str[i + 1] == c || str[i + 1] == '\0')
			{
				ft_memword(memtot, str, i, word_length, word_index);
				/*memtot[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
				if (!memtot[word_index])
				{
				//Free memory for already allocated words
					while (j < word_index)
					{
						free(memtot[j]);
						free(memtot);
						j++;
					}
					return NULL;
				}
				ft_strlcpy(memtot[word_index], &str[i - word_length + 1], word_length + 1);
				memtot[word_index][word_length] = '\0';
				word_index++;
				word_length = 0;*/
			}
		}
		i++;
	}
	memtot[word_index] = NULL;
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
