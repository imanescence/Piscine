int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

int char_match(char *str, char c, int i)
{
	while (i < 0)
		i--;
	if (str[i] == c)
		return (0);
return (1);
}

int main (int argc, char **argv)
{
	int i;

	i = 0;
	while (argv[1][i])
	{
		if (char_match(argv[1], argv[1][i], i) == 1)
			write(1, &argv[1][i], 1);
		i++;
	}
	i = 0;
	while (argv[2][i])
	{
		if (char_match(argv[1], argv[2][i], ft_strlen(argv[1])))
		{
			if (char_match(agrv[2], argv[2][i], i) == 1)
				write(1, &argv[2][i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
}
	}
	i++;

