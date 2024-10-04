#1)
echo -n "Enter the file name to search: "
read filename
find . -type f -name "$filename"

#2)
echo -n "Enter the directory name to search: "
read dirname
find . -type d -name "$dirname"

#3)
echo -n "Finding C and .txt files:" 
find . -type f \( -name "*.c" -o -name "*.txt" \)

#4)
echo -n "Enter the file extension to search (without dot): "
read extension
find . -type f -name "*.$extension"

#5)
echo -n "Finding all files starting with capital letters (A-Z):"
find . -type f -name "[A-Z]*"

#6)
find . -type f -perm /111

#7)
find . -type f ! -perm /111

#8)
find . -type f -perm /444

#9)
find . -type f -perm /644

#10)
find . -type f -name ".*"
