## Introduction
- Reference : https://cppreference.com
- How to use ? : https://www.learncpp.com/cpp-tutorial/using-a-language-reference/

```cpp
#include <iostream>

int main(){

	std::cout << "Hello World" << std::endl;
	return 0;
}
```

# The "C++ learning suggestion macro"

## [www.learncpp.com](http://www.learncpp.com/)

is the best free tutorial out there. ([reason](https://www.reddit.com/user/IyeOnline/comments/157f10z/c_youtube_video_tutorials/juvgjkc/)) It covers everything from the absolute basics to advanced topics. It follows modern and best practice guidelines.

[www.studyplan.dev/cpp](http://www.studyplan.dev/cpp) is a (very) close second, even surpassing learncpp in the breath of topics covered. It covers quite a few things that learncpp does not, but does not have just as much detail/in depth explanations on the shared parts. Don't be fooled by the somewhat strange AI generated images. The author just had a little fun. Just ignore them.

[www.hackingcpp.com](http://www.hackingcpp.com/) has good, quick overviews/cheat sheets. Especially the quick info-graphics can be really helpful. TBF, cppreference could use those. But its coverage is not complete or in depth enough to be used as a good tutorial - which its not really meant to be either. The last update apparently was in 2023.

---

## [www.cppreference.com](http://www.cppreference.com/)

is the best language reference out there. Keep in mind that a language reference is not the same as a tutorial.

See [here for a tutorial on how to use cppreference effectively](https://www.learncpp.com/cpp-tutorial/using-a-language-reference/).

---

**Stay away from**

- cplusplus.com ([reason](https://www.reddit.com/r/cpp_questions/comments/hjdaox/is_cpluspluscom_reliable_are_there_any/fwljj4w/))
    
- w3schools ([reason](https://www.reddit.com/r/cpp_questions/comments/slvj8m/best_way_to_learn_c/hwczl34/))
    
- geeks-for-geeks ([reason](https://www.reddit.com/r/cpp_questions/comments/p6305k/ways_to_learn_cpp/h9axoo7/))
    
- Tutorialspoint ([reason](https://www.reddit.com/user/IyeOnline/comments/10a335s/assesment_of_the_tutorialspoint_c_tutorial/))
    
- educba.com ([reason](https://www.reddit.com/r/cpp_questions/comments/rz5fkl/why_do_functions_pertaining_to_strings_on_visual/hrt7ez8/))
    
- thinkcpp ([reason](https://www.reddit.com/r/cpp_questions/comments/11kxbde/which_of_these_two_learning_sites_should_i_use/jb9f99v/))
    
- javaTpoint ([reason](https://www.reddit.com/user/IyeOnline/comments/17g3e7h/review_of_javatpoints_c_tutorial/))
    
- studyfied (not even a tutorial, just a collection of code by random people)
    
- codevisionz ([reason](https://www.reddit.com/user/IyeOnline/comments/17g4ojd/review_of_codevisionzs_c_tutorial/))
    
- sololearn ([reason](https://www.reddit.com/user/IyeOnline/comments/17lbq38/assessment_of_sololearns_c_courses/))
    

Again. The above are **bad** tutorials that you should **NOT** use.

---

Sites that used to be on this list, but no longer are:

- Programiz has significantly improved. Its not perfect yet, but definitely not to be avoided any longer.([reason](https://www.reddit.com/user/IyeOnline/comments/1c744fs/updated_assessment_of_programiz/))
    

---

Most youtube tutorials are of low quality, I would recommend to stay away from them as well. A notable exception are the [CppCon Back to Basics](https://www.youtube.com/user/CppCon/search?query=back%20to%20basics) videos. They are good, topic oriented and in depth explanations. However, they assume that you have _some_ knowledge of the language's basic features and syntax and as such aren't a good entry point into the language.

If you _really_ insist on videos, then take a look at [this list](https://www.reddit.com/user/IyeOnline/comments/157f10z/c_youtube_video_tutorials/).

As a tutorial [www.learncpp.com](http://www.learncpp.com/) is just better than any other resource.

---

Written by [u/IyeOnline](https://www.reddit.com/user/IyeOnline/). This may get updates over time if something changes or I write more scathing reviews of other tutorials :) .

The author is not affiliated with any of the mentioned tutorials.

Feel free to copy this macro, but please copy it with this footer and the link to the original.

https://www.reddit.com/user/IyeOnline/comments/10a34s2/the_c_learning_suggestion_macro/

# std::array & std::fill

```cpp
#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>

int main() {

  std::array<int, 10> nums;
  std::fill(std::begin(nums), std::end(nums), 10);
  for (auto element : nums) {
    std::cout << element << std::endl;
  }
  return 0;
}
```

# Functions

![](Attachments/Pasted%20image%2020241016134252.png)


![](Attachments/Pasted%20image%2020241016160718.png)
# "&"  - Address of

![](Attachments/Pasted%20image%2020241016144815.png)

# Pass Argument as "Value"


![](Attachments/Pasted%20image%2020241016212104.png)

# References - "&"

![](Attachments/Pasted%20image%2020241016221655.png)



![](Attachments/Pasted%20image%2020241016234358.png)


# Pointers - In New File

# Type Def


![](Attachments/Pasted%20image%2020241017145532.png)


# Std::functions

![](Attachments/Pasted%20image%2020241017145642.png)

