cat /etc/passwd | grep -v "#" | cut -d ":" -f1 | sed -n "n;p" | rev | sort -r | sed -n -e "$FT_LINE1,$FT_LINE2 p" | tr "
" ","| sed "s/,/, /g" | sed "s/..$/./g" | tr -d "\n"
