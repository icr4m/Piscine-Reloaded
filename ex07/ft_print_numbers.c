/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:59:38 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/13 15:42:25 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(0, &c, 1);
}

void ft_print_numbers(void)
{
    char c;

    c = '1';
    while(c <= '9')
    {
        ft_putchar(c);
        c++;
    }
}