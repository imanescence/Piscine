#include <unistd.h>
int main(int argc, char **argv)
{
	int i;
	int j;
	char c;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[2][i] != '\0')
		{
			while (argv[1][j] == argv[2][i])
			{
				c = argv[1][j];
				write(1, &c, 1);
				j++;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
