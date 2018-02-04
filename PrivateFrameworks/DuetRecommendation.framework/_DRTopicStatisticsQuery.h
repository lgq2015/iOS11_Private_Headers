/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
 */

@interface _DRTopicStatisticsQuery : _DKQuery <_DKExecutableQuery> {
    NSObject<OS_dispatch_queue> * _defaultQueue;
    NSPredicate * _predicate;
    _DRTopicInterestSummary * _summary;
}

@property (retain) _DRTopicInterestSummary *summary;

+ (id)countExpression;
+ (id)sumExpression;
+ (id)topicStatisticsQuery;
+ (id)topicStatisticsQueryWithFilter:(id)arg1;

- (void).cxx_destruct;
- (void)clearSummary;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id*)arg2;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (id)initWithPredicate:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)summary;

@end
