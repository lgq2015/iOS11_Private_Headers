/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKSampleQueryUtility : NSObject {
    HKHealthStore * _healthStore;
    NSPredicate * _predicate;
    HKAnchoredObjectQuery * _query;
    HKQueryAnchor * _queryAnchor;
    HKSampleType * _sampleType;
    NSMutableArray * _samples;
    bool  _sortStartDateAscending;
    id /* block */  _updateHandler;
}

@property (nonatomic) bool sortStartDateAscending;
@property (nonatomic, copy) id /* block */ updateHandler;

- (void).cxx_destruct;
- (void)execute;
- (void)handleAddedObjects:(id)arg1 deletedObjects:(id)arg2 queryAnchor:(id)arg3 error:(id)arg4 resultsHandler:(id /* block */)arg5;
- (id)init;
- (id)initWithHealthStore:(id)arg1 sampleType:(id)arg2 predicate:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithHealthStore:(id)arg1 sampleType:(id)arg2 predicate:(id)arg3 completionHandler:(id /* block */)arg4 updateHandler:(id /* block */)arg5;
- (id)initWithHealthStore:(id)arg1 sampleType:(id)arg2 predicate:(id)arg3 resultsHandler:(id /* block */)arg4;
- (void)setSortStartDateAscending:(bool)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (void)setupQueryWithCompletionHandler:(id /* block */)arg1;
- (bool)sortStartDateAscending;
- (void)stop;
- (id /* block */)updateHandler;

@end
