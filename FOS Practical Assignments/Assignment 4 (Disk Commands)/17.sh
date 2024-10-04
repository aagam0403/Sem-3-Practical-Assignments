echo "Finding files based on days:"

echo "Files modified 20 days ago:"
find . -type f -mtime 20

echo "Files accessed 30 days ago:"
find . -type f -atime 30

echo "Files modified more than 50 days ago and less than 75 days ago:"
find . -type f -mtime +50 -mtime -75

