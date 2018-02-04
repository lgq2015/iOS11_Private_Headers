/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFQueryDispatcher : NSObject {
    NSMutableDictionary * _queriesPendingResponse;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMutableDictionary *queriesPendingResponse;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)cancelTaskWithIdentifier:(id)arg1;
- (void)dispatchQuery:(id)arg1;
- (void)fetchFavoriteLocationsWithTaskIdentifier:(id)arg1 results:(id /* block */)arg2;
- (id)init;
- (void)invalidateCacheWithIdentifier:(id)arg1;
- (void)locationForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 taskIdentifier:(id)arg2 results:(id /* block */)arg3;
- (void)locationForSearchCompletion:(id)arg1 taskIdentifier:(id)arg2 results:(id /* block */)arg3;
- (void)locationForString:(id)arg1 taskIdentifier:(id)arg2 results:(id /* block */)arg3;
- (id)queriesPendingResponse;
- (id)queue;
- (void)removePendingQueryWithIdentifier:(id)arg1;
- (void)setQueriesPendingResponse:(id)arg1;
- (void)setQueue:(id)arg1;

@end
