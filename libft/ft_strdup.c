

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*str2;

	if (!(str2 = (char *)malloc(ft_strlen(str1) + 1)))
		return (0);
	ft_memcpy(str2, str1, ft_strlen(str1) + 1);
	return (str2);
}