echo "Select an option:"
echo "1. Ping a network"
echo "2. Retrieve DNS name servers"
echo "3. Check the mount version"
echo "4. Display all the running jobs"
echo "5. Display processes not associated with a terminal"
read -p "Enter choice [1-5]: " choice
case $choice in
1) read -p "Enter network to ping: " network; ping -c 4 $network;;
2) cat /etc/resolv.conf | grep nameserver;;
3) mount | grep -i version;;
4) jobs;;
5) ps -eo pid,comm | grep '^[^ ]* *[^ ]* *';;
*) echo "Invalid choice!";;
esac
