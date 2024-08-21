# -CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
# -BEGIN
# -  RETURN (
# -      # Write your MySQL query statement below.
#     SELECT IFNULL(
#     SELECT salary from Employee
#         ORDER by salary desc
#         LIMIT 1
#         OFFSET N-1),NULL
#     )
# -
# -  );
# -END
# CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
# BEGIN
# SET N = N-1;
#   RETURN (
#       SELECT DISTINCT(salary) from Employee order by salary DESC
#       LIMIT 1 OFFSET N
      
#   );
# END

# SELECT IFNULL((select DISTINCT salary 
# from employee
# order by salary desc
# limit 1 OFFSET 1), NULL) as SecondHighestSalary
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
SET N=N-1;
  RETURN (
    SELECT IFNULL(
      (SELECT DISTINCT salary 
       FROM Employee 
       ORDER BY salary DESC 
       LIMIT 1 OFFSET N), 
      NULL)
  );
END;
