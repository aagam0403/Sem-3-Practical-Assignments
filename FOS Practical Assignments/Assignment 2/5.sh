echo "Enter a number"
read num
if [ $num -le 1 ];
then
echo "$num is not a prime number"
exit 0
fi

flag=1
for ((i=2 ; i<=(num/2); i++));
do
if [ $((num%i)) -eq 0 ];
then
flag=0
break
fi
done

if [ $flag -eq 1 ];
then
echo "$num is a prime number"
else
echo "$num is not a prime number"
fi
