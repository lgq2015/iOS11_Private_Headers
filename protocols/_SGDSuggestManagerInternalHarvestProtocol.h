/* made by EzioChiu.
 */

@protocol _SGDSuggestManagerInternalHarvestProtocol <_SGDSuggestManagerBaseProtocol>

@required

- (void)addSearchableItemMetadata:(void *)arg1 htmlData:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSData *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)deleteInteractionsWithBundleId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)deleteInteractionsWithBundleId:(void *)arg1 groupIdentifiers:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)deleteInteractionsWithBundleId:(void *)arg1 identifiers:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)deleteSpotlightReferencesWithBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)deleteSpotlightReferencesWithBundleIdentifier:(void *)arg1 domainIdentifiers:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)deleteSpotlightReferencesWithBundleIdentifier:(void *)arg1 uniqueIdentifiers:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)purgeSpotlightReferencesWithBundleIdentifier:(void *)arg1 uniqueIdentifiers:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*

@end
