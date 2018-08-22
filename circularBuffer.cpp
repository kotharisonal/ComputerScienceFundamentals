/*
The next big thing about circular buffers is that there is no “clean way” to differentiate the buffer full vs empty cases. This is because at both cases, head is equal to tail. There are a lot of ways/workarounds to deal with this but most of them introduce a lot of complexity and hinders readability. Here, I’m presenting a method that is fairly straightforward (IMHO) and readable.

In this method, we deliberately use only n-1 elements in the buffer. The last element is used (more like a flag) to differentiate between empty and full cases. By this logic,

if head is equal to tail: the buffer is empty
if (head + 1) is equal to tail -> the buffer is full
In essence, at every push, you check for is_buffer_full condition and every pop, you check for is_buffer_empty.
*/


typedef struct {
    uint8_t * const buffer;
    int head;
    int tail;
    const int maxlen;
} circ_bbuf_t;

int circ_bbuf_push(circ_bbuf_t *c, uint8_t data)
{
    int next;

    next = c->head + 1;  // next is where head will point to after this write.
    if (next >= c->maxlen)
        next = 0;

    if (next == c->tail)  // if the head + 1 == tail, circular buffer is full
        return -1;

    c->buffer[c->head] = data;  // Load data and then move
    c->head = next;             // head to next data offset.
    return 0;  // return success to indicate successful push.
}

int circ_bbuf_pop(circ_bbuf_t *c, uint8_t *data)
{
    int next;

    if (c->head == c->tail)  // if the head == tail, we don't have any data
        return -1;

    next = c->tail + 1;  // next is where tail will point to after this read.
    if(next >= c->maxlen)
        next = 0;

    *data = c->buffer[c->tail];  // Read data and then move
    c->tail = next;              // tail to next offset.
    return 0;  // return success to indicate successful push.
}
