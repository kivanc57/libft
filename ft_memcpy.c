/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgordu <kgordu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:45:14 by kgordu            #+#    #+#             */
/*   Updated: 2024/06/14 15:10:36 by kgordu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char src[] = "This is a string";
	char dest[50];
	ft_memcpy(dest, src, 7);
	printf("%s", dest);
	return (0);
}
 */