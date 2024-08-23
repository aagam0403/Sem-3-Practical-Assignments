echo "Enter Basic Salary = "
read basic

DA=$(echo "scale=2;" $basic*60/100|bc)
HRA=$(echo "scale=2;" $basic*20/100|bc)
MA=100
IT=$(echo "scale=2;" $basic*15/100|bc)
Gross=$(echo "scale=2;" $DA+$HRA+$MA+$IT|bc)
echo "DA = $DA"
echo "HRA = $HRA"
echo "MA = $MA"
echo "IT = $IT"
echo "Gross Salary = $Gross"
