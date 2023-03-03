#include <unistd.h>
int main(int argc, char **argv)
{
	int i;
	int j = 0;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			while (argv[1][j] != '\0')
				{
					if (argv[1][j] != argv[1][i])
					{
						write(1, &argv[1][i], 1);
					j++;
					}
					else
						j++;
				}
			i++;
		}
	}
}
