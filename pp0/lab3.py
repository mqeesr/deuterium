#1
attendance = 80
gpa = 2.6
tuition_paid = False

eligible_for_exam = attendance >= 75 and gpa >= 2.5 and tuition_paid
print(eligible_for_exam)

#2
income = 280000
age = 30
mortgage = False
deposit = 2100000
debt = False
guarantor = True

loan_approved = income > 300000 and age >= 25 or mortgage or deposit >= 2000000 or (not debt and guarantor)
print(loan_approved)

#3
age = 22
weight = 95
is_pro = False
medical_clearance = True
disqualified = False

competition_eligible = (18 <= age <= 35 and 60 <= weight <= 90) or is_pro or (medical_clearance and not disqualified)
print(competition_eligible)

#4
age = 17
theory_test_score = 85
driving_experience = 2
practical_test_score = 100

license_approved = age >= 18 and (theory_test_score >= 80 or (driving_experience >= 1 and practical_test_score == 100))
print(license_approved)

#5
vip_ticket = False
annual_pass = True
balance = 7000
blacklisted = False

vip_access = (vip_ticket or (annual_pass and balance >= 5000)) and not blacklisted
print(vip_access)

#6
has_pass = False
guest_list = True
has_id = True
security_threat = False

building_access = (has_pass or (guest_list and has_id)) and not security_threat
print(building_access)

#7
failed_attempts = 3
user_requested_lock = False
is_admin = False

account_locked = (failed_attempts >= 3 or user_requested_lock) and not is_admin
print(account_locked)

#8
order_amount = 19500
free_shipping_subscription = True
outside_delivery_zone = False

free_delivery = (order_amount > 20000 or free_shipping_subscription) and not outside_delivery_zone
print(free_delivery)

#9
temperature = -22
passengers = 15
is_government_flight = False

flight_canceled = (temperature < -20 or temperature > 40 or passengers < 10) and not is_government_flight
print(flight_canceled)

#10
wifi_connected = False
unlimited_mobile_data = True
battery_level = 55
power_saving_mode = False

update_download = (wifi_connected or unlimited_mobile_data) and battery_level >= 50 and not power_saving_mode
print(update_download)