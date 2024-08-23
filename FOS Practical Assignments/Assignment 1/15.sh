echo "Enter the file name"
read file
wordc=$(wc -w < "$file")
if [ $wordc -gt 20 ]
then 
echo "Enough Words"
else
echo "More words to print"
fi
