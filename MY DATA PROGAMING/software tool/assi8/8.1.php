<html>
<body>
<?php
	echo "<center>";
	echo "<table style=\"border:1px solid black;border-collapse:collapse;width:270px;margin-top:100px;\">";
	for ($i=1; $i <=9 ; $i++) { // counting number of sequence
		echo "<tr>"; // // dynamiclly creating the row
		for ($j=1; $j <=9 ; $j++) { //dynamically creating the coloumn
			if(($i + $j)%2==0 )
			{
				echo "<td width=\"30px\" height=\"30px\">";
				echo "</td>";
			}

			else
			{
				echo "<td width=\"30px\" height=\"30px\" style=\"background-color:black;\">";
				echo "</td>";
			}
		}
		echo "</tr>";
	}

	echo "</table>";
	echo "<center>";
?>

</body>
</html>