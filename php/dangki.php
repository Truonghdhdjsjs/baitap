<?php
     session_start();
     ob_start();
   if(isset($_SESSION['login']))
   {
        echo ' ten dang nhap cua bạn la'. $_SESSION['login'][0];
        echo ' ten pas cua bạn la'. $_SESSION['login'][1];
        echo ' ten dia chi cua bạn la'. $_SESSION['login'][2];
        echo ' ten email cua bạn la'. $_SESSION['login'][3];
   }
?>