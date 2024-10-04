folder="myfolder"

if [[ -d "$folder" ]]; then

for file in "$folder"/*; do

if [[ -f "$file" ]]; then
echo "Compressing $file..."
gzip -k "$file"
fi
done
echo -e "\nCompression of all files in the folder is complete."
else
echo "Folder $folder does not exist."
fi
