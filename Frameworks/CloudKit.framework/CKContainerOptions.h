/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKContainerOptions : NSObject {
    CKAccountOverrideInfo * _accountInfoOverride;
    bool  _bypassPCSEncryption;
    bool  _captureResponseHTTPHeaders;
    bool  _enforceNamedOperationGroups;
    bool  _returnPCSMetadata;
    bool  _useMMCSEncryptionV2;
    bool  _useZoneWidePCS;
    bool  _wantsSiloedContext;
}

@property (nonatomic, copy) CKAccountOverrideInfo *accountInfoOverride;
@property (nonatomic) bool bypassPCSEncryption;
@property (nonatomic) bool captureResponseHTTPHeaders;
@property (nonatomic) bool enforceNamedOperationGroups;
@property (nonatomic) bool returnPCSMetadata;
@property (nonatomic) bool useMMCSEncryptionV2;
@property (nonatomic) bool useZoneWidePCS;
@property (nonatomic) bool wantsSiloedContext;

- (void).cxx_destruct;
- (id)accountInfoOverride;
- (bool)bypassPCSEncryption;
- (bool)captureResponseHTTPHeaders;
- (bool)enforceNamedOperationGroups;
- (bool)returnPCSMetadata;
- (void)setAccountInfoOverride:(id)arg1;
- (void)setBypassPCSEncryption:(bool)arg1;
- (void)setCaptureResponseHTTPHeaders:(bool)arg1;
- (void)setEnforceNamedOperationGroups:(bool)arg1;
- (void)setReturnPCSMetadata:(bool)arg1;
- (void)setUseMMCSEncryptionV2:(bool)arg1;
- (void)setUseZoneWidePCS:(bool)arg1;
- (void)setWantsSiloedContext:(bool)arg1;
- (bool)useMMCSEncryptionV2;
- (bool)useZoneWidePCS;
- (bool)wantsSiloedContext;

@end
