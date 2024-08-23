echo "Enter A = "
read a
cube=$(($a*$a*$a))
echo "Cube of A = $cube"

echo "Enter Celcius"
read c
far=$(echo "scale=2; $c + 32" | bc)
echo "Farenheit = $far"
