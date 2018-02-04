/* made by EzioChiu.
 */

@protocol _KSTextReplacementStoreProtocol <NSObject>

@required

- (void)addEntries:(void *)arg1 removeEntries:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)queryTextReplacementsWithCallback:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, bool, void*
- (void)queryTextReplacementsWithPredicate:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 8: NSPredicate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, bool, void*
- (void)removeAllEntries;
- (void)requestSyncWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (NSArray *)textReplacementEntries;

@end
