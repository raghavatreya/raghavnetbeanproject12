<?php
        $a=$_POST["side1"];
        $b=$_POST["side2"];
        $c=$_POST["side3"];

    if($a==$b || $b==$c || $a==$c)
        echo "Isosceles <br />";
    
    if($a!=$b && $a!=$c)
        echo " Scalene <br />";

    if($a==$b && $a==$c)
        echo "Equilateral<br />";

    if(($a*$a === $b*$b +$c*$c ) || ($b*$b === $a*$a +$c*$c) || ($c*$c === $b*$b +$a*$a))
        echo "Right Angle<br />";
    
    

?>
        