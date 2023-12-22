#ifndef FLIP_FLOP_H
#define FLIP_FLOP_H

#define INIT_FLIP_FLOP(s,r,q,q_) \
	uint1_t s,r,q,q_; \
	BIT(&s)=0;BIT(&r)=0;BIT(&q)=1;BIT(&q_)=0;

#define FLIP_FLOP(s,r,q,q_) { \
	NOR(r,q_,q);NOR(s,q,q_); \
	NOR(r,q_,q);NOR(s,q,q_); \
}

#define RESET_FLIP_FLOP(s,r,q,q_) { \
	BIT(&r) = 1; FLIP_FLOP(r,s,q,q_); BIT(&r) = 0; \
}

#define SET_FLIP_FLOP(s,r,q,q_) { \
	BIT(&s) = 1; FLIP_FLOP(r,s,q,q_); BIT(&s) = 0; \
}

#endif
