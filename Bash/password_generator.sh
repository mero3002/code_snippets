#!/bin/bash

chars='abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}|;:,.<>?'

while true; do
    read -p "Enter password length (q to quit): " length
    
    if [[ "$length" == "q" ]]; then
    	echo "<< byebye >>"
        break
    fi
    
    if [[ ! "$length" =~ ^[0-9]+$ ]]; then
        echo "Invalid input."
		echo ""
        continue
    fi
    
    if (( length <= 0 )); then
        echo "So why bother running the script?"
		echo ""
        continue
    fi
    
    password=""
    
    for (( i = 0; i < length; i++ )); do
        index=$(( RANDOM % ${#chars} ))
        password+="${chars:index:1}"
    done
    
    echo "$password"
	echo ""
done
