/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
 */

@interface SGQPWordBoundaries : NSObject {
    struct vector<bool, std::__1::allocator<bool> > { 
        unsigned long long *__begin_; 
        unsigned long long __size_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { 
            unsigned long long __first_; 
        } __cap_alloc_; 
    }  _left;
    struct vector<bool, std::__1::allocator<bool> > { 
        unsigned long long *__begin_; 
        unsigned long long __size_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { 
            unsigned long long __first_; 
        } __cap_alloc_; 
    }  _right;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)initWithString:(id)arg1;
- (bool)isWordAnchored:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
