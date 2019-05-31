#ifndef LIBFT_H
#define LIBFT_H
#include <strings.h>
#include <unistd.h>
#include <stdlib.h>

int			ft_strcmp(char const *s1,char const *s2);
size_t		ft_strlen(const char *str);
char		*ft_strchr(const char *s, int c);
char		*ft_strcpy(char *dest, char *src);
int			ft_strequ(char const* s1, char const *s2);

#endif
