/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallModel : NSObject <NSCopying, NSSecureCoding> {
    bool  _supportsAddCall;
    bool  _supportsDTMF;
    bool  _supportsGrouping;
    bool  _supportsHolding;
    bool  _supportsSendingToVoicemail;
    bool  _supportsUnambiguousMultiPartyState;
    bool  _supportsUngrouping;
}

@property (nonatomic) bool supportsAddCall;
@property (nonatomic) bool supportsDTMF;
@property (nonatomic) bool supportsGrouping;
@property (nonatomic) bool supportsHolding;
@property (nonatomic) bool supportsSendingToVoicemail;
@property (nonatomic) bool supportsUnambiguousMultiPartyState;
@property (nonatomic) bool supportsUngrouping;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSupportsAddCall:(bool)arg1;
- (void)setSupportsDTMF:(bool)arg1;
- (void)setSupportsGrouping:(bool)arg1;
- (void)setSupportsHolding:(bool)arg1;
- (void)setSupportsSendingToVoicemail:(bool)arg1;
- (void)setSupportsUnambiguousMultiPartyState:(bool)arg1;
- (void)setSupportsUngrouping:(bool)arg1;
- (bool)supportsAddCall;
- (bool)supportsDTMF;
- (bool)supportsGrouping;
- (bool)supportsHolding;
- (bool)supportsSendingToVoicemail;
- (bool)supportsUnambiguousMultiPartyState;
- (bool)supportsUngrouping;

@end
