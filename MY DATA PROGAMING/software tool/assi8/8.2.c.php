<?php

$s="This is my home";
echo "<center>";
echo "String is : ",$s,"<br>";
echo "String for inserting :","own","<br><br>";
echo "</center>";
echo substr_replace($s, "own ", 11,0);

?>