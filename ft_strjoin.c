/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgordu <kgordu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:23:41 by kgordu            #+#    #+#             */
/*   Updated: 2024/06/13 23:23:31 by kgordu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t				total_len;
	unsigned int		i;
	unsigned int		j;
	char				*alloc;

	total_len = 0;
	total_len += (ft_strlen(s1) + ft_strlen(s2) + 1);
	alloc = (char *)malloc(total_len * sizeof(char));
	if (!alloc)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		alloc[i] = s1[i];
		i ++;
	}
	j = 0;
	while (s2[j] != '\0')
		alloc[i++] = s2[j++];
	alloc[i] = '\0';
	return (alloc);
}
