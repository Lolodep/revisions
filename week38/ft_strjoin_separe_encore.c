#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

int	ft_totalsize(int size, char **string)
{
	int	totalsize;
	int	i;

	totalsize = 0;
	i = 0;
	while (i < size)
	{
		totalsize = totalsize + ft_strlen(string[i]);
		i++;
	}
	return (totalsize);
}

void	ft_write_word(char *result, char *str, int *k)
{
	int	j;

	j = 0;
	while (str[j])
	{
		result[*k] = str[j];
		j++;
		(*k)++;
	}
}

void	ft_write_sep(char *result, char *sep, int *k)
{
	int	j;

	j = 0;
	while (sep[j])
	{
		result[*k] = sep[j];
		j++;
		(*k)++;
	}
}

void	ft_write_string(char *result, char **strs, char *sep, int size)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		ft_write_word(result, strs[i], &k);
		if (i < size - 1)
			ft_write_sep(result, sep, &k);
		i++;
	}
	result[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		taille;

	if (size == 0)
	{
		result = malloc(sizeof(char));
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	taille = ft_totalsize(size, strs) + ((size - 1) * ft_strlen(sep));
	result = malloc(sizeof(char) * (taille + 1));
	if (!result)
		return (NULL);
	ft_write_string(result, strs, sep, size);
	return (result);
}

int	main(void)
{
	char	*strs[] = {"je", "vais", "bien"};
	char	*result;

	result = ft_strjoin(3, strs, "-*-");
	printf("%s\n", result);
	free(result);
	return (0);
}