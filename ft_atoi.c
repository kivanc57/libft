/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgordu <kgordu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:19:04 by kgordu            #+#    #+#             */
/*   Updated: 2024/06/13 14:09:11 by kgordu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h> */

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;
	int	i;

	num = 0;
	sign = 1;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		sign = -1;
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

/* int	main(void)
{
	char x[] = "    -89";
	printf("%d", ft_atoi(x));
	return (0);
} */
