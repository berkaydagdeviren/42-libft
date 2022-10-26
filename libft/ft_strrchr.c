/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydagdevi <ydagdevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:38:29 by ydagdevi          #+#    #+#             */
/*   Updated: 2022/10/11 18:09:29 by ydagdevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr( char *str, int c)
{
	int		l;
	char	*p;

	l = ft_strlen((char *) str);
	p = str + l - 1;
	if (c == 0)
		return ((char *)str + l);
	while (l != 0)
	{
		if (*p == (char) c)
			return ((char *) p);
		p--;
		l--;
	}
	return (0);
}
