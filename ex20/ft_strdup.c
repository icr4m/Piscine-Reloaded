/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:12:42 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/13 18:18:47 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strdup(char *src)
{
    char *new;
    int i;
    int len;

    len = 0;
    while(src[len])
        len++;
    new = (char *)malloc(len * sizeof(char) + 1);
    if (!new)
        return(0);
    i = 0;
    while(src[i])
    {
        new[i] = src[i];
        i++;
    }
    return (new);
}