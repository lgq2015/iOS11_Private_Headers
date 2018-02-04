/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRemoteAssetDownloadRecord : PKPaymentBackgroundDownloadRecord <NSSecureCoding> {
    NSURL * _passURL;
    NSDictionary * _remoteAssetsByTaskIdentifier;
}

@property (nonatomic, retain) NSURL *passURL;
@property (nonatomic, retain) NSDictionary *remoteAssetsByTaskIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)passURL;
- (id)remoteAssetsByTaskIdentifier;
- (void)removeRemoteAssetForTaskIdentifier:(id)arg1;
- (void)setPassURL:(id)arg1;
- (void)setRemoteAsset:(id)arg1 forTaskIdentifier:(id)arg2;
- (void)setRemoteAssetsByTaskIdentifier:(id)arg1;

@end
