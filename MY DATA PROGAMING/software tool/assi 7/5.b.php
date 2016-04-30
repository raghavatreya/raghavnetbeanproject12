<?php
    $list=array("one","two","three");
	echo "<h1> printing array using foreach </h1><br /><br />";
	foreach($list as &$var)
	echo $var,"<br />";
	
	unset($var);
?>