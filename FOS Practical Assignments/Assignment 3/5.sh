echo "BEFORE"
cat f1.txt
echo ""
echo "AFTER"
sed 's/unix/linux/' f1.txt
echo ""
echo "ONLY 3rd OCCURANCE"
sed 's/unix/linux/3' f1.txt
echo ""
echo "SECOND LINE ONLY"
sed 's/unix/linux/3g' f1.txt
echo ""
echo "DELETE LINE"
sed '2d' f1.txt
