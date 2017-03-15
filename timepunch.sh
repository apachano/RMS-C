today=$(date +%F)

if [ ! -d punchlogs ]
then
  mkdir punchlogs
fi
punchfile="punchlogs/tplog-$today"
touch "$punchfile"

read -p 'User: ' uid
read -p 'Pass: ' pin

echo "$uid | $(date +%T)" >> $punchfile


echo "cat the punch file"
cat $punchfile
echo "grep the punch file"
grep "$uid" $punchfile
