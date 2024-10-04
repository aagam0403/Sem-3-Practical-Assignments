echo "Enter file name :"
read name
if [ -e "$name.txt" ]
then
echo "Sorting File :"
sort "$name.txt"
echo "First five lines :"
head -n 5 "$name.txt"
echo "Last five lines :"
tail -n 5 "$name.txt"
echo "Pasting two files :"
paste -d "|" "$name.txt" a.txt
else
echo "File does not exist"
fi
