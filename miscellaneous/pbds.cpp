#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 

typedef long long LL;
  
#define ordered_set tree<LL, null_type,less_equal<LL>, rb_tree_tag,tree_order_statistics_node_update> 
