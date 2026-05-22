# Write your MySQL query statement below
SELECT id
FROM (
    SELECT id,
           temperature,
           recordDate,
           LAG(temperature) OVER (ORDER BY recordDate) AS PREV_TEMP,
           /* 
           LAG() ka use previous row ki value nikalne ke liye hota hai.

           Yaha:
           - current row ki temperature value
           - previous row ki temperature value se compare hogi.

           PREV_TEMP ek new temporary column hai
           jisme previous row ka temperature store ho raha hai.
           */
           LAG(recordDate)  OVER (ORDER BY recordDate) AS PREV_DATE
           /*
           | id | recordDate | temperature |
           | -- | ---------- | ----------- |
           | 1  | 2000-12-14 | 3           |
           | 2  | 2000-12-16 | 5           |

ISS DATA SET HM DEKH SAKTE H KI RECORDDATE KE PREV VALUE OR NEXT VALUE ME 14 OR 16 TLB DONO CONSECUTIVE DATES NHI H THATS WHY DATEDIFF MUST BE 1 THATS WHY WE ARE FINDINNG LAG FOR RECORDDATE
           
           */

    FROM Weather
) T

/* 
T is alias.

Alias ka matlab:
temporary short name.

Yaha:
- inner query ek temporary table bana rahi hai
- us temporary table ka naam "T" rakha gaya hai.

SQL me derived table ko alias dena mandatory hota hai.
*/

WHERE T.temperature > T.PREV_TEMP
AND DATEDIFF(T.recordDate, T.PREV_DATE) = 1;
