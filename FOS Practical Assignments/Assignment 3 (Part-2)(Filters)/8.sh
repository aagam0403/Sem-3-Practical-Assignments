echo "Enter file name :"
read name
if [ -e $name.txt ]
then
sort -r $name.txt > sort.txt
if cmp -s "$name.txt" "sort.txt"
then
echo "File is already sorted"
else
echo "Output in descending order"
cat sort.txt
fi
else
echo "File does not exist"
fi
