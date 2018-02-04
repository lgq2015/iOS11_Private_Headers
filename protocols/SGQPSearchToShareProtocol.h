/* made by EzioChiu.
 */

@protocol SGQPSearchToShareProtocol <SFFeedbackListener>

@required

- (void)didEndSearch:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SFEndSearchFeedback *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)didEngageResult:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SFResultEngagementFeedback *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)didEngageSuggestion:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SFSuggestionEngagementFeedback *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)didStartSearch:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SFStartSearchFeedback *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)queryPredictionsForConversation:(void *)arg1 limit:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)rankedCategoriesForConversation:(void *)arg1 limit:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)searchViewDidAppear:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SFSearchViewAppearFeedback *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)searchViewDidDisappear:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SFSearchViewDisappearFeedback *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendCustomFeedback:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SFCustomFeedback *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
