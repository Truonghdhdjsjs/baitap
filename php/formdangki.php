<?php
    session_start();
    ob_start();
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Đăng kí</title>
</head>
<body>
    <form action="<?php $_SERVER['PHP_SELF'] ?>" method="post">
        <input type="text" name="txtname" id="txtname">
        <input type="password" name="txtpass" id="txtpass">
        <input type="text" name="txtaddress" id="txtaddress">
        <input type="email" name="txtemail" id="txtemail">
        <input type="submit" value="Nhap" name="Nhap">
    </form>
    <?php
        if(isset($_POST['Nhap'])&&($_POST['Nhap']))
        {
            $name=$_POST['txtname'];
            $pass=$_POST['txtpass'];
            $address=$_POST['txtaddress'];
            $email=$_POST['txtemail'];
            $login=array($name,$pass,$address,$email);
            // var_dump($login);
            $_SESSION['login']=$login;
            header('location:dangki.php');
        }
    ?>
</body>
</html>