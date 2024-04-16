<!-- PHP inside HTML -->

<html>
    <body>
        <p>
            This is a paragraph
        </p>

        <?php
        echo "<h1 style = "color:red;">Hello <br> World</h1>";
        print "Hello World";
        ?>
    </body>
</html>

<!-- HTML inside PHP -->

<?php
echo "<h1>Hello <br> World</h1>";
print "Hello World";
?>

<!-- JS inside PHP -->

<?php
    echo "<script>
            alert("JS inside PHP")
        </script>";
?>

<!-- Variables in PHP -->
<?php
    $a = "hi";  // String
    
    $a = true;  // Boolean
    
    $a = 1;     // Integer
    
    $a = 1.0;   // Float
    
    $a = [10, 20, "30"];  // Array (heterogeneous in nature)
    $a = array(10, 20, "30");   // Predefined function to create an array
    echo $a;
    echo $a[2]; // Accessing array elements
    // Three types of loop: for, while and do while
    foreach($a as $i)
    {
        echo "$i ";
    }

    foreach($a as $key => $val)
    {
        echo "$key: $val";
        echo $a[$key];
    }
    
    // Classes and objects in PHP
    class Test
    {
        private $a;
        public function f()
        {
            echo "Hello World";
        }
    }

    $t = new Test();    // RHS of = defines the datatype of a variable in PHP
    $t -> f();

    // NULL datatype
    $a;
    $a = NULL;
    echo var_dump($a);
?>