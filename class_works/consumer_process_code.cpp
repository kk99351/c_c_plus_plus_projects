item next_consumed;
while(TRUE)
{
    while(next_index == full_index);
    next_consumed = shared_buff[full_index];
    full_index = (full_index+1) mod BUFF_MAX;
}         