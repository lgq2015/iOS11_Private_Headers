/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCMoreDetailsCell : PSTableCell {
    MCMoreDetailsContentView * _mcContentView;
}

+ (float)defaultHeight;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setCertificate:(struct __SecCertificate { }*)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setPayload:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

@end
