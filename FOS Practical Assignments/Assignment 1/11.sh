echo "Enter number A = "
read a
echo "Enter number B = "
read b
echo "Enter number C = "
read c
if [[ $a -gt $b && $a -gt $c ]]
then
echo "A is Greater than B & C"
elif [[ $b -gt $a && $b -gt $c ]]
then
echo "B is Greater than A & C"
else
echo "C is Greater than A & B"
fi
