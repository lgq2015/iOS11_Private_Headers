/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarkTitleWordTokenizer : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeOfNextToken;
    unsigned long long  _startOfUnclassifiedRangeBeforeNextToken;
    NSString * _string;
    unsigned long long  _stringLength;
    TIWordTokenizer * _wordTokenizer;
}

+ (void)initialize;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })advanceToNextToken;
- (id)init;
- (void)setString:(id)arg1;

@end
