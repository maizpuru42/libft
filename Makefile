# This is a makefile to compile libft. 

# /////////////////// Variable declarations //////////////////////

NAME = libft.a

# Variables for compiling, archiving and removing
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

# This is the list of sources to work with when creating the program
SOURCES = \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c   \
	ft_toupper.c ft_tolower.c ft_strlcat.c  ft_calloc.c ft_strncmp.c ft_memmove.c ft_strlcpy.c \
	ft_strchr.c ft_atoi.c ft_strrchr.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_itoa.c ft_putnbr_fd.c ft_putendl_fd.c \
	ft_strmapi.c ft_striteri.c  \

# These are the bonus sources we create for the project
BSOURCES = \
	#ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# Converts all the sources or .c files into objects or .o files
OBJECTS = $(SOURCES:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)

# /////////////////// Construction rules //////////////////////

# Standard rule to create libft.a when executing Make
all: $(NAME)

# This builds the static library libft.a using the objects listed in $(OBJECTS)
$(NAME):$(OBJECTS)
	$(AR) -r $@ $(OBJECTS)

# This builds the static library libft.a using the objects listed in $(BOBJECTS)
bonus: $(OBJECTS) $(BOBJECTS)
	$(AR) -r $(NAME) $?

# Applies the rules to follow when compiling sources into objects
%.o:%.c
	$(CC) -c $(CFLAGS) $?

# Removes all the .o files
clean:
	$(RM) $(OBJECTS) $(BOBJECTS)

# Removes all the .o files along with the libft.a static library
fclean: clean
	$(RM) $(NAME) $?

# Removes all generated files and then compiles everything making a new library
re: fclean all

# These are special targets that instruct Make that there are not expected 
# to be files with these names, and therefore, 
# the associated rules should always be executed, 
# regardless of whether the files exist or not
.PHONY: all bonus clean fclean re
