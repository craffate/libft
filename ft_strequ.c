int		ft_strequ(char const *s1, char const *s2)
{
	if (*s1 && *s2)
	{
		ft_strequ(*s1++, *s2++);
		return (1);
	}
	return (0);
}
