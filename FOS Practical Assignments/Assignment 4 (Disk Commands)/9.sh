folder="myfolder"

if [[ -d "$folder" ]]; then

for file in "$folder"/*.gz; do

if [[ -f "$file" ]]; then
echo "Uncompressing $file...
gunzip -k "$file"
fi
