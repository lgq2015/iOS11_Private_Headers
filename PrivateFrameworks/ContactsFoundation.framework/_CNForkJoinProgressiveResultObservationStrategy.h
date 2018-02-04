/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface _CNForkJoinProgressiveResultObservationStrategy : NSObject <CNForkJoinResultReportingStrategy> {
    unsigned long long  _activeObservableIdx;
    NSMutableIndexSet * _finishedObservables;
    NSArray * _results;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)observableAtIndex:(unsigned long long)arg1 didCompleteForObserver:(id)arg2;
- (void)receiveResult:(id)arg1 fromObservableAtIndex:(unsigned long long)arg2 observer:(id)arg3;

@end
