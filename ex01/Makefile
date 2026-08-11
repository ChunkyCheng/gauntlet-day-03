NAME := entities

CXX      := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++17

SRCS := main.cpp	Entity.cpp	Player.cpp	Enemy.cpp	Inventory.cpp

OBJS_DIR	:= OBJS
OBJS		:= $(SRCS:%.cpp=$(OBJS_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
