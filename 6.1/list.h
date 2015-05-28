//------------------------------------------------
//  class List
//      arbitrary size Lists
//      permits insertion and removal
//      only from the front of the List
// List example from course booklet - page 16-17
//------------------------------------------------
class List
{
	protected:
		//--------------------------------------------
		//  inner class link
		//  a single element for the linked List
		//--------------------------------------------
		class Link
		{
		public:
			Link( int linkValue, Link * nextPtr); // constructor
			Link (const Link &);                  // Copy constructor

			// data areas
			int value;
			Link * next;
		};	//end of class Link

	public: // List
		// constructors
		List();              // constructor
		List(const List&);	 // Copy constructor
		~List();

		// operations
		void add( int value);
		int firstElement() const;
		bool search(const int &value) const;
		bool isEmpty() const;
		void removeFirst();
		void clear();

	protected:
		// data field
		Link* head;
};

//=========================================================
// End of list.h
//=========================================================


//RoundList

class RoundList: public List {
public:
	void addToEnd(int val);
	bool search(int n);
};
