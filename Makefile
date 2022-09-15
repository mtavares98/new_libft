# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 18:15:41 by mtavares          #+#    #+#              #
#    Updated: 2022/09/14 23:16:50 by mtavares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	isalnum.c \
					isalpha.c \
					isascii.c \
					isdigit.c \
					isprint.c \
					memset.c \
					strlen.c \
					bzero.c \
					memcpy.c \
					memmove.c \
					strlcpy.c \
					strlcat.c \
					toupper.c \
					tolower.c \
					strchr.c \
					strrchr.c \
					strncmp.c \
					memchr.c \
					memcmp.c \
					atoi.c \
					strnstr.c \
					calloc.c \
					strdup.c \
					substr.c \
					strjoin.c \
					strtrim.c \
					split.c \
					itoa.c \
					strmapi.c \
					striteri.c \
					putchar_fd.c \
					putstr_fd.c \
					putendl_fd.c \
					putnbr_fd.c \

NAME			=	libft.a

OBJS			=	$(SRCS:.c=.o)

CC 				=	gcc

CFLAGS			=	-Wall -Werror -Wextra -I.

all:		$(NAME)

%.o:		%.c
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME): 	$(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
		rm -f $(OBJS) $(OBJS_B)

fclean: 	clean
		rm -f $(NAME)

re:			fclean all
