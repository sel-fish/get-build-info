# get-build-info
get build info for further purpose

# output format
Build time: Apr 13 2016 15:54:45  
Build node: fenqideMacBook-Pro.local Darwin-15.4.0:/Users/fenqi/Code/fun/get-build-info  
Build code: https://github.com/sel-fish/get-build-info.git@6cc0c6eadf47c07a4d1f9dab0b9bb0fab57f6c1e  
Build tool: AppleClang@7.0.2.7000181  

# how to get git info
revison=`git log | head -n 1 | cut  -f 2 -d ' '`
repos=`git remote -v |head -1 |cut -d ' ' -f 1 |cut -f 2`
git_info=$repos@$revison

# how to build $git_info into the binary
g++ -DGIT_INFO="\"$git_info\"" -o test test.cpp
