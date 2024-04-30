<!-- Using MySQLi -->
<?php
    $conn = new mysqli("localhost", "root", "");    // Database name can be added in the last (optional)
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
        // Using assoc
        while ($row = $results->fetch_assoc()) {
            echo $row['roll']." ".$row['Name']." ".$row['Sem']." ".$row['MobNo']."</br>";
            echo $row[0]." ". $row[1]. " ". $row[2]. " "$row[3]."</br>"; 
        }
    }
    else {
        echo "Connection Establishment Failed.";
    }

    $conn.close();
?>

<!-- Using PDO -->

<?php
    $servername = "localhost";
    $username = "root";
    $password = "";

    try
    {
        $conn = new PDO("mysql:host=$servername; dbnmae=gehu, $username, $password");
        // Establish a new PDO connection
        $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
        // If an error occurs during database connection or query execution, it will throw an exception instead of returning an error code
        echo "Connected successfully";
    }
    catch(PDOException $e)
    {
        echo "Connection failed: ", $e->getMessage();
        // Displays the error msg
    }
?>
