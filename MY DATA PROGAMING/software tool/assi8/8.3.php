<?php

session_start();
$_SESSION["width"]=10;
$_SESSION["height"]=2;


echo "Height : ",$_SESSION["height"],"<br />";
echo "Width  : ",$_SESSION["width"],"<br />";

print_r($_SESSION);

echo "<br />Area is : ",($_SESSION["height"])*($_SESSION["width"]);


?>