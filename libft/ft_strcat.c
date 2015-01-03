/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 18:23:55 by rmangili          #+#    #+#             */
/*   Updated: 2014/11/12 12:09:01 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strcat(char *s1, const char *s2)
{
	char *sun;
	char *sdeux;

	sun = s1;
	sdeux = (char *)s2;
	while (*sun)
	{
		sun++;
	}
	while (*sdeux)
	{
		*sun = *sdeux;
		sun++;
		sdeux++;
	}
	*sun = '\0';
	return (s1);
}
