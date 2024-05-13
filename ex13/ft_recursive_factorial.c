/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:37:03 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/13 15:42:13 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    if (nb < 0 || nb > 12)
        return(0);
    else if (nb == 0)
        return(1);
    return(nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac == 2)
        printf("le resultat = %d", ft_recursive_factorial(atoi(av[1])));
}
*/