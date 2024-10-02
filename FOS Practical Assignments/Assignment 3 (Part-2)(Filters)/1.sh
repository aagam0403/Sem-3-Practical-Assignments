echo "First 3 lines"
head -3 emp.txt
echo ""

echo "Sorting"
sort emp.txt
echo ""

echo "Last 3 Lines"
tail -3 emp.txt
echo ""

echo "Displaying Eno and City"
awk '{print $1,$3}' emp.txt
echo ""
