# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 18:15:41 by mtavares          #+#    #+#              #
#    Updated: 2022/09/13 18:58:05 by mtavares         ###   ########.fr        #
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

NAME			=	libft.a

OBJS			=	$(SRCS:.c=.o)

CC 				=	gcc

CFLAGS			=	-Wall -Werror -Wextra -I.

all:		$(NAME)

%.o:		%.c
		@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): 	$(OBJS)
		@ar rcs $(NAME) $(OBJS)

clean:
		rm -f $(OBJS) $(OBJS_B)

fclean: 	clean
		rm -f $(NAME)

re:			fclean all
