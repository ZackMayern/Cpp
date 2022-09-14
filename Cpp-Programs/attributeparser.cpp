/*The first line consists of two space separated integers, N and Q. N specifies the number of lines in the HRML source program. Q specifies the number of queries.

The following N lines consist of either an opening tag with zero or more attributes or a closing tag. There is a space after the tag-name, attribute-name, '=' and value.
There is no space after the last value. If there are no attributes there is no space after tag name.

Q queries follow. Each query consists of string that references an attribute in the source program.More formally, each query is of the form tagi1.tagi2.tagi3...tagim~att - name 
where m>=1 and tagi1.tagi2.tagi3...tagim are valid tags in the input.*/

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,q,i;
    cin>>n>>q;
    
    string temp;
    vector<string> hrml;
    vector<string> query;
    cin.ignore();
    
    for(i=0; i<n; i++){
        getline(cin, temp);
        hrml.push_back(temp);
    }   
    
    for(i=0; i<q; i++){
        getline(cin, temp);
        query.push_back(temp);
    }
    
    map<string, string> m;
    vector<string> tag;
        
    for(i=0;i<n;i++)
{
    temp=hrml[i];
    temp.erase(remove(temp.begin(), temp.end(), '\"' ),temp.end());
    temp.erase(remove(temp.begin(), temp.end(), '>' ),temp.end());
    if(temp.substr(0,2)=="</")
    {
        tag.pop_back();
    }
    else
    {
        stringstream ss;
        ss.str("");
        ss<<temp;
        string t1,p1,v1;
        char ch;
        ss>>ch>>t1>>p1>>ch>>v1;
        string temp1="";
        if(tag.size()>0)
        {
            temp1=*tag.rbegin();
            temp1=temp1+"."+t1;
        }
        else
            temp1=t1;
        tag.push_back(temp1);
        m[*tag.rbegin()+"~"+p1]=v1;
        while(ss)
        {
            ss>>p1>>ch>>v1;
            m[*tag.rbegin()+"~"+p1]=v1;
        }
    }
}
for(i=0;i<q;i++){
    if (m.find(query[i]) == m.end())
        cout << "Not Found!\n";
    else
        cout<<m[query[i]]<<endl;
}
return 0;
}
