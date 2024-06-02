<?php
    function getall_db()
    {
        $conn=connetdb();
        $stmt = $conn->prepare("SELECT id, firstname, lastname FROM MyGuests");
        $stmt->execute();
        $result = $stmt->setFetchMode(PDO::FETCH_ASSOC);
        $kq=$stmt->fetchAll();
        return $kq;
    }
?>