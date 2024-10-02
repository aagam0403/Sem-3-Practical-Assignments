echo "Student with highest marks:"
awk 'NR == 1 {next} {if ($4 > max) {max = $4; name = $2}} END {print name " with marks: " max}' student.txt
echo ""

echo "Student with lowest marks:"
awk 'NR == 1 {next} {if ($4 < min || min == "") {min = $4; name = $2}} END {print name " with marks: " min}' student.txt
echo ""

echo "Employee with highest salary:"
awk 'NR == 1 {next} {if ($4 > max) {max = $4; name = $2}} END {print name " with salary: " max}' emp.txt
echo ""

echo "Employee with lowest salary:"
awk 'NR == 1 {next} {if ($4 < min || min == "") {min = $4; name = $2}} END {print name " with salary: " min}' emp.txt
echo ""
