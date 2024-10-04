archive_name="compressed_directory.tar.gz"

echo "Compressing the current directory and its subdirectories..."

tar -czf "$archive_name" .
echo -e "\nCompression complete. Archive created: $archive_name"
