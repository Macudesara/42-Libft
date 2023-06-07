1	#include <stdlib.h>
2	#include <stdio.h>
3	
4	size_t    ft_strlen(const char *s)
5	{
6	    size_t    i;
7	
8	    i = 0;
9	    while (s[i])
10	        ++i;
11	    return (i);
12	}
13	
14	int    ft_countwords(char *str, char sep)
15	{
16	    int    numword;
17	    int i;     
18	    
19	    i = 0;
20	    numword = -1;
21	    while (str[i])
22	    {
23	        if (str[i] == sep && str[i + 1] != sep)
24	           numword++;
25	    i++;
26	    }
27	    return (numword);
28	}
29	
30	/*int    ft_countletters(const char *word, int j)
31	{    
32	    int    numword;
33	    int    len;
34	    char *lenword;
35	
36	    j = 0;
37	    numword = 0;
38	    while (word[j])
39	    {
40	        if (word[j] == '\0')
41	            numword++;
42	    ft_strlen(word);
43	    len = ft_strlen(word);
44	    lenword = (char *)malloc(len + 1) * sizeof(char);
45	    if (!lenword)
46	        return (NULL);
47	    word[j] = '\0';
48	    return (lenword);
49	    j++;
50	    }
51	}*/
52	
53	char    **ft_split(char const *s, char c)
54	{
55	    int    lentot;
56	    char    **memtot;
57	    char    *str;
58	    
59	    str = (char *)s;
60	    lentot = ft_countwords(str, c);
61	    memtot = (char **)malloc((lentot + 1) * sizeof(char *));
62	    if (!memtot)
63	        return (NULL);
64	    //**memtot = NULL;
65	    return (memtot);

ARRAY CREADA CORRECTAMENTE
66	}
67	
68	int    main(void)
69	{
70	    char const    str[] = "   hello my beauty ";
71	    char    sep = ' ';
72	
73	    char **split = ft_split(str, sep);
74	    if (split == NULL)
75	    {
76	        printf("NULL\n");
77	        return (0);
78	    }
79	
80	    int i = 0;
81	    while (split[i] != NULL)
82	    {
83	        printf("%s\n", split[i]);
84	        i++;
85	    }
86	    if (split != NULL)
87	    {
88	        int i = 0;
89	        while (split[i] != NULL)
90	        {
91	            free(split[i]);
92	            i++;
93	        }
94	        free(split);
95	    }
96	    return (0);
97	}
