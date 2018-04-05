/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiboitel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 18:49:26 by tiboitel          #+#    #+#             */
/*   Updated: 2017/02/20 19:19:25 by tiboitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nm.h"

int		main(int argc, char **argv)
{
	int		fd;

	if (argc != 2)
	{
		ft_putendl_fd(2, "Please give me an argument\n");
		return (EXIT_FAILURE);
	}
	if ((fd = open(argv[1], O_RDONLY)) < 0)
	{
		ft_putendl_fd(2, "Unable to open this file.\n");
	}
	return (EXIT_SUCCESS);
}
