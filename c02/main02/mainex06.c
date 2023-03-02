int	ft_str_is_printable(char *str)
{
	if (str >= 33 && str <= 126)
		return (1);
	if else (str == 0 && str <= 32 || str == 127)
		return (0);
	else
		return (1);
}
