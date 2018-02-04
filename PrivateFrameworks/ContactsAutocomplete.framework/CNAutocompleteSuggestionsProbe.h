/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteSuggestionsProbe : NSObject <CNAutocompleteSuggestionsProbe> {
    NSString * _bundleID;
    NSMutableArray * _pendingBlocks;
    <SGSuggestionsServiceContactsProtocol> * _sgService;
    <CNScheduler> * _workScheduler;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *pendingBlocks;
@property (nonatomic, readonly) <SGSuggestionsServiceContactsProtocol> *sgService;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CNScheduler> *workScheduler;

+ (id)contactIdentifierForAutocompleteResult:(id)arg1;
+ (id)suggestionIdentifierForAutocompleteResult:(id)arg1;
+ (int)suggestionSourcesForAutocompleteResult:(id)arg1;

- (void).cxx_destruct;
- (id)bundleID;
- (id)init;
- (id)initWithSuggestionsService:(id)arg1 schedulerProvider:(id)arg2 bundleIdentifier:(id)arg3;
- (id)pendingBlocks;
- (void)recordSGServiceMessage:(id /* block */)arg1;
- (void)recordUserSawResultsConsideredSuggestion;
- (void)recordUserSelectedAutocompleteResult:(id)arg1;
- (void)sendData;
- (id)sgService;
- (id)workScheduler;

@end
