until [ $i -gt 100 ]
do
if [ $((i%2)) -ne 0 ];
then
echo "$i"
fi
i=$((i+1))
done
