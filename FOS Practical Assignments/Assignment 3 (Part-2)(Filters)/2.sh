echo "Print Eno,Ename,City"
awk '{print $1,$2,$3}' emp.txt
echo ""

echo "Ename 2 character in new line"
awk '{print $2}' emp.txt | fold -w 2
echo ""

echo "Ename in Capital Letters"
awk '{print toupper ($2)}' emp.txt
echo ""

echo "Tab Delimeter"
awk 'BEGIN {OFS="\t"} {print $1, $2, $3}' emp.txt
