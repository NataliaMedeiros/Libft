#!/bin/bash

BOLD=$(tput bold)
RESET=$(tput sgr0)

rm -rf exec

mkdir exec

cd libft

make re

cd ..

if [ -n "$1" ]; then
    FUNCTION_NAME="$1"
    INCL_FILES=$(find libft -type f -name 'ft_'${FUNCTION_NAME}'.c')
else
    INCL_FILES=$(find libft -type f -name '*.c')
fi

for file in ${INCL_FILES} ; do
    FILE_NAME=$(basename "$file")

    if [ -f "main_for_test/main_${FILE_NAME}" ]; then

#        echo "__________________________________________________________________________"
        cc  -Wall -Werror -Wextra \
        libft/${FILE_NAME} \
        main_for_test/main_${FILE_NAME} \
        assert.c \
        string_gen.c \
        -L. -Llibft -lft \
        -o exec/${FILE_NAME%%.*}

#       echo "Compiling file ${BOLD} ${FILE_NAME} ${RESET}"
        if [ $? -eq 0 ]; then
            echo "Starting tests for ${FILE_NAME}. "
            ./exec/${FILE_NAME%%.*}
    	else
        	echo "Compilation failed  for file ${FILE_NAME}."
    	fi

    else
        echo "ATENTION: Main not found for ${FILE_NAME} skipping."
    fi

    echo " "

done

cd libft

make fclean

cd ..
