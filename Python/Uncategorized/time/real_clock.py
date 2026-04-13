import time
# days_passed = int(time.time() / 86400)

while True:
    current_day = time.time() % 86400
    current_hour = int(current_day / 3600)
    current_minute = int((current_day % 3600) / 60)
    current_sec = int((current_day % 3600) % 60)
    print(f"Current Time (GMT): {current_hour:02}:{current_minute:02}:{current_sec:02}")
    time.sleep(1)