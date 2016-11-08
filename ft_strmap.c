char	*ft_strmap(char const *s, char (*f)(char))
{
	while (*s)
		f(*s++);
}
