# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 22:33:16 by iait-ouf          #+#    #+#              #
#    Updated: 2023/03/01 22:34:15 by iait-ouf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c *.c
ar -rc libft.a *.o
