/*
    Prototype:
        char **ft_split(char const *s, char c);
    Parameters:
        s: The string to be split.
        c: The delimiter character.
    Return value:
        The array of new strings resulting from the split.
        NULL if the allocation fails.
    External functs:
        malloc, free
    Description:
        Allocates (with malloc(3)) and returns an array
        of strings obtained by splitting ’s’ using the
        character ’c’ as a delimiter. The array must end
        with a NULL pointer.
*/
#include <stdlib.h> //library allowed because of malloc
#include "libft.h"
#include <stdio.h>

int	count_words(char const *s, char c)
{
	int		i;
	int		i_word;

	i = 0;
	i_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			i_word++;
		}
		i++;
	}
	return (i_word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		i_word;
	int		start_word;
	// int		str_length;

	result = NULL;
	i_word = count_words(s, c);
	i = 0;
	printf("%d\n", i_word);
	result = (char **)malloc((i_word + 2) * sizeof(char *));
	if (result == NULL)
	{
		return (NULL);
	}
	result[i_word + 1] = NULL;
	i_word = 0;
	i = 0;
	start_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			printf("IF\n");
			result[i_word] = (char *)malloc(i - start_word + 1);
			if(result[i_word] == NULL)
			{
				return (NULL);
			}
			i_word++;
			start_word = i + 1;
		}
		i++;
	}
	i_word = 0;
	i = 0;
	start_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i] != '\0')
		{
			printf("IF2\n");
			i_word++;
			start_word = i + 1;
		}
		result[i_word][i] = s[i];
		printf("%c\n", result[i_word][i]);
		i++;
	}
	return (result);
}


/*
char	**ft_split(char const *s, char c)
{
	char	*str1;
	char	*str2;
	char	*temp;
	char	**result;
	int		i;

	i = 0;
	result = NULL;
	while (s[i] != c)
	{
		i++;
	}
	str1 = (char *)malloc(i);
	if (str1 == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(str1, s, i);
	str1[i] = '\0';
	temp = ft_strchr(s, c);
	str2 = malloc(ft_strlen(temp));
	if (str2 == NULL)
	{
		free(str1);
		return (NULL);
	}
	ft_strlcpy(str2, temp, ft_strlen(temp));
	result = malloc(3);
	result[0] = str1;
	result[1] = str2;
	result[2] = NULL;
	free(str1);
	free(str2);
	// str1 = NULL;
	// str2 = NULL;
	printf("First word: %s\n", result[0]);
	printf("Second word: %s\n", result[1]);	
	return (result);
}*/