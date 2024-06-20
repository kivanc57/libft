/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgordu <kgordu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 21:20:29 by kgordu            #+#    #+#             */
/*   Updated: 2024/06/14 16:29:43 by kgordu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h> */

char	*ft_strchr(const char *s, int c)
{
	char	altc;
	char	*alts;
	int		i;

	i = 0;
	alts = (char *)s;
	altc = c;
	while (alts[i] != altc)
	{
		if (alts[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)alts + i);
}
/* int	main(void)
{
	printf("%p\n", (void *)ft_strchr("abc", 'a'));
	return (0);
}
 */