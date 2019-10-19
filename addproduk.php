<html>
<head>
    <title>Add Users</title>
</head>

<body>
    <a href="produk.php">Go to Home</a>
    <br/><br/>

    <form action="addproduk.php" method="post" name="form1">
        <table width="25%" border="0">
            <tr> 
                <td>id</td>
                <td><input type="text" name="id"></td>
            </tr>
            <tr> 
                <td>nama</td>
                <td><input type="text" name="name"></td>
            </tr>
            <td>stok</td>
                <td><input type="text" name="stok"></td>
            </tr>
            <tr> 
                <td>categories_id</td>
                <td><input type="text" name="categories_id"></td>
            </tr>
            
            <tr> 
                <td></td>
                <td><input type="submit" name="Submit" value="Add"></td>
            </tr>
        </table>
    </form>

    <?php

    // Check If form submitted, insert form data into users table.
    if(isset($_POST['Submit'])) {
        $id = $_POST['id'];
        $name = $_POST['name'];
        $stock = $_POST['stok'];
        $categories_id = $_POST['categories_id'];

        // include database connection file
        include_once("config.php");

        // Insert user data into table
        $result = mysqli_query($mysqli, "INSERT INTO products(id,name,stok,categories_id) VALUES('$id','$name','$stock','$categories_id')");

        // Show message when user added
        echo "User added successfully. <a href='produk.php'>View Users</a>";
    }
    ?>
</body>
</html>