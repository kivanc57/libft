/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgordu <kgordu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 21:46:57 by kgordu            #+#    #+#             */
/*   Updated: 2024/06/14 17:02:52 by kgordu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h> */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return (((char *)&s[i]));
		i--;
	}
	return (NULL);
}

/* int	main(void)
{
	printf("%p\n", (void *)ft_strrchr("aa", 'a'));
	return (0);
}
 */