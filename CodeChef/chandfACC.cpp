#ifndef _MSC_VER
// #define TEST_SPEED
#endif

#ifdef _MSC_VER
#define LOCAL
#define _CRT_SECURE_NO_WARNINGS
#define PRINT
#endif

#ifdef TEST_SPEED
#ifndef LOCAL
#define LOCAL
#endif
#endif

#ifdef LOCAL
#define DEBUG
#else
// #define DEBUG
#endif

#include <bits/stdc++.h>

#include <emmintrin.h>
#include <pmmintrin.h>
#include <xmmintrin.h>

using namespace std;

typedef long long int64;
typedef unsigned long long uint64;
#define POW2(x) (uint{1}<<(x))
#define CKBIT(s,x) (s&POW2(x))
template<class T> inline void ckmin(T &a,T b){a=min(a,b);}
template<class T> inline void ckmax(T &a,T b){a=max(a,b);}
template<class T> inline T sqr(T x){return x*x;}
#define SIZE(A) ((int)A.size())
#define LENGTH(A) ((int)A.length())
#define MP(A,B) make_pair(A,B)
#define PB(X) push_back(X)
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,a) for(int i=0;i<(a);++i)
#define ALL(A) A.begin(),A.end()
using ipair=pair<int,int>;
using uint=unsigned int;
using VI=vector<int>;
using VD=vector<double>;
using VVI=vector<VI>;
using int8=char;
using uint8=unsigned char;
VVI create(int n,int m) { return VVI(n,VI(m)); }
VVI create(int n,int m,int v) { return VVI(n,VI(m,v)); }
template<class T> void remove_last_val(vector<T>& a,T val) { for (int n=SIZE(a),i=n-1;i>=0;i--) if (a[i]==val) { FOR(j,i,n-1) a[j]=a[j+1]; a.pop_back(); return; } }
template<class T> void remove_at(vector<T>& a,int at) { for (int n=SIZE(a),i=at;i<n-1;i++) a[i]=a[i+1]; a.pop_back(); }
template<class T> void remove_at_fast(vector<T>& a,int at) { a[at]=a.back(); a.pop_back(); }
template<class T> void insert_val_at(vector<T>& a,T val,int at) { a.push_back(val); for (int i=SIZE(a)-1;i>at;--i) a[i]=a[i-1]; a[at]=val; }
template<class T> void copy_to(const vector<T>& src,vector<T>& dst) { dst.resize(src.size()); if (src.empty()) return; memcpy(&dst[0],&src[0],src.size()*sizeof(T)); }
void replace_in_VI(VI& a,int src,int dst) { for (int& p:a) if (p==src) p=dst; }
#define ROUND_UP32(n) (((n)+31)/32*32)

#ifdef _MSC_VER
#define ALIGN16(X) __declspec(align(16)) X
#else
#define ALIGN16(X) X  __attribute__ ((aligned (16)))
#endif

#ifdef _MSC_VER
inline int __builtin_clz(uint32_t x) {
    unsigned long ret;
    _BitScanReverse(&ret, x);
    return (int)(31 ^ ret);
}
inline int __builtin_ctz(uint32_t x) {
    unsigned long ret;
    _BitScanForward(&ret, x);
    return (int)ret;
}
#endif

#define ERROR(X) do{ int64 d=0; printf(X); printf("\nLINE = %d\n",__LINE__); assert(0); while (d!=(1LL<<60)) ++d; exit(0); } while (0);

#ifdef DEBUG
#define ASSERT(_Expression) (void)((!!(_Expression)||(__assert((#_Expression),__LINE__),0)));
void __assert(const char *_Message,const unsigned _Line)
{
    printf("ASSERTION FAILED\n");
    printf("Message = %ls\n",_Message);
    printf("Line = %u\n",_Line);
	assert(0);
	int t=0;
	printf("%d\n",7/t);
    exit(0);
}
#else
#define ASSERT(x) {}
#endif

template<class T> void COPY(T a[],const T b[],int n) { memcpy(a,b,n*sizeof(T)); }
template<class T> void SET(T a[],int val,int n) { memset(a,val,n*sizeof(T)); }
template<class T> int CMP(const T a[],const T b[],int n) { return memcmp(a,b,n*sizeof(T)); }

#define PACK(d,p) ((p)<<2|(d))
template<class T> inline void UNPACK(T s,T& d,T& p) { d=(s&3); p=(s>>2); }

enum
{
	LEFT=0,
	RIGHT=1,
	UP=2,
	DOWN=3,
};
#define is_horizontal(d) ((d)<2)
#define is_vertical(d) ((d)>=2)
#define is_increase(d) (!((d)&1))

#define is_in_range(r,m) ((m)>=(r.s) && (m)<=(r.t))

#ifdef LOCAL
uint64 rdtsc()
{
#ifdef _MSC_VER
    __asm { rdtsc }
#else
	return 0;
#endif
}

class Timer
{
public:
    static uint64 timeUsed[1024];
    int id;
    uint64 startTime;
    Timer(int id=0) { this->id=id; startTime=rdtsc(); }
    ~Timer() { timeUsed[id]+=(rdtsc()-startTime); }
	static void clear() { memset(timeUsed,0,sizeof(timeUsed)); }
    static void show()
    {
        for (int i=0;i<1024;i++) if (timeUsed[i]>0)
        {
            char str[100];
            sprintf(str,"%.6lf",(double)timeUsed[i]/(double)timeUsed[0]);
            string s=str;
            if (LENGTH(s)<15) s=" "+s;
            printf("%4d %s\n",i,s.c_str());
        }
    }
};
uint64 Timer::timeUsed[1024]={0};

class Counter
{
public:
    static int cnt[1024];
    Counter(int id=0) { cnt[id]++; }
    ~Counter() { }
	static void clear() { memset(cnt,0,sizeof(cnt)); }
    static void show() { for (int i=0;i<1024;i++) if (cnt[i]>0) printf("Counter %d %d\n",i,cnt[i]); }
};
int Counter::cnt[1024]={0};
#endif

#ifdef _MSC_VER
#define TIMES_PER_SEC (CLOCKS_PER_SEC*0.72)
#else
#define TIMES_PER_SEC (CLOCKS_PER_SEC)
#endif

const double TIMELIMIT_IN_SEC=10.0;
double get_absolute_time()
{
#ifdef _DEBUG
	return 0;
#endif
	return (double)clock()/TIMES_PER_SEC/TIMELIMIT_IN_SEC;
}
double starttime_acrush;
void starttime()
{
	starttime_acrush=get_absolute_time();
}
double gettime()
{
	return get_absolute_time()-starttime_acrush;
}
void remove_from_VI(VI& a,int key) 
{
	auto it=std::find(ALL(a),key);
	if (it==a.end()) return;
	a.erase(it);
}

namespace xorshf
{
static unsigned long x=123456789, y=362436069, z=521288629;
}

void xorshf96_reset()
{
	srand(time(NULL));
	const int D=rand()%(1<<20);
	xorshf::x=123456789^D;
	xorshf::y=362436069^D;
	xorshf::z=521288629^D;
}
unsigned long xorshf96()
{
	xorshf::x ^= xorshf::x << 16;
	xorshf::x ^= xorshf::x >> 5;
	xorshf::x ^= xorshf::x << 1;

	unsigned long t = xorshf::x;
	xorshf::x = xorshf::y;
	xorshf::y = xorshf::z;
	xorshf::z = t ^ xorshf::x ^ xorshf::y;

	return xorshf::z;
}
int random_int(int s,int t)
{
	if (s>=t) return s;
	return xorshf96()%(t-s+1)+s;
}

const int IO_BUFFER_SIZE=128*1024;
char io_buffer[IO_BUFFER_SIZE];
int io_buffer_pos=0;
int io_buffer_size=0;

inline char read_char()
{
	if (io_buffer_pos==io_buffer_size)
	{
		io_buffer_size=fread(io_buffer,sizeof(char),IO_BUFFER_SIZE,stdin);
		if (io_buffer_size==0) return 0;
		io_buffer_pos=0;
	}
	return io_buffer[io_buffer_pos++];
}
inline int read_int()
{
	char c;
	do{ c=read_char(); } while (c<'0');
	int n=0;
	for (;c>='0';c=read_char()) n=n*10+(c-'0');
	return n;
}

struct Params
{
	int boost_if_s_exceed=0;
	int boost_if_s_exceed_on_boundary=0;
	int boost_if_s_exceed_and_eliminate_row_col=0;

	int greedy_step=1500;
	int greedy_forward_step=1500;

	int code() const
	{
		return 0;
	}
};
Params params;

const int fast_mode=0;

const int LIMIT=512;

struct GenParam
{
	int min_val;
	int max_val;
};
GenParam gen_params[9]={
	{1,LIMIT/4},
	{1,LIMIT/2},
	{1,3*LIMIT/4},
	{1,LIMIT},
	{LIMIT/4,LIMIT/2},
	{LIMIT/4,3*LIMIT/4},
	{LIMIT/4,LIMIT},
	{LIMIT/2,3*LIMIT/4},
	{LIMIT/2,LIMIT}
};

const int MAXN=512+32;

int n;
int original_a[MAXN][MAXN];
int a[MAXN][MAXN];
VI best_results;
int data_type;

void mutate_params();
void compute_params()
{
	int min_a=a[0][0],max_a=a[0][0];
	REP(x,n) REP(y,n) { ckmin(min_a,a[x][y]); ckmax(max_a,a[x][y]); }
	int min_sqr_diff=100000000;
	REP(k,9)
	{
		int sqr_diff=sqr(min_a-gen_params[k].min_val)+sqr(max_a-gen_params[k].max_val);
		if (sqr_diff<min_sqr_diff) min_sqr_diff=sqr_diff,data_type=k;
	}
	// printf("data_type = %d\n",data_type);
	params=Params();

	if (data_type==0)
	{
		params.boost_if_s_exceed=LIMIT*0.85;
		params.boost_if_s_exceed_on_boundary=LIMIT*0.85;
		params.boost_if_s_exceed_and_eliminate_row_col=LIMIT*0.8;
		params.greedy_step=1500;
		params.greedy_forward_step=4;
	}
	else if (data_type==1)
	{
		params.boost_if_s_exceed=LIMIT*0.9;
		params.boost_if_s_exceed_on_boundary=LIMIT*0.775;
		params.boost_if_s_exceed_and_eliminate_row_col=LIMIT*0.5;
		params.greedy_step=4700;
		params.greedy_forward_step=14;
	}
	else if (data_type==2)
	{
		params.boost_if_s_exceed=LIMIT*0.9;
		params.boost_if_s_exceed_on_boundary=LIMIT*0.8375;
		params.boost_if_s_exceed_and_eliminate_row_col=LIMIT*0.5;
		params.greedy_step=3000;
		params.greedy_forward_step=10;
	}
	else if (data_type==3)
	{
		params.boost_if_s_exceed=LIMIT*0.9;
		params.boost_if_s_exceed_on_boundary=LIMIT*0.775;
		params.boost_if_s_exceed_and_eliminate_row_col=LIMIT*0.5;
		params.greedy_step=6000;
		params.greedy_forward_step=24;
	}
	else if (data_type==4)
	{
		params.boost_if_s_exceed=LIMIT*0.85;
		params.boost_if_s_exceed_on_boundary=LIMIT*0.675;
		params.boost_if_s_exceed_and_eliminate_row_col=LIMIT*0.5;
		params.greedy_step=5000;
		params.greedy_forward_step=13;
	}
	else if (data_type==5)
	{
		params.boost_if_s_exceed=LIMIT*1.0;
		params.boost_if_s_exceed_on_boundary=LIMIT*0.8;
		params.boost_if_s_exceed_and_eliminate_row_col=LIMIT*0.5;
		params.greedy_step=8000;
		params.greedy_forward_step=28;
	}
	else if (data_type==6) 
	{
		params.boost_if_s_exceed=LIMIT*0.9;
		params.boost_if_s_exceed_on_boundary=LIMIT*0.85;
		params.boost_if_s_exceed_and_eliminate_row_col=0;
		params.greedy_step=8500;
		params.greedy_forward_step=18;
	}
#ifdef TEST_SPEED
	params.greedy_forward_ratio*=1.5;
#endif
	mutate_params();
}

void update_results(const VI& results)
{
	if (best_results.empty() || SIZE(results)<SIZE(best_results)) best_results=results;
}

void readin()
{
	n=read_int();
	ASSERT(n>0 && n<MAXN);
	int input_f=read_int();
	ASSERT(input_f==LIMIT);
	REP(i,n) REP(j,n) a[i][j]=read_int();
	int dummy_k=read_int();
	ASSERT(dummy_k>=0);
}

void adjust_a()
{
	int min_a=a[0][0];
	REP(x,n) REP(y,n) ckmin(min_a,a[x][y]);
	REP(i,n) REP(j,n) if (a[i][j]+min_a>LIMIT) a[i][j]=LIMIT;
}

void prepare()
{
	xorshf96_reset();
	best_results={};
	compute_params();
	adjust_a();
	memcpy(original_a,a,sizeof(a));
}

namespace greedy {

struct Range
{
	int s,t;
};

struct Eval
{
	int score;
	int s;
	int last_k;
	int end_k;
	int block_val;
};
bool operator==(const Eval& a,const Eval& b) { return memcmp(&a,&b,sizeof(Eval))==0; }

struct MoveInfo
{
	int dir;
	int p;
	int s;
	int g_first_k;
	int g_last_k;
};
bool operator==(const MoveInfo& a,const MoveInfo& b) { return memcmp(&a,&b,sizeof(MoveInfo))==0; }

int transposed_a[MAXN][MAXN];

struct State
{
	Range rx[MAXN];
	Range ry[MAXN];
	Eval delta[4*MAXN];
};

const int MAXM=10000;

int que[LIMIT*4][LIMIT*4];
int que_size[LIMIT*4];
uint que_bucket[(LIMIT*4)>>5];
int offset=-1;
int pos[4*MAXN];

const int LIMIT_S=16;
int que2[LIMIT_S][MAXM];
int que2_size[LIMIT_S];

Range rx[MAXN],ry[MAXN];
Range g_rx[MAXN],g_ry[MAXN];
Eval delta[4*MAXN];
State initial_state;

void save_state(State& state)
{
	COPY(state.rx,rx,n);
	COPY(state.ry,ry,n);
	COPY(state.delta,delta,4*n);
}
void load_state(const State& state)
{
	COPY(rx,state.rx,n);
	COPY(ry,state.ry,n);
	COPY(delta,state.delta,4*n);
}

void shrink_internal(int p,Range& r,const Range g[])
{
	if (r.s>r.t) return;
	for (;r.s<=r.t && !is_in_range(g[r.s],p);++r.s);
	for (;r.s<=r.t && !is_in_range(g[r.t],p);--r.t);
}
void shrink(int is_horizontal,int p)
{
	if (is_horizontal)
		shrink_internal(p,rx[p],ry);
	else
		shrink_internal(p,ry[p],rx);
}

Range apply_use_eval(int dir,int p,const Eval& e)
{
	int z;
	switch (dir)
	{
	case LEFT: z=rx[p].s; rx[p].s=e.last_k+1; return {z,e.last_k};
	case RIGHT: z=rx[p].t; rx[p].t=e.last_k-1; return {e.last_k,z};
	case UP: z=ry[p].s; ry[p].s=e.last_k+1; return {z,e.last_k};
	case DOWN: z=ry[p].t; ry[p].t=e.last_k-1; return {e.last_k,z};
	}
}

Eval eval_internal(int p,Range r,const Range g[],int from_left,const int a[],int on_boundary)
{
	if (r.s>r.t) return Eval{-1};
	ASSERT(is_in_range(g[r.s],p));
	ASSERT(is_in_range(g[r.t],p));

	if (from_left)
	{
		if (a[r.s]>=LIMIT) return Eval{LIMIT*2+1,LIMIT,r.s,r.s,0};
		int s=a[r.s];
		int last_k=r.s;
		int max_val=(data_type==4?s:0);
		for (int k=r.s+1;k<=r.t;++k) if (is_in_range(g[k],p))
		{
			int val=a[k];
			int ds=s+val;
			if (ds>LIMIT)
			{
				if (data_type==4)
				{
					if (max_val+(data_type>=4?16:0)<val && ds-max_val<=LIMIT) return Eval{data_type<4?s:LIMIT,s,last_k,k,val};
					if (s>(on_boundary?params.boost_if_s_exceed_on_boundary:params.boost_if_s_exceed)) return Eval{LIMIT+s,s,last_k,k,val};
				}
				else
				{
					if (s>(on_boundary?params.boost_if_s_exceed_on_boundary:params.boost_if_s_exceed)) return Eval{LIMIT+s,s,last_k,k,val};
					if (max_val+(data_type>=4?16:0)<val && ds-max_val<=LIMIT) return Eval{data_type<4?s:LIMIT,s,last_k,k,val};
				}
				for (++k;k<=r.t && !is_in_range(g[k],p);++k);
				return Eval{(k>r.t || ds-max(max_val,val)+a[k]>LIMIT?LIMIT+s:LIMIT),s,last_k,k,val};
			}
			s=ds;
			last_k=k;
			max_val=max(max_val,val);
		}
		return Eval{LIMIT+(s>params.boost_if_s_exceed_and_eliminate_row_col?LIMIT:s),s,last_k,last_k,0};
	}
	else
	{
		if (a[r.t]>=LIMIT) return Eval{LIMIT*2+1,LIMIT,r.t,r.t,0};
		int s=a[r.t];
		int last_k=r.t;
		int max_val=(data_type==4?s:0);
		for (int k=r.t-1;k>=r.s;--k) if (is_in_range(g[k],p))
		{
			int val=a[k];
			int ds=s+val;
			if (ds>LIMIT)
			{
				if (data_type==4)
				{
					if (max_val+(data_type>=4?16:0)<val && ds-max_val<=LIMIT) return Eval{data_type<4?s:LIMIT,s,last_k,k,val};
					if (s>(on_boundary?params.boost_if_s_exceed_on_boundary:params.boost_if_s_exceed)) return Eval{LIMIT+s,s,last_k,k,val};
				}
				else
				{
					if (s>(on_boundary?params.boost_if_s_exceed_on_boundary:params.boost_if_s_exceed)) return Eval{LIMIT+s,s,last_k,k,val};
					if (max_val+(data_type>=4?16:0)<val && ds-max_val<=LIMIT) return Eval{data_type<4?s:LIMIT,s,last_k,k,val};
				}
				for (--k;k>=r.s && !is_in_range(g[k],p);--k);
				return Eval{(k<r.s || ds-max(max_val,val)+a[k]>LIMIT?LIMIT+s:LIMIT),s,last_k,k,val};
			}
			s=ds;
			last_k=k;
			max_val=max(max_val,val);
		}
		return Eval{LIMIT+(s>params.boost_if_s_exceed_and_eliminate_row_col?LIMIT:s),s,last_k,last_k,0};
	}
}
Eval eval(int dir,int p)
{
	if (is_horizontal(dir))
	{
		int on_boundary=(is_increase(dir)?g_rx[p].s==initial_state.rx[p].s:g_rx[p].t==initial_state.rx[p].t);
		return eval_internal(p,rx[p],ry,is_increase(dir),a[p],on_boundary);
	}
	else
	{
		int on_boundary=(is_increase(dir)?g_ry[p].s==initial_state.ry[p].s:g_ry[p].t==initial_state.ry[p].t);
		return eval_internal(p,ry[p],rx,is_increase(dir),transposed_a[p],on_boundary);
	}
}

int vx[MAXN],vy[MAXN];
void update_g()
{
	REP(i,n)
	{
		vx[i]=(int)(g_rx[i].s!=rx[i].s || g_rx[i].t!=rx[i].t);
		g_rx[i]=rx[i];
		vy[i]=(int)(g_ry[i].s!=ry[i].s || g_ry[i].t!=ry[i].t);
		g_ry[i]=ry[i];
	}
	REP(p,n)
	{
		if (vx[p]) delta[PACK(0,p)]=eval(0,p),delta[PACK(1,p)]=eval(1,p);
		if (vy[p]) delta[PACK(2,p)]=eval(2,p),delta[PACK(3,p)]=eval(3,p);
	}
}

void remove_from_que(int mid)
{
	int d=delta[mid].score;
	if (d<0) return;
	int &l=que_size[d];
	int* q=que[d];
	int x=pos[mid];
	ASSERT(q[x]==mid);
	if (x==l-1)
	{
		--l;
		if (l==0) que_bucket[d>>5]^=(1u<<(d&31));
	}
	else
		pos[q[x]=q[--l]]=x;
}
void add_to_que(int mid)
{
	int d=delta[mid].score;
	if (d<0) return;
	ckmax(offset,d>>5);
	que_bucket[d>>5]|=(1u<<(d&31));
	int &l=que_size[d];
	int* q=que[d];
	pos[mid]=l;
	q[l++]=mid;
}
void update_delta(int dir,int p)
{
	int mid=PACK(dir,p);
	Eval d=eval(dir,p);
	if (d.score==delta[mid].score) { delta[mid]=d; return; }
	remove_from_que(mid);
	delta[mid]=d;
	add_to_que(mid);
}

void refine_move_single_grid(int& dir,int& p)
{
	int x=-1,y=-1;
	if (is_horizontal(dir))
		x=p,y=(is_increase(dir)?rx[p].s:rx[p].t);
	else
		y=p,x=(is_increase(dir)?ry[p].s:ry[p].t);
	ASSERT(a[x][y]>0);
	int s0=delta[PACK(dir,p)].s;
	if (s0!=a[x][y]) return;
	int d1=(dir&2)^2;
	int d2=(d1^1);
	int wp=(x^y^p);
	const auto& e1=delta[PACK(d1,wp)];
	int s1=(e1.last_k>=p?e1.s:0);
	const auto& e2=delta[PACK(d2,wp)];
	int s2=(e2.last_k<=p?e2.s:0);
	if (s1>s0 || s2>s0) { dir=((s1>s2)?d1:d2); p=wp; return; }

	const Range& init_g_r=(is_horizontal(d1)?initial_state.rx[p]:initial_state.ry[p]);
	if (s1>0 && init_g_r.s!=p) { ASSERT(s1==a[x][y]); dir=d1; p=wp; return; }
	if (s2>0 && init_g_r.t!=p) { ASSERT(s2==a[x][y]); dir=d2; p=wp; return; }
}
void refine_move_boundary_grid(int& dir,int& p)
{
	const Range& init_r=(is_horizontal(dir)?initial_state.rx[p]:initial_state.ry[p]);
	const Range& current_r=(is_horizontal(dir)?rx[p]:ry[p]);
	const Range& g_r=(is_horizontal(dir)?g_rx[p]:g_ry[p]);
	const Eval& e=delta[PACK(dir,p)];
	if (is_increase(dir))
	{
		if (e.last_k==current_r.t)
		{
			int score=0;
			if (g_r.s==init_r.s) score=1;
			int new_score=0;
			if (g_r.t==init_r.t) new_score=1;
			if (e.s>0.4*LIMIT) { if (new_score>score) { dir^=1; return; } }
			else { if (new_score<score) { dir^=1; return; } }
		}
	}
	else
	{
		if (e.last_k==current_r.s)
		{
			int score=0;
			if (g_r.t==init_r.t) score=1;
			int new_score=0;
			if (g_r.s==init_r.s) new_score=1;
			if (e.s>0.4*LIMIT) { if (new_score>score) { dir^=1; return; } }
			else { if (new_score<score) { dir^=1; return; } }
		}
	}
}
void refine_move_cut_move(int& dir,int &p)
{
	if (data_type<4) return;
	const auto& e=delta[PACK(dir,p)];
	if (e.score==e.s) return;
	if (is_horizontal(dir))
	{
		int start_k=(is_increase(dir)?rx[p].s:rx[p].t);
		int delta_k=(is_increase(dir)?1:-1);
		int end_k=e.last_k+delta_k;
		for (int k=start_k;k!=end_k;k+=delta_k) if (is_in_range(ry[k],p))
		{
			int val=a[p][k];
			if (e.s-val+e.block_val>LIMIT) continue;
			int d1=2;
			const auto& e1=delta[PACK(d1,k)];
			if (e1.last_k>=p && e1.s>e.s) { dir=d1; p=k; return; }
			int d2=3;
			const auto& e2=delta[PACK(d2,k)];
			if (e2.last_k<=p && e2.s>e.s) { dir=d2; p=k; return; }
		}
	}
	else
	{
		int start_k=(is_increase(dir)?ry[p].s:ry[p].t);
		int delta_k=(is_increase(dir)?1:-1);
		int end_k=e.last_k+delta_k;
		for (int k=start_k;k!=end_k;k+=delta_k) if (is_in_range(rx[k],p))
		{
			int val=a[k][p];
			if (e.s-val+e.block_val>LIMIT) continue;
			int d1=0;
			const auto& e1=delta[PACK(d1,k)];
			if (e1.last_k>=p && e1.s>e.s) { dir=d1; p=k; return; }
			int d2=1;
			const auto& e2=delta[PACK(d2,k)];
			if (e2.last_k<=p && e2.s>e.s) { dir=d2; p=k; return; }
		}
	}
}

void refine_move(int& dir,int& p)
{
	refine_move_single_grid(dir,p);
	refine_move_boundary_grid(dir,p);
	// refine_move_cut_move(dir,p);
}

void collect_all_maxvals(VI& global_moves)
{
	if (gen_params[data_type].max_val!=LIMIT) return;
	int saved_num_moves=SIZE(global_moves);
	int vx[MAXN],vy[MAXN];
	SET(vx,0,n);
	SET(vy,0,n);
	REP(p,n)
	{
		Range& r=rx[p];
		const Range* g=ry;
		for (;r.s<=r.t;++r.s) if (is_in_range(g[r.s],p)) 
			if (a[p][r.s]>=LIMIT) vx[p]=vy[r.s]=1,global_moves.push_back(PACK(LEFT,p));
			else break;
		for (;r.s<=r.t;--r.t) if (is_in_range(g[r.t],p)) 
			if (a[p][r.t]>=LIMIT) vx[p]=vy[r.t]=1,global_moves.push_back(PACK(RIGHT,p));
			else break;
	}
	REP(p,n)
	{
		Range& r=ry[p];
		const Range* g=rx;
		for (;r.s<=r.t;++r.s) if (is_in_range(g[r.s],p)) 
			if (a[r.s][p]>=LIMIT) vx[r.s]=vy[p]=1,global_moves.push_back(PACK(UP,p));
			else break;
		for (;r.s<=r.t;--r.t) if (is_in_range(g[r.t],p)) 
			if (a[r.t][p]>=LIMIT) vx[r.t]=vy[p]=1,global_moves.push_back(PACK(DOWN,p));
			else break;
	}
	if (saved_num_moves==SIZE(global_moves)) return;
	COPY(g_rx,rx,n);
	COPY(g_ry,ry,n);
	save_state(initial_state);
	REP(p,n) REP(d,4) delta[PACK(d,p)]=eval(d,p);
	save_state(initial_state);
}

void setup_que()
{
	memset(que_size,0,sizeof(que_size));
	memset(que_bucket,0,sizeof(que_bucket));
	offset=-1;
	REP(i,n*4) add_to_que(i);
}

int vid1[MAXN][MAXN];
int counter1;
int pidx[MAXN][MAXN];
int last_midx[4][MAXN];

int g_deg[MAXM];
int g_link_buffer[MAXN*MAXN];
int *g_link[MAXM];
int g_in_deg[MAXM];
int is_removed[MAXM];

int ps_row[MAXN][MAXN];
int ps_col[MAXN][MAXN];

#define get_g_ref(dir,p) (is_horizontal(dir)?(is_increase(dir)?g_rx[p].s:g_rx[p].t):(is_increase(dir)?g_ry[p].s:g_ry[p].t))

void greedy()
{
#ifdef LOCAL
	Timer tt1(1);
	Counter cc1(1);
#endif
	memcpy(a,original_a,sizeof(a));
	REP(x,n) REP(y,n) transposed_a[x][y]=a[y][x];
	memset(ps_row,0,sizeof(ps_row));
	memset(ps_col,0,sizeof(ps_col));
	REP(x,n) REP(y,n) { ps_row[x][y+1]=ps_row[x][y]+a[x][y]; ps_col[x+1][y]=ps_col[x][y]+a[x][y]; }
	memset(vid1,0,sizeof(vid1));
	counter1=0;

	REP(i,n) rx[i]=ry[i]=g_rx[i]=g_ry[i]={0,n-1};
	save_state(initial_state);
	REP(dir,4) REP(p,n) delta[PACK(dir,p)]=eval(dir,p);

	VI global_moves;
	global_moves.reserve(n*n);

	int num_shrinked_steps=params.greedy_forward_step;

	for (int iteration=0;;iteration++)
	{
		save_state(initial_state);

		vector<MoveInfo> moves;
		moves.reserve(params.greedy_step);

		collect_all_maxvals(global_moves);

		update_g();
		setup_que();

		int is_all_cleared=0;
		while (SIZE(moves)<params.greedy_step)
		{
			for (;offset>=0 && que_bucket[offset]==0;--offset);
			if (offset<0) { is_all_cleared=1; break; }
			int s=(((offset<<5)|31)^__builtin_clz(que_bucket[offset]));
			ASSERT(que_size[s]>0);
			int dir,p;
			UNPACK(que[s][random_int(0,que_size[s]-1)],dir,p);
			refine_move(dir,p);

			const auto& e=delta[PACK(dir,p)];
			Range range=apply_use_eval(dir,p,e);
			ASSERT(range.s<=range.t);
			int& g_first_k=get_g_ref(dir,p);
			moves.push_back({dir,p,e.s,g_first_k,e.last_k});
			g_first_k=e.last_k+(is_increase(dir)?1:-1);

			shrink(is_horizontal(dir),p);
			update_delta(dir,p);
			int d0=(dir^1);
			int end_k0=delta[PACK(d0,p)].end_k;
			if (is_increase(d0)?end_k0>=range.s:end_k0<=range.t) update_delta(d0,p);
			int d1=(dir&2)^2;
			int d2=(d1^1);
			FOR(k,range.s,range.t+1)
			{
				const auto& r=(is_horizontal(d1)?rx[k]:ry[k]);
				if (!is_in_range(r,p)) continue;
				if (r.s==p || r.t==p) shrink(is_horizontal(d1),k);
				if (delta[PACK(d1,k)].end_k>=p) update_delta(d1,k);
				if (delta[PACK(d2,k)].end_k<=p) update_delta(d2,k);
			}
		}
		if (is_all_cleared)
		{
			int num_moves=SIZE(global_moves)+SIZE(moves);
			if (SIZE(best_results)==0 || num_moves<SIZE(best_results))
			{
				VI results;
				results=global_moves;
				results.reserve(num_moves);
				for (const MoveInfo& m:moves) results.push_back(PACK(m.dir,m.p));
				update_results(results);
			}
		}

		if (SIZE(moves)<=num_shrinked_steps) break;
		int m=SIZE(moves);
		ASSERT(m<=MAXM);
		++counter1;
		memset(last_midx,255,sizeof(last_midx));
		int* g_link_buffer_ptr=g_link_buffer;
		REP(i,m)
		{
			g_link[i]=g_link_buffer_ptr;
			MoveInfo& move=moves[i];
			int dir=move.dir;
			int p=move.p;
			int on_boundary=0;
			int first_k=move.g_first_k;
			int last_k=move.g_last_k;
			int& s=move.s;
			int* ap=(is_horizontal(dir)?a[p]:transposed_a[p]);
			const Range& rg=(is_horizontal(dir)?initial_state.rx[p]:initial_state.ry[p]);
			const Range* g2=(is_horizontal(dir)?initial_state.ry:initial_state.rx);

			if (last_midx[dir][p]>=0)
				*(g_link_buffer_ptr++)=last_midx[dir][p];
			else
				on_boundary=1;
			last_midx[dir][p]=i;

			int num_skipped=0;
			auto op=[&](int x0,int y0) 
			{
				if (vid1[x0][y0]==counter1) { int t=s+a[x0][y0]; if (t<=LIMIT) s=t,++num_skipped,moves[pidx[x0][y0]].s=0; else *(g_link_buffer_ptr++)=pidx[x0][y0]; }
				else { vid1[x0][y0]=counter1; pidx[x0][y0]=i; }
			};
			int original_s=s;
			int has_extra=0;
			switch (dir)
			{
			case LEFT: 
				for (int k=first_k;k<=last_k;k++) op(p,k);
				if (on_boundary) for (int k=last_k+1;k<=rg.t;k++) if (is_in_range(g2[k],p)) 
				{ 
					has_extra=((data_type==2?original_s:s)+ap[k]<=LIMIT); 
					// if (s+ap[k]<=LIMIT) { ASSERT(vid1[p][k]==counter1); moves[pidx[p][k]].s=0; }
					break; 
				}
				break;
			case RIGHT:
				for (int k=first_k;k>=last_k;k--) op(p,k);
				if (on_boundary) for (int k=last_k-1;k>=rg.s;k--) if (is_in_range(g2[k],p)) 
				{
					has_extra=((data_type==2?original_s:s)+ap[k]<=LIMIT);
					// if (s+ap[k]<=LIMIT) { ASSERT(vid1[p][k]==counter1); moves[pidx[p][k]].s=0; }
					break; 
				}
				break;
			case UP: 
				for (int k=first_k;k<=last_k;k++) op(k,p); 
				if (on_boundary) for (int k=last_k+1;k<=rg.t;k++) if (is_in_range(g2[k],p)) 
				{ 
					has_extra=((data_type==2?original_s:s)+ap[k]<=LIMIT); 
					// if (s+ap[k]<=LIMIT) { ASSERT(vid1[k][p]==counter1); moves[pidx[k][p]].s=0; }
					break; 
				}
				break;
			case DOWN:
				for (int k=first_k;k>=last_k;k--) op(k,p);
				if (on_boundary) for (int k=last_k-1;k>=rg.s;k--) if (is_in_range(g2[k],p)) 
				{
					has_extra=((data_type==2?original_s:s)+ap[k]<=LIMIT); 
					// if (s+ap[k]<=LIMIT) { ASSERT(vid1[k][p]==counter1); moves[pidx[k][p]].s=0; }
					break; 
				}
				break;
			}
			g_deg[i]=g_link_buffer_ptr-g_link[i];
			if (on_boundary)
			{
				if (data_type==0) s=1;
				else if (data_type==2) s=1+has_extra*4;
				else if (data_type==4) s=1+has_extra*4+num_skipped;
				else if (data_type==6) s=1+has_extra*4+num_skipped;
				else s=1+has_extra*4;
				if (data_type>=4 && g_deg[i]) ++s;
				ckmin(s,LIMIT_S-1);
			}
			else
				s=0;
		}
		int cnt_s[LIMIT_S];
		SET(cnt_s,0,LIMIT_S);
		REP(i,m) ++cnt_s[moves[i].s];
		int remain_cnt=m;
		int threshold_s=LIMIT_S-1;
		for (int es=0;threshold_s>0;--threshold_s) if ((es+=cnt_s[threshold_s])>=num_shrinked_steps) break;

		SET(g_in_deg,0,m);
		SET(is_removed,0,m);
		if (threshold_s>0)
		{
			for (int i=m-1;i>=0;i--) 
				if (moves[i].s>=threshold_s || g_in_deg[i])
				{
					int *p=g_link[i],*end_p=p+g_deg[i];
					for (;p!=end_p;++p) ++g_in_deg[*p];
				}
				else
					--remain_cnt,is_removed[i]=1;
		}
		else
		{
			for (int* p=g_link_buffer;p!=g_link_buffer_ptr;++p) ++g_in_deg[*p];
		}

		SET(que2_size,0,LIMIT_S);
		offset=LIMIT_S-1;
		auto add=[&](int i) 
		{ 
			int s=moves[i].s; 
			ckmin(offset,s);
			que2[s][que2_size[s]++]=i;
		};
		REP(i,m) if (!is_removed[i] && g_in_deg[i]==0) add(i);
		REP(shrinked_step,remain_cnt-num_shrinked_steps)
		{
			for (;que2_size[offset]==0;++offset);
			int s=offset;
			if (s>=threshold_s) swap(que2[s][random_int(0,que2_size[s]-1)],que2[s][que2_size[s]-1]);
			int key=que2[s][--que2_size[s]];
			is_removed[key]=1;
			int *p=g_link[key],*end_p=p+g_deg[key];
			for (;p!=end_p;++p) if ((--g_in_deg[*p])==0) add(*p);
		}
		load_state(initial_state);
		COPY(g_rx,rx,n);
		COPY(g_ry,ry,n);
		REP(i,m) if (!is_removed[i]) 
		{
			int dir=moves[i].dir;
			int p=moves[i].p;
			if (delta[PACK(dir,p)].score<0) continue;
			Range range=apply_use_eval(dir,p,delta[PACK(dir,p)]);
			global_moves.push_back(PACK(dir,p));
			ASSERT(range.s<=range.t);

			shrink(is_horizontal(dir),p);
			delta[PACK(dir,p)]=eval(dir,p);
			int d0=(dir^1);
			int end_k0=delta[PACK(d0,p)].end_k;
			if (is_increase(d0)?end_k0>=range.s:end_k0<=range.t) delta[PACK(d0,p)]=eval(d0,p);
			int d1=(dir&2)^2;
			int d2=(d1^1);
			FOR(k,range.s,range.t+1)
			{
				const auto& r=(is_horizontal(d1)?rx[k]:ry[k]);
				if (!is_in_range(r,p)) continue;
				if (r.s==p || r.t==p) shrink(is_horizontal(d1),k);
				if (delta[PACK(d1,k)].end_k>=p) delta[PACK(d1,k)]=eval(d1,k);
				if (delta[PACK(d2,k)].end_k<=p) delta[PACK(d2,k)]=eval(d2,k);
			}
		}
	}
}

void solve()
{
	greedy();
}

}  // namespace greedy

namespace super_sparse
{

struct Rect
{
	int x1,y1,x2,y2;
};
VI idx[MAXN][MAXN];
int b[MAXN][MAXN];

int find(const Rect& rect)
{
	if (rect.x1==rect.x2)
	{
		int x=rect.x1,y1=rect.y1,y2=rect.y2;
		ASSERT(y1<y2);
		FOR(y,y1+1,y2) if (b[x][y]) return -1;
		int ok=1;
		REP(y,y1) if (b[x][y]) { ok=0; break; }
		if (ok) return PACK(LEFT,x);
		ok=1;
		FOR(y,y2+1,n) if (b[x][y]) { ok=0; break; }
		if (ok) return PACK(RIGHT,x);
		return -1;
	}
	else
	{
		ASSERT(rect.y1==rect.y2);
		int y=rect.y1,x1=rect.x1,x2=rect.x2;
		ASSERT(x1<x2);
		FOR(x,x1+1,x2) if (b[x][y]) return -1;
		int ok=1;
		REP(x,x1) if (b[x][y]) { ok=0; break; }
		if (ok) return PACK(UP,y);
		ok=1;
		FOR(x,x2+1,n) if (b[x][y]) { ok=0; break; }
		if (ok) return PACK(DOWN,y);
		return -1;
	}
}

VVI q;
VI compute_independent_set(const vector<VI>& g)
{
	int n=SIZE(g);
	VI ret;
	VI visited(n);
	VI deg(n);
	REP(i,n) deg[i]=SIZE(g[i]);
	q.resize(n+1);
	REP(i,n+1) q[i].clear();
	REP(i,n) q[deg[i]].push_back(i);
	while (1)
	{
		int md=0;
		for (;md<=n;md++)
		{
			auto& p=q[md];
			for (;!p.empty();p.pop_back())
			{
				swap(p[random_int(0,SIZE(p)-1)],p.back());
				if (!visited[p.back()]) break;
			}
			if (!p.empty()) break;
		}
		if (md>n) break;
		int k=q[md].back();
		q[md].pop_back();
#ifdef DEBUG
		int actual_deg=0;
		for (int x:g[k]) if (!visited[x]) ++actual_deg;
		ASSERT(deg[k]==actual_deg);
#endif
		ret.push_back(k);
		visited[k]=1;
		VI dp;
		for (int x:g[k]) if (!visited[x]) visited[x]=1,dp.push_back(x);
		for (int x:dp) for (int y:g[x]) if (!visited[y]) q[--deg[y]].push_back(y); 
	}
	return ret;
}

void solve()
{
	int c=0;
	REP(x,n) REP(y,n) idx[x][y].clear();
	int num_pts=0;
	vector<Rect> w;
	REP(x,n) REP(y,n) if (a[x][y]<=LIMIT/2)
	{
		++num_pts;
		int x2=x+1;
		for (;x2<n && a[x2][y]>LIMIT/2;++x2);
		if (x2<n) { w.push_back({x,y,x2,y}); FOR(x0,x,x2+1) idx[x0][y].push_back(c); ++c; }
		int y2=y+1;
		for (;y2<n && a[x][y2]>LIMIT/2;++y2);
		if (y2<n) { w.push_back({x,y,x,y2}); FOR(y0,y,y2+1) idx[x][y0].push_back(c); ++c; }
	}
	set<ipair> edges;
	REP(x,n) REP(y,n) 
	{
		const VI& p=idx[x][y];
		REP(i,SIZE(p)) FOR(j,i+1,SIZE(p)) edges.insert(MP(p[i],p[j]));
	}
	vector<VI> g(c);
	for (ipair e:edges) { g[e.first].push_back(e.second); g[e.second].push_back(e.first); }
	VI largest_independent_set;
	while (gettime()<0.9)
	{
		VI s=compute_independent_set(g);
		if (SIZE(s)>SIZE(largest_independent_set)) largest_independent_set=s;
		if (fast_mode) break;
	}
	VI selected(c);
	for (int p:largest_independent_set) selected[p]=1;

	// printf("num_pts = %d   num_segs = %d   num_matched = %d\n",num_pts,c,SIZE(largest_independent_set));
	VI results;
	REP(x,n) REP(y,n) b[x][y]=1;
	REP(i,c) if (selected[i]) b[w[i].x1][w[i].y1]=b[w[i].x2][w[i].y2]=2;
	for (int iter=0;;iter++)
	{
		REP(x,n) for (int y=0;y<n && b[x][y]!=2;y++) if (b[x][y]) { b[x][y]=0; results.push_back(PACK(LEFT,x)); }
		REP(x,n) for (int y=n-1;y>=0 && b[x][y]!=2;y--) if (b[x][y]) { b[x][y]=0; results.push_back(PACK(RIGHT,x)); }
		REP(y,n) for (int x=0;x<n && b[x][y]!=2;x++) if (b[x][y]) { b[x][y]=0; results.push_back(PACK(UP,y)); }
		REP(y,n) for (int x=n-1;x>=0 && b[x][y]!=2;x--) if (b[x][y]) { b[x][y]=0; results.push_back(PACK(DOWN,y)); }
		int ok=1;
		REP(x,n) { REP(y,n) if (b[x][y]) { ok=0; break; } if (!ok) break; }
		if (ok) break;
		int findmore=0;
		REP(i,c) if (selected[i])
		{
			int cmd=find(w[i]);
			if (cmd<0) continue;
			findmore=1;
			results.push_back(cmd);
			ASSERT(b[w[i].x1][w[i].y1]==2);
			ASSERT(b[w[i].x2][w[i].y2]==2);
			b[w[i].x1][w[i].y1]=b[w[i].x2][w[i].y2]=0;
			selected[i]=0;
		}
		ASSERT(findmore);
	}
	update_results(results);
}

}  // namespace super_sparse

namespace old
{

int dp_prefix[MAXN][MAXN];

int ek(int n,int a[])
{
	int r=0,s=LIMIT;
	REP(i,n) if (a[i]>0)
		if (s+a[i]>LIMIT)
			++r,s=a[i];
		else
			s+=a[i];
	return r;
}
void ek2(int n,int a[],int cnt[])
{
	int r=0,s=LIMIT;
	REP(i,n)
	{
		cnt[i]=r;
		if (a[i]==0) continue;
		if (s+a[i]>LIMIT) ++r,s=a[i];
		else s+=a[i];
	}
	cnt[n]=r;
}

void solve()
{
	memcpy(a,original_a,sizeof(a));
	VI results;

	auto do_from_left=[&](int x)
	{
		int cnt=0,s=LIMIT;
		REP(i,n)
		{
			int c=a[x][i];
			if (c==0) continue;
			a[x][i]=0;
			if (s+c>LIMIT) ++cnt,s=c;
			else s+=c;
		}
		REP(i,cnt) results.push_back(PACK(LEFT,x));
	};
	auto do_from_up=[&](int y)
	{
		int cnt=0,s=LIMIT;
		REP(i,n)
		{
			int c=a[i][y];
			if (c==0) continue;
			a[i][y]=0;
			if (s+c>LIMIT) ++cnt,s=c;
			else s+=c;
		}
		REP(i,cnt) results.push_back(PACK(UP,y));
	};

	REP(y,n)
	{
		int t[MAXN];
		REP(x,n) t[x]=a[x][y];
		ek2(n,t,dp_prefix[y]);
	}
	int current_eval=0;
	REP(y,n) current_eval+=dp_prefix[y][n];

	ipair state[MAXN];
	REP(y,n) state[y]=MP(0,LIMIT);
	for (int x=n-1;x>=0;x--)
	{
		int new_eval=SIZE(results)+ek(n,a[x]);
		REP(y,n)
		{
			int x0=x-1;
			ipair w=state[y];
			for (;x0>=0 && w.second+a[x0][y]<=LIMIT;x0--) w.second+=a[x0][y];
			new_eval+=dp_prefix[y][x0+1]+w.first;
		}
		if (new_eval<current_eval)
		{
			current_eval=new_eval;
			do_from_left(x);
		}
		else
		{
			REP(y,n)
			{
				ipair& w=state[y];
				if (w.second+a[x][y]>LIMIT)
					++w.first,w.second=a[x][y];
				else
					w.second+=a[x][y];
			}
		}
	}
	REP(y,n) do_from_up(y);

	update_results(results);
}

}  // namespace old

void process()
{
#ifdef LOCAL
	Timer t0(0);
	Counter c0(0);
#endif
	prepare();
	if (0)
	{
		old::solve();
	}
	else if (data_type==7 || data_type==8)
	{
		super_sparse::solve();
	}
	else
	{
		greedy::solve();
	}
	ASSERT(!best_results.empty());
}

#ifdef LOCAL

#define CK(x,s) do { \
	if (!(x)) \
	{ \
		printf(s); mdebug(); exit(0); \
	}} while (0)

void mdebug()
{
	printf("CK ERROR\n");
}

namespace gen
{

int n;
int a[MAXN][MAXN];

void generate(int seed,int type)
{
	srand(seed);
	CK(type>=0 && type<9,"Type out of range.");
	::n=n=512;
	GenParam p=gen_params[type];
	auto rand_large=[&]() { return rand()%32768*32768+rand()%32768; };
	REP(i,n) REP(j,n) ::a[i][j]=a[i][j]=rand_large()%(p.max_val-p.min_val+1)+p.min_val;
}

int b[MAXN][MAXN];
int c[4][MAXN];

int eval(int a[])
{
	int r=0,s=LIMIT;
	REP(i,n) 
		if (s+a[i]>LIMIT)
			++r,s=a[i];
		else
			s+=a[i];
	return r;
}
int validate_and_get_score(const VI& results)
{
	REP(i,n) REP(j,n) b[i][j]=a[i][j];
	memset(c,0,sizeof(c));
	REP(i,SIZE(results)) 
	{
		int dir,p;
		UNPACK(results[i],dir,p);
		CK(dir==LEFT || dir==RIGHT || dir==UP || dir==DOWN,"Invalid dir");
		CK(p>=0 && p<n,"Invalid p");
		int cnt=0,s=0;
		FOR(k,c[dir][p],n)
		{
			int x=0,y=0;
			if (dir==LEFT) x=p,y=k;
			else if (dir==RIGHT) x=p,y=n-1-k;
			else if (dir==UP) x=k,y=p;
			else x=n-1-k,y=p;
			if (b[x][y]==0) continue;
			if (s+b[x][y]>LIMIT) break;
			if (s==0) c[dir][p]=k;
			s+=b[x][y];
			b[x][y]=0;
		}
		CK(s>0,"Op on empty row/col");
	}
	REP(i,n) REP(j,n) CK(b[i][j]==0,"Unfinished.");

	int score1=0;
	int score2=0;
	int t[MAXN];
	REP(i,n) 
	{
		score1+=eval(a[i]);
		REP(j,n) t[j]=a[j][i];
		score2+=eval(t);
	}
	return min(score1,score2)-SIZE(results);
}

}

#endif

struct Mutator
{
	string name;
	double delta;

	Mutator(string name,double delta) : name(name),delta(delta) {}

	void apply()
	{
		if (name=="boost_if_s_exceed") params.boost_if_s_exceed+=delta;
		if (name=="boost_if_s_exceed_and_eliminate_row_col") params.boost_if_s_exceed_and_eliminate_row_col+=delta;
		if (name=="boost_if_s_exceed_on_boundary") params.boost_if_s_exceed_on_boundary+=delta;
		if (name=="greedy_step") params.greedy_step+=delta;
		if (name=="greedy_forward_step") params.greedy_forward_step+=delta;
	}
	string str()
	{
		return "("+name+") "+to_string(delta);
	}
};
Mutator master_mutator("",0);

void mutate_params()
{
	master_mutator.apply();
}

int main()
{
#ifdef _MSC_VER
	freopen("input.txt","r",stdin);
#endif
#ifdef LOCAL
	if (0)
	{
		string directory;
		vector<Mutator> mutators;
		mutators.push_back(Mutator("",0));

		/*
		{
			ASSERT(directory==""); directory="a\\";
			string name="boost_if_s_exceed";
			vector<double> d{-0.3*LIMIT,-0.2*LIMIT,-0.1*LIMIT,0.1*LIMIT,0.2*LIMIT,0.3*LIMIT};
			for (double x:d) mutators.push_back(Mutator(name,x));
		}
		*/
		{
			ASSERT(directory==""); directory="a\\";
			string name="boost_if_s_exceed_on_boundary";
			// vector<double> d{0.375*LIMIT,0.5*LIMIT,0.625*LIMIT,0.75*LIMIT};
			vector<double> d{-0.0625*LIMIT,-0.125*LIMIT,+0.125*LIMIT,+0.0625*LIMIT};
			for (double x:d) mutators.push_back(Mutator(name,x));
		}
		/*
		{
			ASSERT(directory==""); directory="b\\";
			string name="boost_if_s_exceed_and_eliminate_row_col";
			// vector<double> d{ -0.2*LIMIT , -0.1*LIMIT , 0.1*LIMIT , 0.2*LIMIT };
			// vector<double> d{ -0.4*LIMIT , -0.3*LIMIT, -0.2*LIMIT , -0.1*LIMIT};
			vector<double> d{ 0.2*LIMIT , 0.3*LIMIT, 0.4*LIMIT};
			for (double x:d) mutators.push_back(Mutator(name,x));
		}
		*/
		/*
		{
			ASSERT(directory==""); directory="a\\";
			string name="greedy_step";
			vector<double> d{ -2000, -1500, -1000, -500, 500, 1000, 1500, 2000 };
			for (double x:d) mutators.push_back(Mutator(name,x));
		}
		*/

		vector<int> mutate_types{2,4,6};
		// vector<int> mutate_types{0};

		const int num_cases=20;

		for (int type:mutate_types)
		{
			printf("Mutate type = %d\n",type);

			string log_file=directory+"_run_"+to_string(type)+".log";
			string ret_file=directory+"_result_"+to_string(type)+".log";

			map<ipair,int> scores;
			{
				FILE *f=fopen(log_file.c_str(),"r");
				if (f)
				{
					int case_id,mutator_id,score;
					while (fscanf(f,"%d%d%d",&case_id,&mutator_id,&score)!=-1)
						scores[MP(case_id,mutator_id)]=score;
					fclose(f);
				}
			}
			
			map<int,int> sum_scores;
			REP(case_id,num_cases)
			{
				printf("  case_id = %d\n",case_id);
				REP(mutator_id,SIZE(mutators))
				{
					printf("    type = %d   case_id = %d   mutator_id = %d   ",type,case_id,mutator_id);
					if (!scores.count(MP(case_id,mutator_id)))
					{
						master_mutator=mutators[mutator_id];

						int seed=case_id*9+type;
						gen::generate(seed,type);		
						starttime();
						process();
						int score=gen::validate_and_get_score(best_results);

						scores[MP(case_id,mutator_id)]=score;
						FILE* f=fopen(log_file.c_str(),"a");
						fprintf(f,"%d %d %d\n",case_id,mutator_id,score);
						fclose(f);
					}
					printf("score = %d\n",scores[MP(case_id,mutator_id)]);
					sum_scores[mutator_id]+=scores[MP(case_id,mutator_id)];
				}
				vector<ipair> g;
				REP(mutator_id,SIZE(mutators))
					g.push_back(MP(-sum_scores[mutator_id]/(case_id+1),mutator_id));
				sort(ALL(g));
				REP(i,SIZE(g))
					printf("    %d %d %s\n",-g[i].first,g[i].second,mutators[g[i].second].str().c_str());
				printf("\n");

				{
					FILE* f=fopen(ret_file.c_str(),"w");
					REP(i,SIZE(g))
						fprintf(f,"    %d %d %s\n",-g[i].first,g[i].second,mutators[g[i].second].str().c_str());
					fclose(f);
				}
			}
		}
		return 0;
	}

	int case_study=-1;
	#ifdef TEST_SPEED
	{
		int64 m,n,q;
		cin>>m>>n>>q;
		if (m<=2000 && n<=2000)
			case_study=0;
		else if (m<=100000)
			case_study=2;
		else if (n<=2000 && q<=10)
			case_study=4;
		else
			case_study=6;
	}
	#endif

	VI case_study_types;
	// VI case_study_types{0,2,4,6,7,8};
	// VI case_study_types{0,2,4,6};
	// VI case_study_types{6};
	int num_cases=9;//180;
	int seed_base=123456789;
	printf("seed_base = %d\n",seed_base);
	double num_tested_cases=0;
	double total_tested_scores=0;
	vector<pair<double,double>> sum_cases(9);
	REP(case_id,num_cases)
	{
		if (case_study>=0 && case_id!=case_study) continue;

		int seed=case_id+seed_base;
		int type=case_id%9;
		if (case_study<0 && !case_study_types.empty() && std::find(ALL(case_study_types),type)==case_study_types.end()) continue;
		gen::generate(seed,type);
		
		starttime();
		double start_time=get_absolute_time();
#else
	{
		starttime();
		readin();
#endif
		process();
#ifdef LOCAL
		double end_time=get_absolute_time();
		printf("# %3d :   (%3d,%3d)  ",case_id,gen_params[type].min_val,gen_params[type].max_val);
		int score=gen::validate_and_get_score(best_results);
		if (score<=0)
		{
			printf("%d\nNon-positive score.\n",score);
			exit(0);
		}
		printf(" score = %-5d    T = %.2lf\n",score,end_time-start_time);
		total_tested_scores+=score;
		num_tested_cases+=1;
		sum_cases[type].first+=score;
		sum_cases[type].second+=1;
	}
#else
		printf("%d\n",SIZE(best_results));
		REP(i,SIZE(best_results))
		{
			int dir,p;
			UNPACK(best_results[i],dir,p);
			if (dir==LEFT) printf("L");
			else if (dir==RIGHT) printf("R");
			else if (dir==UP) printf("U");
			else printf("D");
			printf(" %d\n",p+1);
		}
	}
#endif
#ifdef LOCAL
	printf("Avg_score    = %.3lf\n",total_tested_scores/num_tested_cases);
	REP(i,9) if (sum_cases[i].second>0.5) printf("Avg_score[%d] = %.3lf\n",i,sum_cases[i].first/sum_cases[i].second);
	Timer::show();
	Counter::show();
#endif
	return 0;
}
