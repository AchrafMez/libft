NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_split.c ft_itoa.c ft_strmapi.c ft_strdup.c ft_substr.c ft_atoi.c ft_strtrim.c ft_strjoin.c \
ft_isalnum.c ft_isalpha.c ft_striteri.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strchr.c ft_strlcpy.c \
ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_memcpy.c ft_memmove.c ft_memset.c\
 ft_bzero.c ft_memcmp.c ft_strnstr.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memchr.c
BONUS = ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c 
RM = rm -rf
OBJ = $(SRC:.c=.o)
OBJS = $(BONUS:.c=.o)

# ranlib $(NAME)

all: $(NAME)
	@echo "\033[1;32m\n  -- M ASHRAF COMPELATION IS DONE -- \n\033[0m"
	@sleep 2

$(NAME): $(OBJ) 
	@ar rcs $(NAME) $(OBJ)

main:
	${CC} ${CFLAGS} main.c ${NAME}
	
bonus: $(OBJS) $(BONUS)
	@ar rcs $(NAME) $(OBJS) $(BONUS)

clean :
	@$(RM) $(OBJ) $(OBJS)
	@sleep 2
	@echo "\033[1;32m\n  -- M ASHRAF CLEAN IS DONE, BY! -- \n\033[0m"

fclean: clean
	@$(RM) $(NAME) $(OBJS)

re:fclean all

.PHONY: all clean fclean re bonus
