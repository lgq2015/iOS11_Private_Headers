/* made by EzioChiu.
 */

@protocol CDPSecureChannelProxy <NSObject>

@required

- (bool)approverBackupRecordsExist;
- (unsigned long long)approveriCloudKeychainState;
- (void)sendPayload:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@end
