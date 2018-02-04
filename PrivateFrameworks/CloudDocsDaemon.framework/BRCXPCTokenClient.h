/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCXPCTokenClient : BRCXPCClient <BRTokenProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)currentAccountCopyTokenWithBundleID:(id)arg1 version:(id)arg2 reply:(id /* block */)arg3;
- (id)description;
- (void)getPrimaryiCloudAccountStatus:(id /* block */)arg1;
- (void)prepareFileProvidersWithReply:(id /* block */)arg1;

@end
