/* made by EzioChiu.
 */

@protocol SGSuggestionsServiceSearchToShareProtocol <SFFeedbackListener>

@required

- (void)queryPredictionsFeedbackReportForConversation:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGQPFeedbackReport *, NSError *, void*
- (void)queryPredictionsForConversation:(void *)arg1 count:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
