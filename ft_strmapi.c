/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgordu <kgordu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 22:55:22 by kgordu            #+#    #+#             */
/*   Updated: 2024/06/13 23:03:11 by kgordu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*alloc;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	alloc = (char *)malloc((len + 1) * sizeof(char));
	if (!alloc)
		return (NULL);
	while (s[i] != '\0')
	{
		alloc[i] = f(i, s[i]);
		i++;
	}
	alloc[i] = '\0';
	return (alloc);
}
