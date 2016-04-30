<?php
   $s1=$_POST["sub1"];
   $s2=$_POST["sub2"];
   $s3=$_POST["sub3"];
   $s4=$_POST["sub4"];
   $s5=$_POST["sub5"];

   echo "Subject 1* : " , $s1,"<br />"; 
   echo "Subject 2* : " , $s2 ,"<br />"; 
   echo "Subject 3* : " , $s3 ,"<br />"; 
   echo "Subject 4* : " , $s4 ,"<br />"; 
   echo "Subject 5* : " , $s5 ,"<br />"; 

    echo "Total Marks Obtained : ", ($s1 + $s2 + $s3 + $s4+ $s5) ,"<br>";

    echo "Total marks : 500" ,"<br>";

    echo "Percentage",($s1 + $s2 + $s3 + $s4+ $s5)/5,"%";

?>