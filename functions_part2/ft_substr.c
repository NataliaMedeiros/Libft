/*
    Prototype
        char *ft_substr(char const *s, unsigned int start,
size_t len);
    Parameters 
        s: The string from which to create the substring.
        start: The start index of the substring in the string ’s’.
        len: The maximum length of the substring.
    Return value
        The substring.
        NULL if the allocation fails.
    External functs.
        malloc
    Description
        Allocates (with malloc(3)) and returns a substring
        from the string ’s’.
        The substring begins at index ’start’ and is of
        maximum size ’len’.
*/

 #include <stdlib.h> //library allowed because of malloc
 #include <stdio.h>
 #include <bsd/string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    //s: The string from which to create the substring.
    //start: The start index of the substring in the string ’s’.
    //len: The maximum length of the substring.

    char *substring;
    int i;

    substring = malloc(len);
    i = 0;
    if (substring == NULL)
	{
		return (NULL);
	}
    while (i < len)
    {
        substring[i] = s[start];
        start++;
        i++;
    }

    return (substring);
}

int main(void)
{
    char *s = "avocado";
    int start = 2;
    size_t len = 5;

    
    printf("%s", ft_substr(s, start, len));
}