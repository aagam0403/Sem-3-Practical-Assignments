awk 'NR==1 {print $0} NR>1 {if($3>15){print $0 "*"} else {print $0}}' f1.txt
