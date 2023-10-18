#!/bin/bash

INCL_FILES=$(find libft -type f -name '*.c')
for file in ${INCL_FILES} ; do
    FILE_NAME=$(basename "$file")

    if [ -f "main_for_test/main_${FILE_NAME}" ]; then

        cc  -Wall -Werror -Wextra \
        libft/${FILE_NAME} \
        main_for_test/main_${FILE_NAME} \
        assert.c \
        string_gen.c \
        -L. -Llibft -lft \
        -lbsd \
        -o exec/${FILE_NAME%%.*} 

        if [ $? -eq 0 ]; then
            echo "Compilation successful for file ${FILE_NAME}. Starting tests"
            ./exec/${FILE_NAME%%.*}
    	else
        	echo "Compilation failed  for file ${FILE_NAME}."
    	fi

    else 
       echo "ATENTION: Main not found for ${FILE_NAME} skipping."
    fi

    echo " "

done