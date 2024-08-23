date=$(date "+%H")
if [ $date -ge 5 ] && [ $date -le 12 ]
then
echo "Good Morning"
elif [ $date -ge 12 ] && [ $date -le 17 ]
then
echo "Good Afternoon"
elif [ $date -ge 17 ] && [ $date -le 20 ]
then
echo "Good Evening"
else
echo "Good Night"
fi
