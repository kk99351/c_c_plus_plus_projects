item next_produced;
while(true)
{
    while((free_index+1) mod BUFF_MAX==full_index);
    shared_buff[free_item] = next_produced;
    free_index = (free_index +1) mod BUFF_MAX;
}