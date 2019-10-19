<?php
// Create database connection using config file
include_once("config.php");

// Fetch all users data from database
$result = mysqli_query($mysqli, "SELECT * FROM products ORDER BY id DESC");
?>

<html>
<head>    
    <title>Homepage</title>
</head>

<body>
<a href="addproduk.php">Add New User</a><br/><br/>

    <table width='80%' border=1>

    <tr>
        <th>Id</th> <th>Name</th> <th>Stock</th> <th>Categories id</th> <th>update</th>
    </tr>
    <?php  
    while($user_data = mysqli_fetch_array($result)) {         
        echo "<tr>";
        echo "<td>".$user_data['id']."</td>";
        echo "<td>".$user_data['name']."</td>";
        echo "<td>".$user_data['stok']."</td>";
        echo "<td>".$user_data['categories_id']."</td>";
          
        echo "<td><a href='edit.php?id=$user_data[id]'>Edit</a> | <a href='delete.php?id=$user_data[id]'>Delete</a></td></tr>";        
    }
   
   
    ?>
    <br>
     <a href="index.php">back to categories</a>
    </table>
</body>
</html>
