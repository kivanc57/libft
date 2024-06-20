/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgordu <kgordu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:45:51 by kgordu            #+#    #+#             */
/*   Updated: 2024/06/14 14:25:39 by kgordu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i ++;
	}
}

/* int	main(void)
{
	char	str[] = "abcdf";
	printf("String before the operation: %s\n", str);
	ft_bzero(str, 2);
	printf("String after the operation: %s\n", str);
	return (0);
}
 */