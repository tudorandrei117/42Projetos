
char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			return ((char *)(str + i));
		}
		else
		{
			i--;
		}
	}
	return (0);
}

/* #include <stdio.h>
int main (void)
{
	const char str[] = "o y aparece agora mas apenas o segundo y sera destacadi";
	const char ch = 'y';
	char *ret;
	ret = ft_strrchr(str, ch);
	printf("a ultima string depois do %c comeca apartir de %s", ch, ret);
} */