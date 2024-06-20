/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgordu <kgordu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:30:52 by kgordu            #+#    #+#             */
/*   Updated: 2024/06/13 13:17:33 by kgordu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h> */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;
	char	*ptr_big;
	char	*ptr_little;

	ptr_big = (char *)big;
	ptr_little = (char *)little;
	if (!*little)
		return (ptr_big);
	i = 0;
	little_len = ft_strlen(little);
	while (((i + little_len) <= len) && (ptr_big[i] != '\0'))
	{
		if (ft_strncmp(ptr_big + i, ptr_little, little_len) == 0)
			return (ptr_big + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;

	ptr = ft_strnstr(largestring, smallstring, 4);
	if (ptr)
		printf("%s", ptr);
	else
		printf("substring not found");
	return (0);
}
 */