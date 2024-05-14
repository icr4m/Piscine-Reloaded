/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 09:21:10 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/14 09:42:46 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	index;

	index = 0;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (0);
	while (min < max)
	{
		tab[index] = min;
		index++;
		min++;
	}
	return (tab);
}
/*
int	main(void)
{
	//int	*tab = ft_range(1, 10);
	//int *tab2 = ft_range(-4, 5);
	//int *tab3 = ft_range(5, 0);
	//int i;
	int j;
	for (j = 0; j < 9; j++)
		printf("tab[j] = %d\t", tab[j]);

	return (0);
}*/
