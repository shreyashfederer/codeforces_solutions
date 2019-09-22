int main()
{
	ll n;
	cin>>n;
	ll i,a;
	set<ll> s;
	for(i=0;i<n;i++){
		cin>>a;
		if(a)s.insert(a);
	}
	cout<<s.size()<<endl;
}
