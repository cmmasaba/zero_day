#!/bin/bash

if read -t 15 -p "Enter the file name: " name
then
	read -p "Enter the file permissions in absolute mode: " perm
	touch $name
	chmod $perm $name
	vim $name
else
	echo "No name provided, try again"
fi
