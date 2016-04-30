<?php

function nextChar($a)
{
	if($a=="z")
		return "a";

	return ++$a;
}

$a="a";

for($i=1;$i<=26;$i++,$a++)
{
echo "<center>";
echo "Character :=>  ",$a,"<br />";
echo "Next char :=>",nextChar($a),"<br /><br />";
echo "</center>";
}

?>