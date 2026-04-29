Bakery Management System (C Language)

This is a console-based Bakery Management System developed in C language. It is designed for a bakery shop that also works as a coffee shop. The system provides different roles (Admin, Customer, and Baker) and each role has different features.

Main Modules

Admin Module (Password Protected)
Admin can:
Initialize the bakery menu (creates menu.txt)
Display the menu items
Add new items into the menu
Generate sales report using order history
Generate receipt for a specific customer
Count total orders placed by a customer

Admin Password: hiruu**

Customer Module
Customer can:
View menu
Place order (multiple items can be ordered)
Stock automatically decreases after placing an order

Orders are saved in order.txt

Baker Module (Password Protected)
Baker can manage and share recipes for:
Cakes
Coffee
Shakes
Pies

Baker can:

Initialize recipe files
Display recipes
Add new recipes

Baker Password: bakii

Files Used in This Project

menu.txt

Stores bakery menu items (ID, category, name, price, stock)

order.txt

Stores customer orders (customer name, item details, quantity)

temp_menu.txt

Temporary file used for updating stock after placing orders

cake_recipes.txt
coffee_recipes.txt
shake_recipes.txt
pie_recipes.txt

Stores recipes (recipe ID, recipe name, ingredients)

Key Features Implemented

Role based system (Admin / Customer / Baker)
Menu management
Order placement system
Automatic stock update
Receipt generation
Sales report generation
Recipe sharing system using file handling

Author
Hira Tauseef
