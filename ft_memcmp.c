/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:19:10 by aamssafi          #+#    #+#             */
/*   Updated: 2021/12/04 04:08:25 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;
	size_t			i;

	i = 0;
	if (!n || (s1 != NULL && s2 == s1))
		return (0);
	ps1 = (unsigned char *) s1;
	ps2 = (unsigned char *) s2;
	while (ps1[i] == ps2[i] && i < n - 1)
		i++;
	return (ps1[i] - ps2[i]);
}
// #include <string.h>
// int main()
// {

// 	printf("%d", ft_memcmp("acb", "ab", 2));
// }