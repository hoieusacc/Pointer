# Đầu tiên, bạn cần cài đặt thư viện Selenium bằng lệnh sau:
# pip install selenium
import time
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.by import By

# Khởi tạo trình duyệt (ở đây sử dụng Chrome)
driver = webdriver.Chrome(executable_path="D:\Python\Code\chromedriver.exe")

# Mở trang web Facebook
driver.get('https://www.facebook.com')

# Tìm và điền thông tin đăng nhập
driver.find_element_by_id("name").send_keys("hoanghieu")
driver.find_element_by_id("pass").send_keys("hoanghieu")


# Click nút đăng nhập
login_button = driver.find_element_by_name('login')
login_button.click()

# Đợi một chút để trang web tải xong
driver.implicitly_wait(10)

# Thực hiện các thao tác khác trên trang web Facebook
# Ví dụ: viết status, tìm bạn bè, ...

# Đóng trình duyệt
