
#include <iostream>
#include<climits>  
#include<iomanip>
#include<vector>

//================= MOSTAFA SADEGHI   9423067 =============

typedef long long int LLI;





int main()
{
    std::vector<std::vector<std::vector<int>>> full_arr;
	while(true){
        int n{};
        std::cin >> n;
        if (n == 0)
        {
            break;
        }
        std::vector<std::vector<int>> new_arr;
        for (int i = 0; i < n; ++i)
        {
            int all{};
            std::cin >> all;
            std::vector<int> arr;
            arr.push_back(all);
            for (int j = 1; j <= all; ++j)
             {
                int a{};
                std::cin >> a;
                arr.push_back(a);
             }
             new_arr.push_back(arr);
        }
        full_arr.push_back(new_arr);
    }
    std::vector<int> final_max;
    for(auto a:full_arr){
        int sum2{};
        for(size_t i = 0;i < a.size();i++){
            int sum{};
            std::vector<int> b{a[i]};
            int count{b[0]};
            sum += count;
            for (size_t j = 1; j < b.size(); ++j)
            {
                
                
                std::cout << count <<",";
                for (int k = 1; k <= count; ++k)
                {
                    int index{b[k]};
                    sum+= a[index-1][0];
                }
            }
            std::cout << "^^^^^^^^^" << std::endl;
            if (sum > sum2)
            {
                sum2 = sum;
            }
        }
        final_max.push_back(sum2);
    }

    for (auto a:final_max)
    {
        std::cout << a << std::endl;
    }
    
   
	return 0;
}




