/* made by EzioChiu.
 */

@protocol CKPermanentWritableEventStore

@required

- (void)deleteInteractionsWithBundleId:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)deleteInteractionsWithBundleId:(NSString *)arg1 error:(id*)arg2;
- (void)recordEvent:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: CKEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)recordEvent:(CKEvent *)arg1 error:(id*)arg2;
- (void)recordInteraction:(void *)arg1 bundleId:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: INInteraction *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)recordInteraction:(INInteraction *)arg1 bundleId:(NSString *)arg2 error:(id*)arg3;
- (void)recordInteraction:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: INInteraction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)recordInteraction:(INInteraction *)arg1 error:(id*)arg2;

@end
