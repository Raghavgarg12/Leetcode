# Write your MySQL query statement below
-- SELECT DISTINCT PRODUCT_ID, IF(CHANGE_DATE<='2019-08-16',NEW_PRICE,10)
-- FROM PRODUCTS
-- SELECT * 
-- FROM PRODUCTS P1 RIGHT JOIN PRODUCTS P2
-- ON P1.PRODUCT_ID=P2.PRODUCT_ID AND P2.CHANGE_DATE <= '2019-08-16'
SELECT DISTINCT PRODUCT_ID, 10 AS PRICE
FROM PRODUCTS GROUP BY PRODUCT_ID HAVING MIN(CHANGE_DATE)>"2019-08-16"
UNION
SELECT PRODUCT_ID, NEW_PRICE FROM PRODUCTS
WHERE (PRODUCT_ID, CHANGE_DATE) 
IN (SELECT PRODUCT_ID, MAX(CHANGE_DATE) AS RECENT
FROM PRODUCTS WHERE CHANGE_DATE<="2019-08-16" GROUP BY PRODUCT_ID)
-- GROUP BY PRODUCT_ID HAVING MAX(CHANGE_DATE)<="2019-08-16"