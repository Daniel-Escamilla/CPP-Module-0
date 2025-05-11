NAME = megaphone

CC = c++

CFLAGS = -g3 -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

OBJDIR = $(NAME)_objects

all: $(NAME)

$(NAME): $(addprefix $(OBJDIR)/, $(OBJS))
	$(CC) $(CFLAGS) -o $@ $(addprefix $(OBJDIR)/, $(OBJS))

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)
clean:
	rm -rf $(NAME)_objects

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
