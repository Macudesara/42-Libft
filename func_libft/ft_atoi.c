#include <stdlib.h>
#include <stdio.h>

/*The function interprets the characters of the string until it finds a non-numeric character or the end of the string. Returns the integer value corresponding to the number represented by the string*/

int	atoi(const char *str)
{
	
}

int	main(void) 
{
    char str[] = "++hello4555";
    int num = atoi(str);
    printf("Original: El número convertido es: %d\n", num);
    return 0;
}
