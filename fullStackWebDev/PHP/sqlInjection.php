<?php
$username = $_POST["username"];
$password = $_POST["password"];

$conn = new mysqli("localhost", "root", "", "Graphic");
// $query="SELECT * FROM login where username="$username" AND password="$password";";
$query="SELECT * FROM login where username="$username" AND password="$password" OR ''='';"; // OR condition makes the whole statement true and sql database can be hacked and password can be bypassed
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


<!-- Protection from SQL Injection -->
<?php
    // Method 1 - Using escape string
    $username = $conn->real_escape_string($_POST["username"]);
    $password = $conn->real_escape_string($_POST["password"]);  // Creates an escaped string to protect from SQL Injection attacks
    // Original username: admin'OR'1'=1
    // Escaped username: admin\'OR\'1\'1=\'1


    // Method 2 - Prepare() method
    // A prepare statement is a feature used to execute the same or similar SQL statements repeatedly with high efficiency
    $conn = new mysqli("localhost", "root", "", "")
    $sql = $conn->prepare("SELECT * FROM users where user = ? and pass = ?");   // Creates a template query and is sent to the database, some values are left unspecified (?)
    // The database parses, compiles and performs optimisiation on the SQL statement template, and stores the result without executing it
    $sql->bind_param("ss", $username, $password);   // ss because both values are strings (others are integer(i), double(d), blob(b))
    $sql->execute();
    // At a later time, the application binds the values to the parameters and the database executes the statement. The app may execute the statement as many times as required by the user
    $conn.close();
?>

<!-- Using prepare method -->

<?php
    $conn = new mysqli();
    $stmt = $conn->prepare("INSERT INTO users (firstname, lastname, email) values (?, ?, ?)");
    $stmt->bind_param("sss", $firstname, $lastname, $email);
    // Prepare multiple users
    $firstname = "Rams";
    $lastname = "Kaps";
    $email = "rameshwari.kapoor09@gmail.com";
    $stmt->execute();

    $firstname = "Newbie";
    $lastname = "Bhanot";
    $email = "nileshbhanot18@gmail.com";
    $stmt->execute();

    $stmt.close();
    $conn.close();
?>