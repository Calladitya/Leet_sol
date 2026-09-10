SELECT Employee.name, bonus.bonus
FROM Employee
LEFT JOIN bonus
    ON Employee.empid = bonus.empid
WHERE bonus.bonus < 1000
   or bonus.bonus IS NULL;
