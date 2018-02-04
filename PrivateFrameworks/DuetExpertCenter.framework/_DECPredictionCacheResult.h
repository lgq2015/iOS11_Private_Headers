/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECPredictionCacheResult : NSObject {
    unsigned long long  _hits;
    unsigned long long  _misses;
    NSDictionary * _predictions;
}

@property (nonatomic, readonly) unsigned long long hits;
@property (nonatomic, readonly) unsigned long long misses;
@property (nonatomic, readonly) NSDictionary *predictions;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hits;
- (id)initWithPredictions:(id)arg1 hits:(unsigned long long)arg2 misses:(unsigned long long)arg3;
- (unsigned long long)misses;
- (id)predictions;

@end
