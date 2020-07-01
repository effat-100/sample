import pymysql
conn=pymysql.connect(host="localhost",user="root",passwd="",db="my_python")
myCursor=conn.cursor()
myCursor.execute("""CREATE TABLE names
    (
     id int primary key,
     name varchar(20)   
    )
""")
conn.commit()
conn.close()