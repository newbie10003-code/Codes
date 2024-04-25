<?php
    $conn = new mysqli("localhost", "root", "");    // Datrabase name can be added in the last (optional)
    if ($conn -> connect_error) {
        die("Connection failed:", $conn -> connect_error);
    }
    echo "Connected Successfully";

    echo $conn -> query("Show tables");
    $conn->query("INSERT INTO STUDENT VALUES(1, "Newbie", 6, 9528029993)");
    $results = $conn->query("SELECT * from student");
    // 2 methods for fetching records - fetch_row(), fetch_assoc()

    if ($results) {
        while ($row = $results->fetch_row()) {
            echo $row[0]." ". $row[1]. " ". $row[2]. " "$row[3]."</br>"; 
        }
    }
    else {
        echo "Connection Establishment Failed.";
    }
?>