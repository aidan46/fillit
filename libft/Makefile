NAME = libft.a
SRCS =	ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_memccpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_strlen.c \
		ft_strdup.c ft_strcpy.c \
		ft_strncpy.c ft_strcat.c ft_strncat.c \
		ft_strlcat.c ft_strchr.c \
		ft_strrchr.c ft_strstr.c ft_strnstr.c \
		ft_strcmp.c ft_strncmp.c \
		ft_atoi.c ft_isalnum.c ft_isalpha.c \
		ft_isdigit.c ft_isascii.c \
		ft_isprint.c ft_toupper.c ft_tolower.c \
		ft_strnew.c ft_strclr.c \
		ft_putchar.c ft_putstr.c ft_putendl.c \
		ft_putnbr.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_memalloc.c ft_memdel.c \
		ft_strdel.c ft_striter.c ft_striteri.c ft_strmap.c \
		ft_strmapi.c ft_strequ.c \
		ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c \
		ft_itoa.c ft_strsplit.c \
		ft_lstadd.c ft_lstnew.c ft_lstiter.c ft_lstdelone.c \
		ft_lstdel.c ft_lstmap.c \
		ft_strrev.c ft_strtoupper.c ft_strtolower.c \
		ft_lstcount.c ft_lstrev.c ft_sqrt.c \
		ft_lstdelback.c ft_cbrt.c ft_strjoinone.c \
		ft_print_matrix.c ft_malloc_arr.c \

COMP = gcc
FLAG = -Wall -Wextra -Werror -c
OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	@$(COMP) $(FLAG) $(SRCS) 
	@ar -rc libft.a $(OBJ)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all