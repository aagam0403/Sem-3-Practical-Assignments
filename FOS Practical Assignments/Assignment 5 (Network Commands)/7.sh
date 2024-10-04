echo "Select an option:"
echo "1. Display dynamic real-time view of running system"
echo "2. Display full format list of processes"
echo "3. Display your hostname on terminal"
echo "4. Display routing table"
read -p "Enter choice [1-4]: " choice
case $choice in
1) top;;
2) ps aux;;
3) hostname;;
4) route -n;;
*) echo "Invalid choice!";;
esac

