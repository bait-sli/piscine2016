#!/bin.sh
cat /etc/passwd | cut -d : -f1  | grep -v "#" | grep -v "nobody" | sed "N;P;d" | rev | sort -r | tr '\n' ',' | sed '/$FT_LINE1/,/FT_LINE2/ p' | rev | cut -d "," -f2- | rev | tr '\n' '.'
