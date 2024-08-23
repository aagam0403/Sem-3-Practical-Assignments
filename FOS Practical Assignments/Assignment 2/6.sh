echo "Enter a num = "
read num
fact=1
for ((i=1;i<=num;i++))
do
fact=$((fact * $i))
done
echo "The fact of $num = $fact"
