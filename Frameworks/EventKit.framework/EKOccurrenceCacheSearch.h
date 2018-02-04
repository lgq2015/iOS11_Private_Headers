/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKOccurrenceCacheSearch : NSObject <EKCancellableRemoteOperation> {
    NSSet * _calendars;
    id /* block */  _callback;
    bool  _canceled;
    NSNumber * _replyID;
    NSString * _searchTerm;
    EKEventStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)searchWithCalendars:(id)arg1 searchTerm:(id)arg2 store:(id)arg3 callback:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)cancel;
- (void)disconnect;
- (id)initWithCalendars:(id)arg1 searchTerm:(id)arg2 store:(id)arg3 callback:(id /* block */)arg4;
- (int)performSearchOperation:(unsigned int)arg1 inCalendars:(id)arg2 withEventStore:(id)arg3 andSearchTerm:(id)arg4;
- (void)receivedBatchResultsFromServer:(id)arg1 finished:(bool)arg2;
- (void)run;
- (id)searchTerm;

@end
