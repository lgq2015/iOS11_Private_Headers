/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKContainerSetupInfo : NSObject <NSSecureCoding> {
    CKAccountOverrideInfo * _accountInfoOverride;
    bool  _bypassPCSEncryption;
    bool  _captureResponseHTTPHeaders;
    unsigned int  _clientSDKVersion;
    CKContainerID * _containerID;
    NSDictionary * _fakeEntitlements;
    bool  _holdAllOperations;
    bool  _masqueradeAsThirdPartyApp;
    bool  _returnPCSMetadata;
    NSString * _sourceApplicationBundleIdentifier;
    bool  _useMMCSEncryptionV2;
    bool  _useZoneWidePCS;
    bool  _wantsSiloedContext;
}

@property (nonatomic, retain) CKAccountOverrideInfo *accountInfoOverride;
@property (nonatomic) bool bypassPCSEncryption;
@property (nonatomic) bool captureResponseHTTPHeaders;
@property (nonatomic) unsigned int clientSDKVersion;
@property (nonatomic, retain) CKContainerID *containerID;
@property (nonatomic, retain) NSDictionary *fakeEntitlements;
@property (nonatomic) bool holdAllOperations;
@property (nonatomic) bool masqueradeAsThirdPartyApp;
@property (nonatomic) bool returnPCSMetadata;
@property (nonatomic, retain) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic) bool useMMCSEncryptionV2;
@property (nonatomic) bool useZoneWidePCS;
@property (nonatomic) bool wantsSiloedContext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountInfoOverride;
- (bool)bypassPCSEncryption;
- (bool)captureResponseHTTPHeaders;
- (unsigned int)clientSDKVersion;
- (id)containerID;
- (void)encodeWithCoder:(id)arg1;
- (id)fakeEntitlements;
- (bool)holdAllOperations;
- (id)initWithCoder:(id)arg1;
- (bool)masqueradeAsThirdPartyApp;
- (bool)returnPCSMetadata;
- (void)setAccountInfoOverride:(id)arg1;
- (void)setBypassPCSEncryption:(bool)arg1;
- (void)setCaptureResponseHTTPHeaders:(bool)arg1;
- (void)setClientSDKVersion:(unsigned int)arg1;
- (void)setContainerID:(id)arg1;
- (void)setFakeEntitlements:(id)arg1;
- (void)setHoldAllOperations:(bool)arg1;
- (void)setMasqueradeAsThirdPartyApp:(bool)arg1;
- (void)setReturnPCSMetadata:(bool)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setUseMMCSEncryptionV2:(bool)arg1;
- (void)setUseZoneWidePCS:(bool)arg1;
- (void)setWantsSiloedContext:(bool)arg1;
- (id)sourceApplicationBundleIdentifier;
- (bool)useMMCSEncryptionV2;
- (bool)useZoneWidePCS;
- (bool)wantsSiloedContext;

@end