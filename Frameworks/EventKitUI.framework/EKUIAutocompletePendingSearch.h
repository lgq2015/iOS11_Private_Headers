/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIAutocompletePendingSearch : NSObject <EKUIAutocompletePendingSearchProtocol> {
    EKEventStore * _eventStore;
    unsigned long long  _maximumResultCount;
    <CalSpotlightQueryPendingSearchProtocol> * _pendingSearch;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_eventKitQueue;
+ (id)_queue;
+ (void)_updateResult:(id)arg1 withEvent:(id)arg2;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithEventStore:(id)arg1 searchString:(id)arg2 maximumResultCount:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)searchWithString:(id)arg1 completionHandler:(id /* block */)arg2;

@end
