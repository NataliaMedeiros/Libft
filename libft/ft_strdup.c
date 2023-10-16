#include <stdlib.h>

/* #include <string.h>

       char *strdup(const char *s);

       char *strndup(const char *s, size_t n);
       char *strdupa(const char *s);
       char *strndupa(const char *s, size_t n);
       */
#include "libft.h"

       char *ft_strdup(const char *s)
       {
              char *new_s = malloc(ft_strlen(s));
              ft_strlcpy(new_s, s, ft_strlen(s));
              return (new_s);
       }