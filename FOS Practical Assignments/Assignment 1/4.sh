echo "Enter Basic Salary = "
read basic

DA=$(echo "scale=2;" $basic*0.60 | bc)
HRA=$(echo "scale=2;" $basic*0.20 | bc)
MA=100
IT=$(echo "scale=2;" $basic*0.15 | bc)
GROSS=$(echo "scale=2;" $basic+$DA+$HRA+$MA+$IT | bc)
echo "DA = $DA"
echo "HRA = $HRA"
echo "MA = $MA"
echo "IT = $IT"
echo "GROSS = $GROSS"
