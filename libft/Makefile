# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 15:40:57 by jocarlo2          #+#    #+#              #
#    Updated: 2025/04/25 15:54:05 by jocarlo2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I ./inc

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

PRINTF_SRCS = ft_printf.c ft_putnbr_hex.c ft_putnbr_u.c ft_putnbr.c ft_putptr.c

BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)
PRINTF_OBJS = $(PRINTF_SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# ---------------------- REGRAS ---------------------- #
all: $(NAME)

$(NAME): $(OBJS) $(PRINTF_OBJS)
	ar rcs $(NAME) $(OBJS) $(PRINTF_OBJS)

bonus: $(NAME) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(PRINTF_OBJS) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(PRINTF_OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

