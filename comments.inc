<?php
	
	function setcomment($conn)
	{if(isset($_POST['commentSubmit']))
		{
			$NAME= $_POST['NAME'];
			$date= $_POST['date'];
			$MESSAGE= $_POST['MESSAGE'];
			
			$sql = "INSERT INTO comments(NAME,date,MESSAGE) values('$NAME','$date','$MESSAGE')";
			$result = mysqli_query($conn, $sql);
			
		}}
		
		
	function getcomment($conn)
	{$sql="SELECT * FROM comments";
	$result=mysqli_query($conn, $sql);
	while ($row =mysqli_fetch_assoc ($result))
	{
	echo "<div class='comment-box'>";
	echo 'Name: ';
	echo $row['NAME']."<br>";
	echo $row['MESSAGE']."<br>";
    echo $row['date'];	
	
	echo "</div>";
	}}
?>