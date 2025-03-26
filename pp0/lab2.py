#1
steaks = 5
pans = 2
half_time = 3
total_time = (steaks // pans * half_time) + (steaks % pans * half_time)
print(total_time)

steaks = 7
pans = 2
half_time = 3
total_time = (steaks // pans * half_time) + (steaks % pans * half_time)
print(total_time)

steaks = 9
pans = 2
half_time = 3
total_time = (steaks // pans * half_time) + (steaks % pans * half_time)
print(total_time)

#2
apples = 2.4
potatoes = 3.6
carrot = 1.8
onions = 2.2
people = 3

total = apples + potatoes + carrot + onions
kilo = total / people
print(int(kilo))

#3
consume = 7.5
total = 60
distance = (total / consume) * 100
print(int(distance))

#4
total = 100
exchange_rate = 475
recieve = (total * exchange_rate) * 0.15
print(int(recieve))

#5
total_pages = 450
per_day = 40
days = 5
left = total_pages - (days * per_day)
print(left)

#6
numbers = [15, 22, 38, 47]
product = numbers[0] * numbers[1]
arith_mean = sum(numbers) / len(numbers)
print(product)
print(arith_mean)

#7
price_of_one = 1800
discounts = {3: 0.1, 4: 0.15, 5: 0.2}

n3_total_cost = 3 * price_of_one * (1 - discounts[3])
n4_total_cost = 4 * price_of_one * (1 - discounts[4])
n5_total_cost = 5 * price_of_one * (1 - discounts[5])

print(n3_total_cost)
print(n4_total_cost)
print(n5_total_cost)


#8
total_cost = 15000 + 1200 + 3500
given = 200000
change = given - total_cost
print(change)

#9
height_cm = 182
feet = height_cm // 30.48
inches = (height_cm % 30.48) / 2.54
print(int(feet))
print(int(inches))

#10
day_c = 20
night_c = day_c * (1 - 0.12)
night_f = night_c * 9/5 + 32
print(int(night_f))

#11
fisrt_movie = 132
second_movie = 148
third_movie = 175
total = fisrt_movie + second_movie + third_movie
hours = total // 60
minutes = total % 60
print(hours)
print(minutes)

#12
pi = 3.14
radius = 9.5
circum = 2 * pi * radius
area = pi * radius **2
print(int(circum))
print(int(area))

#13
bought = 5
bought_sum = 3200
price_per_kg = bought_sum / bought
new_price = price_per_kg * 1.12
cost_7kg = new_price * 7
print(int(cost_7kg))

#14
distance1 = 150
time1 = 3
speed1 = distance1 / time1
speed2 = speed1 * 1.15
time2 = 120 / speed2
total_dist = distance1 + 120
total_time = time1 + time2
average_speed = total_dist / total_time
print(int(average_speed))

#15
total_piece = 4 * 28
pieces_sell = 5
friends = 7
remaining_piece = total_piece - pieces_sell
pieces_per_friend = remaining_piece // friends
print(pieces_per_friend)