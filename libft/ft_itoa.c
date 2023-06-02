#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_numlen(int num)
{
	int	i;

	i = 0;	
	if (num < 0)
		num = -num;
	return (num);
	if (num <= 0)
		i++;
	while (num)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	len;
	int	result;
	int	d;

	len = ft_numlen(n);
	result = 0;
	str = (char *)malloc((len + 1) * sizeof(char));
	if(!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
		n = -n;
		result = 1;
	while (len > result)
	{
		len--;
		d = n / 10;
		str[len] = 48 + n % 10;
		n = d;
	}
	return (str);
}

int	main(void)
{
	int	num = -12345;
	char *str = ft_itoa(num);
	printf("Original: %s\n", str);
	return (0);
}
