## Useful commands

### Run PX4 simulation 

`make px4_sitl gz_x500`

### Micro XRCE-DDS Agent (ROS messages)
`MicroXRCEAgent udp4 -p 8888; bash`

### Script to run multiple drones

`cd PX4-Autopilot`

`gnome-terminal --tab -- sh -c "PX4_SYS_AUTOSTART=4001 PX4_GZ_MODEL_POSE="0,0" PX4_GZ_MODEL=x500 ./build/px4_sitl_default/bin/px4 -i 1; bash"`

`sleep 10`

`gnome-terminal --tab -- sh -c "PX4_SYS_AUTOSTART=4001 PX4_GZ_MODEL_POSE="0,1" PX4_GZ_MODEL=x500 ./build/px4_sitl_default/bin/px4 -i 2; bash"`

`sleep 10`

`gnome-terminal --tab -- sh -c "PX4_SYS_AUTOSTART=4001 PX4_GZ_MODEL_POSE="0,2" PX4_GZ_MODEL=x500 ./build/px4_sitl_default/bin/px4 -i 3; bash"`

`sleep 10`

`gnome-terminal --tab -- sh -c "MicroXRCEAgent udp4 -p 8888; bash"`