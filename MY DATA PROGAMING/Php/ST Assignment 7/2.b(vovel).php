<html>
<head>
<title>Online PHP Script Execution</title>
</head>
<body>
<?php
  $var="this is string";
  $l=strlen($var);
  
  for($i=0;$i<$l;$i++)
  {
     switch($var[$i])
     {
       case ' ':
         break;
       
       case 'a':
         echo "a  : is vovel<br>";
         break;
         
       case 'e':
         echo "e  : is vovel<br>";
         break;
         
        case 'i':
         echo "i  : is vovel<br>";
         break;
         
        case 'i':
         echo "o  : is vovel<br>";
         break;
         
        case 'u':
         echo "u  : is vovel<br>";
         break;
        
        default:
          echo $var[$i]," : is consonant<br>";
          break;
       
     }
  }
  
?>
</body>
</html>
