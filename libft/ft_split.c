#include <stdlib.h>
#include <stdio.h>

int    ft_countwords(char *words, char sep)
{
    char  word;
    int i; 
	
    i = 0;
    word = 0;
    while (words[i])
    {
        if (words[i] == sep && words[i + 1] != sep)
            word++;
    i++;
    }
    return (word);
}

char    **ft_split(char const *s, char c)
{
    int    lentot;
    char    **memtot;
	char	*str;
	
	str = (char *)s;
    lentot = ft_countwords(str, c);
    memtot = (char **)malloc((lentot + 1) * sizeof(char *));
	return (memtot);
}

int    main(void)
{
    char const    str[] = "   hello my beauty ";
    char    sep = ' ';

    char **split = ft_split(str, sep);
    if (split == NULL)
    {
        printf("NULL\n");
        return (0);
    }

    int i = 0;
    while (split[i] != NULL)
    {
        printf("%s\n", split[i]);
        i++;
    }
    if (split != NULL)
    {
        int i = 0;
        while (split[i] != NULL)
        {
            free(split[i]);
            i++;
        }
        free(split);
    }
    return (0);
}
