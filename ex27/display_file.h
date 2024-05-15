/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:49:18 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/15 15:56:04 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H
# define DISPLAY_FILE_H

# include <fcntl.h>
# include <unistd.h>

# define BUFFER_SIZE 1

# define ERROR_NAME "File name missing.\n"
# define ERROR_READ "Cannot read file.\n"
# define ERROR_ARGS "Too many arguments.\n"

int		ft_display_file(char *file_path);
void	ft_putstr_error(char *string_error);

#endif