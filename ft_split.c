/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 04:34:54 by aamssafi          #+#    #+#             */
/*   Updated: 2021/12/06 20:45:09 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static int	ft_wordc(char const *s, char c)
{
	int	j;

	j = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			j++;
			while (*s && *s != c)
				s++;
		}
	}
	return (j);
}

static int	ft_wordlen(char const *s, char c)
{
	int	j;

	j = 0;
	while (*s == c && *s)
		s++;
	while (*s != c && *s)
	{
		if (*s != c)
			j++;
		s++;
	}
	return (j);
}

static char	*ft_addw(const char *s, char c)
{
	char	*w;
	int		i;
	int		j;

	i = 0;
	j = ft_wordlen(s, c);
	w = malloc(j + 1);
	if (!w)
		return (0);
	while (s[i] != c && s[i] && j > 0)
	{
		w[i] = s[i];
		i++;
		j--;
	}
	w[i] = '\0';
	return (w);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	tab = malloc(sizeof(char *) * (ft_wordc(s, c) + 1));
	if (!tab)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			tab[j] = ft_addw(s + i, c);
			i += ft_wordlen(s + i, c);
			j++;
		}
	}
	tab[j] = 0;
	return (tab);
}
int main()
{
	char a[] = "ajhchdjcd fj4c 4fc 4v4 fvv";
	char b = ' ';
	char **tab = ft_split(a, b);
	int i = 0;
	while(tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}