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
	int		i;//index counts the chars
	int		i_word; //this counts the words

	i = 0;
	i_word = 0;
	while (s[i] != '\0') //percorrer todas as letras
	{
		if (s[i] == c) //para encontrar onde fazer o split
		{
			i_word++;
		}
		i++;
	}
	return (i_word); //retorna quantas palavras novas teremos
}

char	**ft_split(char const *s, char c)
{
	char	**new_word; //matriz
	char	*start; //para encontrar o comeco de uma palavra nova
	int		i;

	new_word = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (new_word == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*s != '\0') //enquanto a palavra nao acabar
	{
		if (*s != c)//av - ocad - o is g - o - od!!
		{
			start = (char *)s;//a vai ser o comeco da nova palavra
			while (*s != c && *s != '\0')
			{
				s++;
			}
			new_word[i] = ft_substr(start, 0, s - start);
			printf("%s\n", new_word[i]);
			i++;
		}
		else
		{
			s++;
		}
		//i++;
	}
	new_word[i] = NULL;
	return (new_word);
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