echo "Displaying emp and student files horizontally:"
paste emp.txt student.txt
echo ""

echo "Displaying emp file with tab delimiters:"
awk 'BEGIN {OFS="\t"} {print}' emp.txt
echo ""

echo "Displaying student file with tab delimiters:"
awk 'BEGIN {OFS="\t"} {print}' student.txt
echo ""

echo "Join emp and Student file"
join emp.txt student.txt
echo ""

echo "Sort Marks in reverse order"
awk '{print $4}' student.txt | sort -r
echo ""
