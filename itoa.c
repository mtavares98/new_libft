/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:40:24 by mtavares          #+#    #+#             */
/*   Updated: 2022/09/14 22:08:27 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*itoa_aux(char *s, int n, int *maxdig, int counter)
{
	*maxdig = counter;
	if (n > 9 || n < -9)
		s = itoa_aux(s, n / 10, maxdig, counter + 1);
	if (!s)
	{
		s = malloc(sizeof(char) * (counter + 1 + (n < 0)));
		if (!s)
			return (NULL);
		if (n < 0)
			s[0] = '-';
		s[*maxdig + (n < 0)] = 0;
	}
	s[*maxdig - counter + (n < 0)] = (n % 10) * ((n > 0) - (n < 0)) + 48;
	return (s);
}

char	*ft_itoa(int n)
{
	int		maxdig;
	char	*s;

	maxdig = 0;
	s = itoa_aux(NULL, n, &maxdig, 1);
	return (s);
}
