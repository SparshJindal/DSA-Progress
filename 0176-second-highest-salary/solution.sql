SELECT
(SELECT DISTINCT salary from Employee 
order by salary desc 
limit 1 offset 1 
)

as SecondHighestSalary
