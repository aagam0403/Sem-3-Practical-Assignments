echo -n "Enter the file name to search: "
read filename
find . -type f -name "$filename"
