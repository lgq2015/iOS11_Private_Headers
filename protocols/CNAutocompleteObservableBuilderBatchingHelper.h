/* made by EzioChiu.
 */

@protocol CNAutocompleteObservableBuilderBatchingHelper <NSObject>

@required

- (void)addCalendarServerObservable:(CNObservable *)arg1;
- (void)addContactsObservable:(CNObservable *)arg1;
- (void)addCoreRecentsObservable:(CNObservable *)arg1;
- (void)addDirectoryServerObservable:(CNObservable *)arg1;
- (void)addDuetObservable:(CNObservable *)arg1;
- (void)addSuggestionsObservable:(CNObservable *)arg1;
- (void)addSupplementalObservable:(CNObservable *)arg1;
- (bool)batchAtIndexIncludesServer:(unsigned long long)arg1;
- (NSArray *)batchedObservables;

@end
