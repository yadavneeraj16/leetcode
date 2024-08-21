# Write your MySQL query statement below
# SELECT IFNULL(SELECT salary
# FROM Employee
# ORDER BY salary desc
# LIMIT 1
# OFFSET 1)
# as SecondHighestSalary;

SELECT IFNULL((select DISTINCT salary 
from employee
order by salary desc
limit 1 OFFSET 1), NULL) as SecondHighestSalary