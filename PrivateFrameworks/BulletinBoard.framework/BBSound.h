/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSound : NSObject <NSCopying, NSSecureCoding> {
    TLAlertConfiguration * _alertConfiguration;
    NSString * _audioCategory;
    double  _maxDuration;
    bool  _repeats;
    NSString * _ringtoneName;
    NSString * _songPath;
    unsigned long long  _soundBehavior;
    long long  _soundType;
    unsigned int  _systemSoundID;
    NSDictionary * _vibrationPattern;
}

@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (nonatomic, copy) TLAlertConfiguration *alertConfiguration;
@property (nonatomic, readonly) long long alertType;
@property (nonatomic, copy) NSString *audioCategory;
@property (nonatomic, readonly) bool ignoreRingerSwitch;
@property (nonatomic) double maxDuration;
@property (getter=isRepeating, nonatomic) bool repeats;
@property (nonatomic, copy) NSString *ringtoneName;
@property (nonatomic, copy) NSString *songPath;
@property (nonatomic) unsigned long long soundBehavior;
@property (nonatomic) long long soundType;
@property (nonatomic) unsigned int systemSoundID;
@property (nonatomic, readonly, copy) NSString *toneIdentifier;
@property (nonatomic, readonly, copy) NSString *vibrationIdentifier;
@property (nonatomic, copy) NSDictionary *vibrationPattern;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)alertConfiguration;
- (long long)alertType;
- (id)audioCategory;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)ignoreRingerSwitch;
- (id)initWithCoder:(id)arg1;
- (id)initWithToneAlert:(long long)arg1;
- (id)initWithToneAlert:(long long)arg1 accountIdentifier:(id)arg2;
- (id)initWithToneAlert:(long long)arg1 accountIdentifier:(id)arg2 ignoreRingerSwitch:(bool)arg3;
- (id)initWithToneAlert:(long long)arg1 accountIdentifier:(id)arg2 toneIdentifier:(id)arg3 vibrationIdentifier:(id)arg4 ignoreRingerSwitch:(bool)arg5;
- (id)initWithToneAlert:(long long)arg1 ignoreRingerSwitch:(bool)arg2;
- (id)initWithToneAlert:(long long)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
- (id)initWithToneAlert:(long long)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 ignoreRingerSwitch:(bool)arg4;
- (id)initWithToneAlertConfiguration:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isRepeating;
- (double)maxDuration;
- (id)replacementObjectForCoder:(id)arg1;
- (id)ringtoneName;
- (void)setAlertConfiguration:(id)arg1;
- (void)setAudioCategory:(id)arg1;
- (void)setMaxDuration:(double)arg1;
- (void)setRepeats:(bool)arg1;
- (void)setRingtoneName:(id)arg1;
- (void)setSongPath:(id)arg1;
- (void)setSoundBehavior:(unsigned long long)arg1;
- (void)setSoundType:(long long)arg1;
- (void)setSystemSoundID:(unsigned int)arg1;
- (void)setVibrationPattern:(id)arg1;
- (id)songPath;
- (unsigned long long)soundBehavior;
- (long long)soundType;
- (unsigned int)systemSoundID;
- (id)toneIdentifier;
- (id)vibrationIdentifier;
- (id)vibrationPattern;

@end
