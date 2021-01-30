class Disjoint_Sets
{
public:
	int *parent;
	int *size;
	Disjoint_Sets(int n)
	{
		parent = new int[n];
		size = new int[n];
		for (int i = 0; i < n; i++)
		{
			parent[i] = i;
			size[i] = 1;
		}
	}
	void merge(int a, int b)
	{
		int parent_a = find(a);
		int parent_b = find(b);
		if (parent_a == parent_b)
			return;
		if (size[parent_a] < size[parent_b])
		{
			parent[parent_a] = parent_b;
			size[parent_b] += size[parent_a];
			size[parent_a] = 0;
		}
		else
		{
			parent[parent_b] = parent_a;
			size[parent_a] += size[parent_b];
			size[parent_b] = 0;
		}
	}
	int find(int a)
	{
		if (parent[a] == a)
		{
			return a;
		}
		parent[a] = find(parent[a]);
		return parent[a];
	}
};
