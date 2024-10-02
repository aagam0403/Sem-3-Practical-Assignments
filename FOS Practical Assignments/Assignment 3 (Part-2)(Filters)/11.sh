echo "Cut and display in new file"
cut -c 1,5- demo.txt | sort > sorted_cities.txt
echo ""

echo "Sort all city Names"
sort cities.txt
echo ""

echo "First five cities:"
head -n 5 cities.txt
echo ""

echo "Last five cities:"
tail -n 5 cities.txt
echo ""
