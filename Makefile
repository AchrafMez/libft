NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_itoa.c ft_strmapi.c ft_strdup.c ft_substr.c ft_atoi.c ft_strtrim.c ft_strjoin.c ft_isalnum.c ft_isalpha.c ft_striteri.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strchr.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_memcpy.c ft_memmove.c ft_memset.c ft_bzero.c ft_memcmp.c ft_strnstr.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memchr.c
RM = rm -rf
OBJ = $(SRC:.c=.o)

# ranlib $(NAME)

all: $(NAME)

$(NAME): $(OBJ) 
	ar rcs $(NAME) $(OBJ)

main:
	${CC} ${CFLAGS} main.c ${NAME}

# %.o: %.c   # $(CC) $(CFLAGS) -I. -o $@ -c $? 
	

clean :
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:fclean all
