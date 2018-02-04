/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCERegexMatcher : NSObject {
    NSRegularExpression * mRegex;
}

+ (id)regexMatcherWithStringMatch:(id)arg1;

- (void)dealloc;
- (id)initWithStringToMatch:(id)arg1;
- (bool)matches:(id)arg1;

@end