/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydagdevi <ydagdevi@student.42.istanbul.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:01:58 by ydagdevi          #+#    #+#             */
/*   Updated: 2022/10/11 18:02:53 by ydagdevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*p;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen((char *)s);
	str = malloc(len + 1);
	if (!str)
		return (0);
	p = str;
	while (*s)
	{
		*p = *s;
		p++;
		s++;
	}
	*p = '\0';
	return (str);
}
