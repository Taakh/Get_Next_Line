/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 01:29:47 by rmangili          #+#    #+#             */
/*   Updated: 2014/12/01 14:57:20 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <includes/libft.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*news;
	int		tail;

	tail = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	news = (char *)malloc(sizeof(*news) * (tail + 1));
	if (!news)
		return (NULL);
	ft_strcpy(news, s1);
	ft_strcat(news, s2);
	return (news);
}
