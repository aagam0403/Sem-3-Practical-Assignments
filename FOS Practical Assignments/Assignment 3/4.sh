echo "Starting with P"
grep "P" f1.txt
echo ""
echo "Count quantity  = 25"
awk '$3==25{count++} END {print count}' f1.txt
echo ""
echo "Maximum Price"
awk 'NR>1{if($4>max) {max=$4;line=$0}} END {print line}' f1.txt
