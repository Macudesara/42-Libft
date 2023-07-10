# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 11:28:36 by mde-sara          #+#    #+#              #
#    Updated: 2023/07/10 10:45:19 by mde-sara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a
CC 		= cc
FLAGS	= -Wall -Wextra -Werror
AR		= ar rcs

SOURCES = ft_strlen.c ft_strncmp.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_atoi.c ft_strdup.c ft_memset.c ft_bzero.c ft_memchr.c ft_memcpy.c ft_memcmp.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_split.c

OBJECTS = $(SOURCES:.c=.o)

DEPS = $(SOURCES:.c=.d)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) -c $(FLAGS) -I ./ -MMD -MP  -c $< -o $@

-include $(DEPS)

clean:
	rm -f $(OBJECTS) $(DEPS) $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
