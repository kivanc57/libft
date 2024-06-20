/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgordu <kgordu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:14:01 by kgordu            #+#    #+#             */
/*   Updated: 2024/06/14 15:10:23 by kgordu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h> */

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	i = 0;
	ptr1 = s1;
	ptr2 = s2;
	while (i < size)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	printf("%d\n", ft_memcmp("aa", "ab", 3));
	return (0);
}
 */