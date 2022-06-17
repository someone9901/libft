/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:52:18 by aamssafi          #+#    #+#             */
/*   Updated: 2021/12/04 04:08:29 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src < dst)
	{
		while (len--)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	else if (src > dst)
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}

// int main()
// {
//     char	test1[] = "achraf";
// 	char	test2[] = "achraf";

// 	ft_memmove(test1, test1 + 1, 0);
// 	memmove(test2, test2 + 1, 0);

//     printf("%s\n%s", test1, test2);

//     return 0;
// }