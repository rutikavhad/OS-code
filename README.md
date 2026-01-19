SQL Injection Detection using LSTM (PyTorch)
1. Project Overview
This project is based on SQL Injection Detection using Deep Learning. SQL Injection is a common web
security attack where malicious SQL queries are used to access or damage the database. In this project, we
use an LSTM (Long Short-Term Memory) model to classify SQL queries as Normal or SQL Injection.
2. Objective
The main objectives of this project are:
• To detect SQL Injection attacks automatically
• To understand how LSTM works on text data
• To classify SQL queries into safe or unsafe queries
• To build a simple deep learning security model
3. Technology Used
The following technologies are used in this project:
• Programming Language: Python
• Library: PyTorch
• Data Handling: Pandas
• Model Type: LSTM (Recurrent Neural Network)
• Platform: Linux / Windows
4. Dataset Description
The dataset file used in this project is:
sql_injection_dataset_large.csv
1Dataset Columns
ColumnDescription
querySQL query text
label1 = SQL Injection, 0 = Normal
Example:
SELECT * FROM users WHERE id=1,0
admin' OR '1'='1,1
5. Application Flow
1. Load SQL injection dataset
2. Create character-level vocabulary
3. Encode SQL queries into numerical form
4. Apply padding to fixed length
5. Pass data to LSTM model
6. Train the model using labeled data
7. Predict whether query is SQL Injection or not
6. Detailed Function Explanation
encode_query(query)
• Converts each character into a number
• Applies padding to make length = 40
• Returns encoded numerical list
SQLDataset Class
• Loads query and label from dataset
• Converts data into PyTorch tensors
• Used for batch training
SQLLSTM Model
• Embedding layer converts numbers into vectors
• LSTM layer learns sequence patterns
• Fully connected layer gives final output
2predict(query)
• Takes SQL query as input
• Converts query into tensor
• Applies trained model
• Prints prediction result
7. Output
The output of this project is a classification result.
Output shows:
• SQL Injection Query
• Normal Query
Example:
admin' OR '1'='1 -> SQL Injection
SELECT * FROM users WHERE id=1 -> Normal Query
8. How to Run the Project
1. Install required libraries:
pip install pandas torch
1. Place sql_injection_dataset_large.csv in project folder
2. Run the Python file:
python sql_lstm.py
1. Enter or test SQL queries using predict() function
9. Conclusion
In this project, we successfully implemented an LSTM-based model to detect SQL Injection attacks. This
model helps in identifying malicious SQL queries and improves application security. The project is useful for
understanding deep learning in cybersecurity.
310. Author
Name: Jadhav Swati Balasaheb
Project: SQL Injection Detection using LSTM
Purpose: Academic / Learning Project
4
