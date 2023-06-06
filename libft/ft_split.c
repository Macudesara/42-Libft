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
	char str;
	
	str = (char *)s;
    lentot = ft_countwords(str, c));
    memtot = (char **)malloc(lentot + 1) * sizeof(char *);
}

int    main(void)
{
    char const    str[] = "   hello my beauty ";
    char    sep = ' ';

    ft_split(str, sep);
    return (0);
}
