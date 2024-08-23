echo "1. Addition"
echo "2.Substraction"
echo "3. Multiplication"
echo "4. Division"
echo "Enter Choice"
read choice
echo "Enter A = "
read a
echo "Enter B = "
read b
case $choice in
1)
add=$(($a+$b))
echo "Addition = $add"
;;
2)
sub=$(($a-$b))
echo "Substraction = $sub"
;;
3)
mul=$(($a*$b))
echo "Multiplication = $mul"
;;
4)
div=$(($a/$b))
echo "Division = $div"
;;
esac
