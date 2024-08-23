echo "Enter Basic Salary = "
read basic
DA=$(echo "scale=2; $basic * 40 / 100"|bc)
HRA=$(echo "scale=2; $basic * 20 / 100"|bc)
Gross=$(echo "scale=2; $DA + $HRA"|bc)
echo "Gross Salary = $Gross"
