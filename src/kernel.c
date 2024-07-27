void main()
{
    char *video_memory = (char *)0xb8000;

    video_memory[0] = 'H';
    video_memory[1] = 0x07;
    video_memory[3] = 'E';
    video_memory[4] = 0x07;
    video_memory[5] = 'L';
    video_memory[6] = 0x07;
    video_memory[7] = 'L';
    video_memory[8] = 0x07;
    video_memory[9] = 'O';
    video_memory[10] = 0x07;
    video_memory[11] = ',';
    video_memory[12] = 0x07;
    video_memory[13] = ' ';
    video_memory[14] = 0x07;
    video_memory[15] = 'W';
    video_memory[16] = 0x07;
    video_memory[17] = 'O';
    video_memory[18] = 0x07;
    video_memory[19] = 'R';
    video_memory[20] = 0x07;
    video_memory[21] = 'L';
    video_memory[22] = 0x07;
    video_memory[23] = 'D';
    video_memory[24] = 0x07;
    video_memory[25] = '!';
}