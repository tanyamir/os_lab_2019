#!/bin/bash

for i do
   sum=$(expr $sum + $i)
done
echo "Количество: $#"
echo "Среднее: $(expr $sum / $#)"
