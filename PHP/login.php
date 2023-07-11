<!DOCTYPE html>
<html>
<head>
    <title>Login Form</title>
</head>
<body>
    <h2>Login Form</h2>
    <?php
    if ($_SERVER['REQUEST_METHOD'] === 'POST') {
        $enteredUsername = $_POST['username'];
        $enteredPassword = $_POST['password'];

        $validUsername = 'cusat';
        $validPassword = 'cusat123';

        if ($enteredUsername == $validUsername && $enteredPassword == $validPassword) {
            echo 'Login successful!';
        } else {
            echo 'Invalid username or password.';
        }
    }
    ?>
    <form method="POST" action="<?php echo $_SERVER['PHP_SELF']; ?>">
        <label for="username">Username:</label>
        <input type="text" id="username" name="username" required><br><br>
        
        <label for="password">Password:</label>
        <input type="password" id="password" name="password" required><br><br>
        
        <input type="submit" value="Login">
    </form>
</body>
</html>
