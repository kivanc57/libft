/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgordu <kgordu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 22:52:39 by kgordu            #+#    #+#             */
/*   Updated: 2024/06/13 13:17:07 by kgordu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h> */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (i == n)
		return (0);
	while ((i < (n - 1)) && (s1[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((unsigned int)(s1[i]) - (unsigned int)(s2[i]));
}

/* int	main(void)
{
	printf("%d", ft_strncmp("ab", "aa", 2));
	return (0);
}
 */