/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
 */

@interface _QPMetrics : NSObject {
    NSString * _query;
    int  _queryEngaged;
    NSArray * _queryEvents;
    NSArray * _ranks;
    int  _resultEngaged;
    NSDate * _timestamp;
}

@property (nonatomic, retain) NSString *query;
@property (nonatomic) int queryEngaged;
@property (nonatomic, retain) NSArray *queryEvents;
@property (nonatomic, retain) NSArray *ranks;
@property (nonatomic) int resultEngaged;
@property (nonatomic, retain) NSDate *timestamp;

+ (id)buildQpMetricsWithPrefix:(id)arg1 andQueryEngaged:(bool)arg2 andResultEngaged:(bool)arg3;

- (void).cxx_destruct;
- (id)query;
- (int)queryEngaged;
- (id)queryEvents;
- (id)ranks;
- (int)resultEngaged;
- (void)setQuery:(id)arg1;
- (void)setQueryEngaged:(int)arg1;
- (void)setQueryEvents:(id)arg1;
- (void)setRanks:(id)arg1;
- (void)setResultEngaged:(int)arg1;
- (void)setTimestamp:(id)arg1;
- (void)storeToCoreDuetDb;
- (id)timestamp;

@end
