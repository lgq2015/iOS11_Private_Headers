/* made by EzioChiu.
 */

@protocol IDSTransactionLogTaskHandlerDelegate

@required

- (void)persistedTokenForTaskHandler:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: IDSTransactionLogTaskHandler *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NSSecureCoding> *, NSError *, void*
- (void)taskHandler:(void *)arg1 accountInfoForAliases:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: IDSTransactionLogTaskHandler *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, IDSTransactionLogTaskHandlerAccountInfo *, NSError *, void*
- (void)taskHandler:(void *)arg1 groupsWithGroupIDs:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: IDSTransactionLogTaskHandler *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)taskHandler:(void *)arg1 messagesFromToken:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 11: IDSTransactionLogTaskHandler *, <NSSecureCoding> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, <NSSecureCoding> *, bool, NSError *, void*
- (void)taskHandler:(void *)arg1 participantsWithDestinations:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: IDSTransactionLogTaskHandler *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)taskHandler:(void *)arg1 persistToken:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: IDSTransactionLogTaskHandler *, <NSSecureCoding> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
