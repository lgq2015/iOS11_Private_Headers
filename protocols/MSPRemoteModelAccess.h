/* made by EzioChiu.
 */

@protocol MSPRemoteModelAccess <NSObject>

@required

- (void)commitFavoritesSerializedRepresentation:(void *)arg1 operationIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSData *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)commitHistorySerializedRepresentation:(void *)arg1 earliestKnownSyncDate:(void *)arg2 operationIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSData *, NSDate *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)eraseFavoritesSerializedRepresentationWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)eraseHistorySerializedRepresentationWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchFavoritesSerializedRepresentationWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)fetchHistorySerializedRepresentationWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)fetchLastKnownFavoritesOperationIdentifier:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, void*
- (void)fetchLastKnownHistoryOperationIdentifier:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, void*
- (void)noteMapstoolChangedFavoritesOnDisk;
- (void)noteMapstoolChangedHistoryOnDisk;
- (void)testByNotingHistoryChangedOnDisk;

@end
