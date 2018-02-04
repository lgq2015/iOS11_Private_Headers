/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICResultCache : NSObject {
    NSArray * _cachedResults;
    NSDate * _start;
    double  _ttlInSeconds;
}

- (void).cxx_destruct;
- (void)addResults:(id)arg1;
- (void)clear;
- (bool)fuzzyMatchItem:(id)arg1 withValue:(id)arg2;
- (id)initWithTTL:(double)arg1;
- (id)searchWithTrigger:(id)arg1;
- (id)searchWithValue:(id)arg1;

@end
