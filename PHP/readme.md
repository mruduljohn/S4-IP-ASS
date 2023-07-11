10/07/2023

1 -  $conn  =  mysql_connect(server , username , password)       SYNTAX OF DBMS CONNECTION
2 -  mysql_select_db("db_name",$conn)
3 -  $query = "insert into table_name values("Value1","Value2","Value3")"
4 -  $result = mysql_query($query)
5 -  mysql_fetch_array($result)  /// for fetching row