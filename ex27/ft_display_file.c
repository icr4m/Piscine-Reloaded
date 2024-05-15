/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:36:02 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/15 17:15:05 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int	ft_display_file(char *file_path)
{
	int		fd;
	char	buffer[BUFFER_SIZE];

	fd = open(file_path, O_RDONLY);
	if (fd == -1)
		return (fd);
	while (read(fd, buffer, BUFFER_SIZE))
		write(1, buffer, BUFFER_SIZE);
	return (fd);
}
