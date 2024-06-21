-- # Write your MySQL query statement below
SELECT ROUND(SUM(IF(A2.EVENT_DATE IS NULL,0,1))/COUNT(A1.PLAYER_ID),2) 
AS FRACTION
FROM (SELECT PLAYER_ID, MIN(EVENT_DATE) AS FIRST_LOGIN
FROM ACTIVITY GROUP BY PLAYER_ID) A1
LEFT JOIN ACTIVITY A2 
ON A1.PLAYER_ID=A2.PLAYER_ID AND A1.FIRST_LOGIN+INTERVAL 1 DAY=A2.EVENT_DATE