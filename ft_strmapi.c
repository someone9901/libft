/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 21:52:18 by aamssafi          #+#    #+#             */
/*   Updated: 2021/12/06 20:58:30 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 #include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s)
		return (0);
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (0);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
char		mapi(unsigned int i, char c)
{
    (void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
int main()
{
    printf("%s\n", ft_strmapi("3AFaK dWzlIa PrOjEt BaAaAaAalIZ", &mapi));
}