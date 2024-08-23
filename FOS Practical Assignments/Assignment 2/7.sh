echo "Enter a number = "
read num
for ((i=1;i<=10;i++))
do
ans=$((num*i))
echo "$num * $i = $ans"
done
