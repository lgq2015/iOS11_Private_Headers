/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPMatcher : NSObject {
    void * _matcher;
}

+ (id)transcriptionForString:(id)arg1 withLanguage:(id)arg2;

- (void)dealloc;
- (id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(unsigned long long)arg3;
- (bool)matches:(id)arg1;
- (bool)matches:(id)arg1 outMatchBits:(unsigned long long*)arg2;
- (bool)matchesUTF8String:(const char *)arg1;
- (bool)matchesUTF8String:(const char *)arg1 outMatchBits:(unsigned long long*)arg2;
- (unsigned long long)wordCount;

@end
