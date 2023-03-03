#include <unistd.h>
int main(int argc, char **argv)
{
	int i;
	int j;
	char c;

	i = 0;
	j = 0;
	if (argc == 3)
		while (agrv[2][i] != '\0')
		{
			while (argv[2][i] == argv[1][j])
			{
				if (argv[1][j] == '\0')
				{
					j = 0;
					while (argv[1][j] != '\0')
					{
						c = argv[1][j];
						write(1, &c, 1);
						j++;
					}
				}
				j++;
				i = 0;
			}
		i++;
		}	
