# Write your MySQL query statement below
SELECT TEACHER_ID, COUNT(DISTINCT SUBJECT_ID) AS CNT FROM TEACHER GROUP BY TEACHER_ID;