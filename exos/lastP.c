#include <unistd.h>
int main(int argc, char **argv)
{
	int i;
	char c;

	i = 0;
	while (argv[argc -1][i] != '\0')
	{
		c = argv[argc -1][i];
		write(1, &c, 1);
		i++;
	}
}
