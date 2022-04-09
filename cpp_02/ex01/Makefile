NAME		= a.out
CC			= c++
FLAGS		= -Wall -Wextra -Werror -I. -std=c++98
SRCS		= main.cpp Fixed.cpp
OBJS		= $(SRCS:.cpp=.o)
%.o:		%.cpp
			$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY :	all clean fclean re
