/* made by EzioChiu.
 */

@protocol QLPreviewCollectionServiceProtocol <QLPreviewCollectionProtocol>

@required

- (void)configureAsAccessoryViewContainerForPreviewCollection:(NSUUID *)arg1;
- (void)getNetworkObserverWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <QLNetworkStateListener> *, void*
- (void)getPreviewCollectionUUIDWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, void*
- (void)invalidatePreviewCollection;
- (void)setAllowInteractiveTransitions:(bool)arg1;
- (void)setNotificationCenter:(id <QLNotificationCenterProtocol>)arg1;

@end
