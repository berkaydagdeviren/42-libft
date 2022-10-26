/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydagdevi <ydagdevi@student.42.istanbul.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:59:07 by ydagdevi          #+#    #+#             */
/*   Updated: 2022/10/11 18:00:46 by ydagdevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int l)
{
	unsigned int	i;
	unsigned char	*as1;
	unsigned char	*as2;

	as1 = (unsigned char *)s1;
	as2 = (unsigned char *)s2;
	i = 0;
	while (i < l && *(as1 + i) == *(as2 + i))
		i++;
	if (i == l)
		return (0);
	return (*(as1 + i) - *(as2 + i));
}
