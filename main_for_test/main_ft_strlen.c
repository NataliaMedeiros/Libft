#include <string.h>
#include "../libft/libft.h"

void assert (int condition);

int main (void)
{
    const char *c;

    //test 01 = should return 7
    c = "avocado";
    assert((unsigned int)ft_strlen(c) == strlen(c));
    printf("Success The length of the string '%s' is = %d\n", c, ft_strlen(c));
    
    c = "I love coffee!!!";
    assert((unsigned int)ft_strlen(c) == strlen(c));
    printf("Success The length of the string '%s' is = %d\n", c, ft_strlen(c));
      
    c = "My name is Natalia";
    assert((unsigned int)ft_strlen(c) == strlen(c));
    printf("Success The length of the string '%s' is = %d\n", c, ft_strlen(c));
    return (0);
}