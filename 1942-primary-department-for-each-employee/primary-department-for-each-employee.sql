# Write your MySQL query statement below
-- SELECT E1.EMPLOYEE_ID, IF(COUNT(E1.EMPLOYEE_ID)=1,E1.DEPARTMENT_ID,
-- (SELECT PRIMARY_FLAG FROM EMPLOYEE WHERE PRIMARY_FLAG='Y'))
-- FROM EMPLOYEE E1 LEFT JOIN EMPLOYEE E2 ON E1.EMPLOYEE_ID=E2.EMPLOYEE_ID
-- GROUP BY EMPLOYEE_ID
SELECT EMPLOYEE_ID, DEPARTMENT_ID FROM EMPLOYEE WHERE PRIMARY_FLAG='Y'
OR EMPLOYEE_ID IN (SELECT EMPLOYEE_ID FROM EMPLOYEE GROUP BY EMPLOYEE_ID 
HAVING COUNT(EMPLOYEE_ID)=1)