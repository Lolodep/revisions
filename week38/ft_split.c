/*
savoir si un caractère est un séparateur ;
compter combien de mots il y a ;
connaître la longueur d'un mot ;
copier un mot ;
remplir le tableau.
*/


#include <stdio.h>
#include <stdlib.h>

int	ft_is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && ft_is_separator(*str, charset))
			str++;
		if (*str)
			count++;
		while (*str && !ft_is_separator(*str, charset))
			str++;
	}
	return (count);
}

int	ft_word_len(char *str, char *charset)
{
	int	len;

	len = 0;
	while (str[len] && !ft_is_separator(str[len], charset))
		len++;
	return (len);
}

char	*ft_copy_word(char *str, int len)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		words;
	int		i;
	int		len;

	words = ft_count_words(str, charset);
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (ft_is_separator(*str, charset))
			str++;
		len = ft_word_len(str, charset);
		result[i] = ft_copy_word(str, len);
		if (!result[i])
			return (NULL);
		str += len;
		i++;
	}
	result[i] = 0;
	return (result);
}
int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("je,viens-de;Paris", ",;-");
	if (!result)
		return (1);
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}