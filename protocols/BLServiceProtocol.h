/* made by EzioChiu.
 */

@protocol BLServiceProtocol

@required

- (void)cancelAllActiveDownloadsWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)cancelDownloadWithID:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)downloadWithPermlink:(void *)arg1 title:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)fetchDownloadFromDownloadID:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BLDownload *, NSError *, void*
- (void)fetchDownloadListWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getCrashSimulationOverrideValuesWithReply:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, bool, bool, NSError *, void*
- (void)getValueSimulateDeviceOutOfSpaceWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)pauseDownloadWithID:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)purchaseWithBuyParameters:(void *)arg1 storeID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)requestDownloadWithMetadata:(void *)arg1 isRestore:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)requestDownloadWithParameters:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)requestDownloadsWithMetadata:(void *)arg1 areRestore:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)resetAllCrashSimulationOverridesWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resumeDownloadWithID:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setValueSimulateCrashAtInstallDuringDecrypt:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setValueSimulateCrashAtInstallDuringFinish:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setValueSimulateCrashAtInstallDuringUnzip:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setValueSimulateCrashAtInstallStart:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setValueSimulateDeviceOutOfSpace:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
