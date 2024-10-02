echo "3rd cut frm student"
cut -d ' ' -f3 student.txt > city12.txt
echo ""

echo "Marks cut from student"
cut -d ' ' -f1,4 student.txt  > marks.txt
echo ""

echo "Print Highest marks"
awk 'BEGIN {max=0} {if ($4 > max) {max=$4; name=$2}} END {print name " has the highest marks: " max}' student.txt
echo ""

echo "Displaying no."
grep -o '[0-9]\+' student.txt
echo ""
