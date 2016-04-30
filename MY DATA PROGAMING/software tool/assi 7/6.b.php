<html>
<head>
<title>Online PHP Script Execution</title>
</head>
<body>
<?php
  
  function writeName()
  {
    echo "  Narendra";  
  }
  
  function writeName2($firstname)
  {
     echo "My father's Name is ", $firstname," Modi";
  }
  
  echo "My name is ",writeName()," <br>";
  echo writeName2(" Damodardas ");
  
  
?>
</body>
</html>
