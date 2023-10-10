#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "../libft/libft.h"

int	ft_strlen(const char *c);

char char_gen(const char *char_set, int length_set) 
{
    int randomIndex = rand() % length_set;
    return char_set[randomIndex];
}

char *string_gen(int size)
{
    const char *char_set = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int length_set = strlen(char_set);
    char *random_string = (char *)malloc(size + 1);

    for (int i = 0; i < size; i++)
    {
        random_string[i] = char_gen(char_set, length_set);
    }
    random_string[size] = '\0';
    return (random_string);
}

// int main() {
//     //const char *char_set = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
//     //int length_set = strlen(char_set);
//     //int size = rand() % 40;
//     //char *random_string = string_gen(char_set, length_set, size);
//     //printf("size: %d\n", size);
//     printf("Random string: %s\n", string_gen(rand() % 40));
//     printf("Random string: %s\n", string_gen(rand() % 40));
//     printf("Random string: %s\n", string_gen(rand() % 40));
//     //free(random_string);

//     return (0);
// }