/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgordu <kgordu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:25:54 by kgordu            #+#    #+#             */
/*   Updated: 2024/06/13 14:37:27 by kgordu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	void	*alloc;

	len = ft_strlen(s) + 1;
	alloc = (char *)malloc(len * sizeof(char));
	if (alloc == NULL)
		return (NULL);
	ft_memcpy(alloc, s, len);
	return (alloc);
}
