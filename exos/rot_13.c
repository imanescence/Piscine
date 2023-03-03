#include <unistd.h>
int main(int argc, char **argv)
{
	char c;
	int j = 0;
	int i  = 0;
	if (argc == 2)
		while (argv[1][i] != '\0')
		{
			while ((argv[1][i] >= 'a' && argv[1][i] <= 'z') 
					|| (argv[1][i] >= 'A' && argv[1][i]<= 'Z'))
			{
				if ((argv[1][i] >= 'a' && argv[1][i]<= 'm') 
					|| (argv[1][i] >= 'A' && argv[1][i]<= 'M'))
					argv[1][i] += 13;
				else
					argv[1][i] -= 13;
				c = argv[1][i];
				write(1, &c, 1);
				i++;
			}
			j++;
		}
}

