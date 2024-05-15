/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:54:41 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/15 15:51:58 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if (ft_display_file(av[1]) == -1)
			ft_putstr_error(ERROR_READ);
	}
	else if (ac == 1)
		ft_putstr_error(ERROR_NAME);
	else if (ac > 2)
		ft_putstr_error(ERROR_ARGS);
	return (0);
}
