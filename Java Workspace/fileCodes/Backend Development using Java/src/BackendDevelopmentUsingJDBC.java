import java.sql.*;
public class BackendDevelopmentUsingJDBC {
public static void main(String[] args) throws SQLException {
		Connection myConn = null;
		Statement myStmt = null;
		ResultSet myRs = null;
		try
		{
			myConn =DriverManager.getConnection("jdbc:mysql://localhost:3306/jdbcDatabase", "root" , "1234");					//	provides method which help us in connecting with database
				
			myStmt = myConn.createStatement();
			
			int a = myStmt.executeUpdate("INSERT INTO jdbc_table VALUES (10,'Mysql', 'uma', '2021-03-18')");
			myRs =myStmt.executeQuery("select * from jdbc_table");
			while (myRs.next())
			{
				System.out.println(myRs.getString("jdb_id") +", " + myRs.getString("title") + ", " + myRs.getString("author") + ", " + myRs.getString("submissionDate"));
			}
		}
		catch (Exception e)
		{
			e.printStackTrace();
		}
		finally
		{
			myRs.close();
		}
	}
}
