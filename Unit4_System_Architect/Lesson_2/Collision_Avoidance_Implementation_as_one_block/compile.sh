rm *.exe *.txt
gcc main.c Collision_Avoidance/collision_avoidance.c State/state.c -o app.exe
./app.exe >> Log.txt