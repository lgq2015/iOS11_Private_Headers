/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallFailureContext : NSObject <CXCopying, NSSecureCoding> {
    long long  _failureReason;
    bool  _hasCellularSettingsRemediation;
    bool  _hasDateAndTimeSettingsRemediation;
    bool  _hasLocationSettingsRemediation;
    bool  _hasWiFiSettingsRemediation;
    NSString * _message;
    long long  _providerEndedReason;
    long long  _providerErrorCode;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long failureReason;
@property (nonatomic) bool hasCellularSettingsRemediation;
@property (nonatomic) bool hasDateAndTimeSettingsRemediation;
@property (nonatomic) bool hasLocationSettingsRemediation;
@property (nonatomic) bool hasWiFiSettingsRemediation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) long long providerEndedReason;
@property (nonatomic) long long providerErrorCode;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)failureReason;
- (bool)hasCellularSettingsRemediation;
- (bool)hasDateAndTimeSettingsRemediation;
- (bool)hasLocationSettingsRemediation;
- (bool)hasWiFiSettingsRemediation;
- (id)initWithCoder:(id)arg1;
- (id)message;
- (long long)providerEndedReason;
- (long long)providerErrorCode;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setFailureReason:(long long)arg1;
- (void)setHasCellularSettingsRemediation:(bool)arg1;
- (void)setHasDateAndTimeSettingsRemediation:(bool)arg1;
- (void)setHasLocationSettingsRemediation:(bool)arg1;
- (void)setHasWiFiSettingsRemediation:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setProviderEndedReason:(long long)arg1;
- (void)setProviderErrorCode:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
