/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:02:05 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/23 12:13:30 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}

/*int main (void)
{
	char	text1[50] = "";
	char	text2[50] = "Hola mundo";
	int	i;
	int	j;

	i = ft_strncmp(text1, text2, 3);
	j = strncmp(text1, text2, 3);
	printf("%d\n", i);
	printf("-------------\n");
	printf("%d\n", j);
	return(0);
}*/