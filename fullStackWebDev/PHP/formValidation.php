<!-- New user registration -->
<?php
$username = $_POST["username"];
$password = $_POST["password"];

$conn = new mysqli("localhost", "root", "", "Graphic");
$conn->query("INSERT INTO login(username, password) values($username, $password);");
$conn.close();
?>

<!-- Login -->
<?php
$username = $_POST["username"];
$password = $_POST["password"];

$conn = new mysqli("localhost", "root", "", "Graphic");
$query="SELECT * FROM login where username="$username" AND password="$password";";
$res = $conn->query($query);

if($res && $res->num_rows > 0)
{
    echo "Login successful";
}
else 
{
    echo "Login failed";
}

$conn.close();
?>