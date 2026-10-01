#include <stdlib.h>

static int	size_nb(long nb)
{
	int	len;

	len = 1;
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*result;
	long	nb;
	int		len;
	int		i;

	nb = nbr;
	len = size_nb(nb);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	i = len - 1;
	while (1)
	{
		result[i--] = nb % 10 + '0';
		nb /= 10;
		if (nb == 0)
			break ;
	}
	return (result);
}
