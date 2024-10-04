
compressed_file1="file1.txt.gz"
compressed_file2="file2.txt.gz"

if [[ -f "$compressed_file1" && -f "$compressed_file2" ]]; then

echo "Uncompressing $compressed_file1..."
gunzip -k "$compressed_file1"

echo "Uncompressing $compressed_file2..."
gunzip -k "$compressed_file2"

echo -e "\nUncompression complete."
else

echo "One or both compressed files do not exist."
fi
