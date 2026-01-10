int dataTypes(string type) {
	// Write your code here
	int size;
	if(type == "Integer") {
		size = 4;
	}
	else if(type == "Long") {
		size = 8;
	}
	else if(type == "Float") {
		size = 4;
	}
	else if(type == "Double") {
		size = 8;
	}
	else {
		size = 1;
	}
	return size;
}