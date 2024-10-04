file1="file1.txt"
file2="file2.txt"

if [[ -f "$file1" && -f "$file2" ]]; then

echo "Compressing $file1..."
gzip -k "$file1"

echo "Compressing $file2..."
gzip -k "$file2"

echo -e "\nCompression complete."
else

echo "One or both files do not exist."
fi
