<html>
<body>

<html>
	<body>
		<form action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>" method="POST">
			<table align="center" color="aqua">
			
			<tr>
				<td>Enter The String</td>
				<td><input type="text" name="a"></td>
			</tr>


			<tr>
				<td>Enter length of password</td>
				<td><input type="text" name="l"></td>
			</tr>
			
			<tr>
			<td><input type="submit"></td>
		    </tr>

		</table>
		</form>
	</body>

	<?php

function generatePassword($a,$l)
{
	$password=substr(str_shuffle($a), 0,$l);
	return $password;
}

if($_SERVER["REQUEST_METHOD"]=="POST")
{
	$a1=$_POST["a"];// passing argument to function
	$a2=$_POST["l"];// passing the length argument to function
	echo "<center>";
	echo "String is :  ", $a1,"<br />";
	echo "Length is :  ", $a2,"<br /><br />";
	echo "Password is :",generatePassword($a1,$a2);
	echo "</center>";
}

?>

</html>

</body>
</html>

