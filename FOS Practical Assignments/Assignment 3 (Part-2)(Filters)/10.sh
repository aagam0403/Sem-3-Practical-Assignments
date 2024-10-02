echo "sort student file according to name and store it in another file"
awk '{print $2}' student.txt | sort > sort.txt
echo "Sort operation done successfully"
