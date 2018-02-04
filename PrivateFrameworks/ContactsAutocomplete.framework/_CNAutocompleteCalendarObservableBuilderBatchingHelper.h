/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface _CNAutocompleteCalendarObservableBuilderBatchingHelper : NSObject <CNAutocompleteObservableBuilderBatchingHelper> {
    _CNAutocompleteObservableBuilderBatchingHelper * _helper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _CNAutocompleteObservableBuilderBatchingHelper *helper;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addCalendarServerObservable:(id)arg1;
- (void)addContactsObservable:(id)arg1;
- (void)addCoreRecentsObservable:(id)arg1;
- (void)addDirectoryServerObservable:(id)arg1;
- (void)addDuetObservable:(id)arg1;
- (void)addSuggestionsObservable:(id)arg1;
- (void)addSupplementalObservable:(id)arg1;
- (bool)batchAtIndexIncludesServer:(unsigned long long)arg1;
- (id)batchedObservables;
- (id)helper;
- (id)init;
- (void)setHelper:(id)arg1;

@end
