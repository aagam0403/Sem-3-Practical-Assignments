OBecho "Select an option:"
echo "1. Display troubleshooting details of network"
echo "2. Kill a process"
echo "3. View all mounts"
echo "4. Display full format listing"
echo "5. Exit"
read -p "Enter choice [1-5]: " choice
case $choice in
1) ifconfig;;
2) read -p "Enter PID to kill: " pid; kill $pid;;
3) mount;;
4) ls -l;;
5) exit;;
*) echo "Invalid choice!";;
esac
