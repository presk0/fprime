#include <stdlib.h>
#include <stdio.h>

int	est_divible(int n, int div)
{
	if (n % div == 0)
		return 1;
	return 0;
}

void	fprime(unsigned int nb)
{
	unsigned int	div;
	unsigned int	first_print = 1 ;;

	if (nb == 1)
		printf("1");
	else
	{
		div = 2;
		while (nb > 1)
		{
			if (est_divible(nb , div))
			{
				while(est_divible(nb, div))
				{
					if (first_print)
					{
						printf("%d", div);
						nb /= div;
						first_print = 0;
					}
					else
					{
						printf("*%d", div);
						nb /= div;
					}
				}
			}
			div++;
		}
	}
}

int		main(int ac, char **av)
{
	if (ac == 2 && *av[1])
		fprime(atoi(av[1]));
	printf("\n");
	return (0);
}


