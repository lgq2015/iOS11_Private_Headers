/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NURepeatPattern : NUPattern {
    long long  _maxCount;
    long long  _minCount;
    NUPattern * _pattern;
}

@property (readonly) long long maxCount;
@property (readonly) long long minCount;
@property (readonly) NUPattern *pattern;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPattern:(id)arg1 count:(long long)arg2;
- (id)initWithPattern:(id)arg1 minCount:(long long)arg2;
- (id)initWithPattern:(id)arg1 minCount:(long long)arg2 maxCount:(long long)arg3;
- (bool)isEqualToPattern:(id)arg1;
- (bool)isEqualToRepeatPattern:(id)arg1;
- (bool)isFixedOrder;
- (bool)match:(id)arg1 location:(unsigned long long*)arg2 count:(unsigned long long*)arg3;
- (long long)maxCount;
- (long long)minCount;
- (id)optimizedPattern;
- (id)pattern;
- (id)shortestMatch;
- (id)stringRepresentation;
- (id)tokens;

@end
