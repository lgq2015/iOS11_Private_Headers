/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSParsecResultSetPattern : NSObject {
    long long  _patternLength;
    NSRegularExpression * _regularExpression;
}

@property (readonly) long long patternLength;

+ (id)_nextTokenInResultSetPattern:(id)arg1 optional:(bool*)arg2;
+ (id)_regularExpressionPatternForResultSetPatternSuffix:(id)arg1 tokenCount:(long long*)arg2;
+ (id)_regularExpressionPatternForToken:(id)arg1;
+ (id)_regularExpressionPatternFromResultSetPattern:(id)arg1 tokenCount:(long long*)arg2;
+ (id)patternWithString:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithRegularExpression:(id)arg1 tokenCount:(long long)arg2;
- (bool)isMatchedByString:(id)arg1;
- (long long)patternLength;

@end
