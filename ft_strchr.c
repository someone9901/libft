/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:21:40 by aamssafi          #+#    #+#             */
/*   Updated: 2021/12/06 20:15:35 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return ((char *)s);
		s++;
	}
	if (*s == (char) c)
		return ((char *) s);
	return (0);
}

int main()
{
	char s[] = "achraf";
	char b[] = "achraf";
	printf("%s\n", ft_strchr(s, 'a' + 256));
	printf("%s\n", strchr(b, 'a' + 256));
}
