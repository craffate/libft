char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s2;

	s2 = (char *)(malloc(sizeof(char) * len));
	if (!s2)
		return (NULL);
	while (len > 0)
	{
		*s2++ == s[start++];
		len--;
	}
	return (s2);
}
