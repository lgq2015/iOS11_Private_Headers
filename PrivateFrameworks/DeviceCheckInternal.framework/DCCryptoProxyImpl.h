/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
 */

@interface DCCryptoProxyImpl : NSObject <DCCryptoProxy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_fetchPublicKey:(id /* block */)arg1;
- (void)fetchOpaqueBlobWithContext:(id)arg1 completion:(id /* block */)arg2;

@end
