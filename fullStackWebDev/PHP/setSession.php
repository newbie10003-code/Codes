<?php
    session_start();
    $_SESSION["user"] = "Aman";
    if (isset($_SESSION["user"])) {
        echo "Session is created";
    }
?>