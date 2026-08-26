WITH NumberSequence AS (
    SELECT num,
    LEAD(num , 1) OVER (ORDER BY id) AS next_num,
    LEAD(num , 2) OVER (ORDER BY id) AS next_next_num
    FROM Logs
)

SELECT DISTINCT num as ConsecutiveNums
FROM NumberSequence WHERE
num = next_num AND next_num = next_next_num ;
