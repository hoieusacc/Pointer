import tkinter as tk
from tkinter import messagebox

class BankAccount:
    def __init__(self):
        self.accounts = {}  # Lưu thông tin tài khoản (tên, số dư)

    def add_account(self, name, balance):
        self.accounts[name] = balance

    def get_balance(self, name):
        return self.accounts.get(name, 0)

class BankApp:
    def __init__(self, root):
        self.root = root
        self.root.title("Quản lý tài khoản ngân hàng")

        self.bank = BankAccount()

        self.name_label = tk.Label(root, text="Tên tài khoản:")
        self.name_label.pack()

        self.name_entry = tk.Entry(root)
        self.name_entry.pack()

        self.balance_label = tk.Label(root, text="Số dư:")
        self.balance_label.pack()

        self.balance_entry = tk.Entry(root)
        self.balance_entry.pack()

        self.add_button = tk.Button(root, text="Thêm tài khoản", command=self.add_account)
        self.add_button.pack()

        self.show_button = tk.Button(root, text="Hiển thị số dư", command=self.show_balance)
        self.show_button.pack()

    def add_account(self):
        name = self.name_entry.get()
        balance = float(self.balance_entry.get())
        self.bank.add_account(name, balance)
        messagebox.showinfo("Thông báo", f"Tài khoản {name} đã được thêm!")

    def show_balance(self):
        name = self.name_entry.get()
        balance = self.bank.get_balance(name)
        messagebox.showinfo("Số dư", f"Số dư của tài khoản {name}: {balance:.2f} đồng")

if __name__ == "__main__":
    root = tk.Tk()
    app = BankApp(root)
    root.mainloop()
