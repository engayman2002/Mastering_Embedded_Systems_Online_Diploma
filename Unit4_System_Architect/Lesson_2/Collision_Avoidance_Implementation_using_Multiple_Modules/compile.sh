rm *.exe *.txt
gcc main.c Collision_Avoidance/Collision_Avoidance.c DC_Motor/DC_Motor.c State/state.c US/US.c -o app.exe
./app.exe >> Log.txt