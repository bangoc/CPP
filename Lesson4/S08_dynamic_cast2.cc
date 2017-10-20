// Có thể sảy ra tình huống đa nghĩa khi ép kiểu theo hướng kế thừa
// trong trường hợp lớp cơ sở ảo

void h1(Radio& r) {
	Storable* ps = &r;  // 1. Success[YES/NO] ??

	Component* pc = dynamic_cast<Component*>(ps);  // 2. ??
}

void h2(Storable* ps) {
	if (Component* pc = dynamic_cast<Component*>(ps)) {
		// we have a component
	} else {
		// it wasn't a component
	}
}