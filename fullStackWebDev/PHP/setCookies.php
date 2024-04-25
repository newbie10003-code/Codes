<?php
    // setcookie("user", "XYZ", time()+86400, "/", "example.com", true, true);  // Cookie is valid for one day. If we want to set time of yesterday we can write time()-86400
    setcookie("user", "Aman", time()+86400, "/", "example.com", true, true);    // Modifying cookie value
    if (isset($_COOKIE["user"])) {
        echo "Cookie is set";
    }
?>