#include <unistd.h>
int main(int argc, char **argv)
{
	int i;
	//int tmp;
	char c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != ' ')
		{
			c = argv[1][i];
			i++;
			write(1, &c, 1);
		}
		/*while (i < tmp)
		{
			c = argv[1][i];
			write(1, &c, 1);
			i++;
		}*/
	}
}
