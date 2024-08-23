echo "Enter a number: " 
read num 

count=0
sum=0

while [ $num -ne 0 ]; 
do
   rem=$((num%10))
   count=$((count+1))
   sum=$((sum+rem))
   num=$((num/10))
done
echo "Number of digits = $count"
echo "Sum of digits = $sum"
