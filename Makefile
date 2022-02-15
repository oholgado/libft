SRCS      = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
                ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
                ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
                ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
                ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_split.c ft_strmapi.c \
                ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c 

BONUSSRC     = ft_lstnew.c \
                ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
                ft_lstiter.c ft_lstmap.c

OBJS      = $(SRCS:.c=.o)
INCLUDE = libft.h
BONUSOBJ = $(BONUSSRC:.c=.o)
CC        = gcc
RM        = rm -f
CFLAGS      = -Wall -Wextra -Werror -I.
NAME      = libft.a
LIB		  = ar rcs

all:      $(NAME)
$(NAME):  $(OBJS) $(INCLUDE)
		$(LIB) $(NAME) $(OBJS)

bonus:    $(OBJS) $(BONUSOBJ) $(INCLUDE)
	     $(LIB) $(NAME) $(BONUSOBJ) $(OBJS)
clean:
		$(RM) $(OBJS) $(BONUSOBJ)
fclean:     clean
		$(RM) $(NAME)
re:       fclean $(NAME)
rebonus:    fclean bonus
.PHONY:     all clean fclean re
