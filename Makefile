# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 16:37:09 by aamssafi          #+#    #+#              #
#    Updated: 2021/12/05 22:06:24 by aamssafi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_atoi.c \
		ft_bzero.c ft_memset.c ft_strchr.c ft_strncmp.c ft_strrchr.c ft_memcpy.c ft_putchar_fd.c ft_memmove.c ft_strdup.c ft_memchr.c ft_memcmp.c \
		ft_strnstr.c ft_calloc.c ft_substr.c ft_putstr_fd.c ft_strjoin.c ft_putnbr_fd.c ft_putendl_fd.c ft_itoa.c ft_strtrim.c ft_strmapi.c \
		ft_striteri.c ft_split.c
OBJS = ${SRC:.c=.o}
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
	
$(OBJS):
	$(CC) $(CFLAGS) $(SRC) -c

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re