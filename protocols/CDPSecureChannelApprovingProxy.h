/* made by EzioChiu.
 */

@protocol CDPSecureChannelApprovingProxy <NSObject>

@required

- (void)listenForPayloadsWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, id*, id
- (void)setApproverBackupRecordsExist:(bool)arg1;
- (void)setApproveriCloudKeychainState:(unsigned long long)arg1;

@end
