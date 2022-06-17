/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.C                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 19:53:07 by aamssafi          #+#    #+#             */
/*   Updated: 2021/11/24 23:48:45 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (*s != '\0')
	{
		f(i, s);
		i++;
		s++;
	}
}

// void        mapi(unsigned int i, char *c)
// {
//     if (*c >= 'a' && *c <= 'z')
//         *c = *c - 32;
//     else if (*c >= 'A' && *c <= 'Z')
//         *c = *c + 32;
// }

// int    main()
// {
//     char str[] = "3AfAK DwZlIa ProJeT";
//     ft_striteri(str, &mapi);
//     printf("%s\n", str);
// }