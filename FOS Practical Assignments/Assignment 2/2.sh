read -p "ENter a number: " n

num=1
for ((i = 1; i <= n; i++)); do
    for ((j = 1; j <= i; j++)); do
            printf "%d " $num
	            num=$((num+1))
		        done
			    echo
			    done
