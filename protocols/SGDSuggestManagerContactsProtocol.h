/* made by EzioChiu.
 */

@protocol SGDSuggestManagerContactsProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerContactsConfirmRejectProtocol>

@required

- (void)allContactsLimitedTo:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)cnContactMatchesForRecordId:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)cnContactMatchesForRecordIds:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)contactFromRecordId:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)contactMatchesByEmailAddress:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)contactMatchesByPhoneNumber:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)contactMatchesOrLookupIdByEmailAddress:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)contactMatchesOrLookupIdByPhoneNumber:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)contactMatchesWithContact:(void *)arg1 limitTo:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: CNContact *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)contactMatchesWithContactIdentifier:(void *)arg1 limitTo:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)contactMatchesWithContactIdentifiers:(void *)arg1 limitTo:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)contactMatchesWithFullTextSearch:(void *)arg1 limitTo:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)contactMatchesWithMessagingPrefix:(void *)arg1 limitTo:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)emailAddressIsSignificant:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)namesForDetail:(void *)arg1 limitTo:(void *)arg2 prependMaybe:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 9: NSString *, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)namesForDetailCacheSnapshotsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse3 *, void*
- (void)originFromRecordId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)relevantABRecordIDsWithLimit:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*

@end
