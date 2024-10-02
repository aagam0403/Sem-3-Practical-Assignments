display_file_content()
{
FILE=$1
if [[ ! -f "$FILE" ]]; 
then
echo "File "$FILE" does not exist!"
exit 1
fi

echo "Displaying content of "$FILE":"
cat $FILE
}

read -p "Enter the file name: " FILENAME
display_file_content "$FILENAME"

