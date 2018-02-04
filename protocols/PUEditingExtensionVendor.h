/* made by EzioChiu.
 */

@protocol PUEditingExtensionVendor

@required

- (void)beginContentEditingWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)cancelContentEditing;
- (void)finishContentEditing;
- (void)queryHandlingCapabilityForAdjustmentData:(void *)arg1 withResponseHandler:(void *)arg2; // needs 2 arg types, found 7: PHAdjustmentData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)queryShouldShowCancelConfirmationWithResponseHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
