/* made by EzioChiu.
 */

@protocol ENGroupContextDataSource <NSObject>

@required

- (void)groupContext:(void *)arg1 fetchGroupWithID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ENGroupContext *, ENGroupID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ENGroup *, NSError *, void*
- (void)groupContext:(void *)arg1 upsertGroupWithInfo:(void *)arg2 previousGroup:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: ENGroupContext *, _ENGroupInfo *, ENGroup *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ENGroup *, NSError *, void*
- (void)groupFromPublicDataRepresentation:(void *)arg1 inContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSData *, ENGroupContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ENGroup *, NSError *, void*
- (void)participantsForCypher:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: <ENCypher> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, bool, void*
- (void)publicDataRepresentationForGroup:(void *)arg1 inContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ENGroup *, ENGroupContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)validateCachedGroup:(void *)arg1 isParentOfGroup:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ENGroup *, ENGroup *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
