#include <unistd.h>
int main(int argc, char **argv)
{
	int i;
	int j;
	argc = 1;
	char c;

	i = 0;
	j = 0;
	while (argv[1][i] != '\0')
	{
		while (argv[1][i] == argv[2][j])
		{
			i++;
			j++;
			if (argv[2][j] == '\0')
				j = 0;
			}
		}
		j = 0;
		i++;
	}
}

