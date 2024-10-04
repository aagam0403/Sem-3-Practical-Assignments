echo -e "\nDisk usage in human-readable format:"
df -h

echo -e "\nDisk usage in Kilobytes (KB):"
df -k

echo -e "\nDisk usage in Megabytes (MB):"
df -m

echo -e "\nDisk usage in Gigabytes (GB):"
df -BG

echo -e "\nFile system types:"
df -T

echo -e "\n/home file system information in human-readable format:"
df -h /home
