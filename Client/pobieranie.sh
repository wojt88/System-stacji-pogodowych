
#ponowne sprawdzenie liczby podlaczonych czujnikow
LICZBA_CZUJNIKOW=`cat /sys/bus/w1/devices/w1_bus_master1/w1_master_slave_count`
#echo "Czas rozpoczecia pomiaru: " `date +%H:%M:%S` >> czytanie.txt
echo "$LICZBA_CZUJNIKOW/" >> ile.txt
i=1

#id
while [ $i -le $LICZBA_CZUJNIKOW ]
do
	ID_CZUJNIKA=`awk NR==$i{print} /sys/bus/w1/devices/w1_bus_master1/w1_master_slaves`
	cat /sys/bus/w1/devices/$ID_CZUJNIKA/w1_slave > /tmp/pomiar
	CRC=`cat /tmp/pomiar | grep crc | awk '{ print $12 }'`
 
	WYNIK=`awk -F= '/t=/ {print $2/1000}' /tmp/pomiar`
	echo "$ID_CZUJNIKA $WYNIK C" >> dane.txt
	perl -pi -e 's/$/tekst/ if $. == 5' ile.txt
	i=$(($i+1))
done
#echo " \r\n\r\n" >>czytanie.txt
