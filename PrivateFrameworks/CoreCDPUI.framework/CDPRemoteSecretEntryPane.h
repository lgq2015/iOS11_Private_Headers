/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPRemoteSecretEntryPane : CDPPassphraseEntryPane {
    CDPDevice * _device;
    CDPRemoteValidationEscapeOffer * _escapeOffer;
    UIButton * _footerButton;
    bool  _remoteAccountRecovery;
    unsigned long long  _remoteSecretType;
}

@property (nonatomic, retain) CDPDevice *device;
@property (nonatomic, retain) CDPRemoteValidationEscapeOffer *escapeOffer;
@property bool remoteAccountRecovery;
@property (nonatomic) unsigned long long remoteSecretType;

- (void).cxx_destruct;
- (id)_headerStringForDevice:(id)arg1 localDeviceClass:(id)arg2;
- (id)device;
- (void)didFinishResizingHeaderView;
- (void)didFinishResizingPinView;
- (id)escapeOffer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)remoteAccountRecovery;
- (unsigned long long)remoteSecretType;
- (void)setDevice:(id)arg1;
- (void)setEscapeOffer:(id)arg1;
- (void)setRemoteAccountRecovery:(bool)arg1;
- (void)setRemoteSecretType:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;

@end
