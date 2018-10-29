B1. Chạy câu lệnh sau để khởi động sever:

$ roslaunch lane_detect lane_detect.launch

B2. Bật app unity, điền đầy đủ thông tin và ấn Connect.

- Tên đội: Team1 
- IP: ws://127.0.0.1:9090 hoặc ip của máy chủ ROS_MASTER

B3. Chạy node xử lý ảnh.

$ rosrun lane_detect lane_detect _image_transport:=compressed

chú ý: để chạy được xe cần 3 topic. đổi tên topic theo tên đội và make lại bằng catkin_make
- /Team1_speed : topic truyền tốc độ từ thuật toán lên xe để chạy
- /Team1_steerAngle : Topic truyền góc lái cho xe
- /Team1_image : Topic cho các đội thi subcriber ảnh từ phần mềm mô phỏng
