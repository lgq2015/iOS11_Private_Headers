/* made by EzioChiu.
 */

@protocol CUPairingDaemonXPCInterface

@required

- (void)deletePairingIdentityWithOptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)findPairedPeer:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CUPairedPeer *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CUPairedPeer *, NSError *, void*
- (void)getPairedPeersWithOptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getPairingIdentityWithOptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CUPairingIdentity *, NSError *, void*
- (void)removePairedPeer:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CUPairedPeer *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)savePairedPeer:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CUPairedPeer *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)showWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)startMonitoringWithOptions:(unsigned long long)arg1;

@end
