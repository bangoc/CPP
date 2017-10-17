template<class T> class Handle {
	T∗ p;
public:
	Handle(T∗ pp) :p{pp} { }
	T& operator∗() { return ∗p; }
	~Handle() { delete p; }
};

Handle<int> h {new int{99}};  // Ok
Handle<int> h2;  // error: no default constructor
Handle<int> h3(h);  // error: no copy or move operations

// Ví dụ 2: Partially specified invariants
class Tic_tac_toe {
public:
	Tic_tac_toe(): pos(9) {}
	// always 9 positions
	Tic_tac_toe& operator=(const Tic_tac_toe& arg) {
		for(int i = 0; i<9; ++i)
		pos.at(i) = arg.pos.at(i);
		return ∗this;
	}
	// ... other operations ...
	enum State { empty, nought, cross };
	private:
	vector<State> pos;
};

// vs

class Tic_tac_toe {
public:
	// ... other operations ...
	enum State { empty, nought, cross };
private:
	vector<State> pos {Vector<State>(9)};
};
