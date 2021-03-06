/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSSpeechVoice : NSObject <NSCopying, NSSecureCoding> {
    bool  _canBeDownloaded;
    long long  _footprint;
    long long  _gender;
    NSString * _identifier;
    bool  _isCombinedFootprint;
    bool  _isDefault;
    NSString * _language;
    NSString * _name;
    NSString * _nonCombinedVoiceId;
    <TTSSpeechService> * _service;
    NSString * _serviceIdentifier;
    bool  _useVoiceBooster;
}

@property (nonatomic) bool canBeDownloaded;
@property (nonatomic) long long footprint;
@property (nonatomic) long long gender;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) bool isCombinedFootprint;
@property (nonatomic, readonly) bool isDefault;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *nonCombinedVoiceId;
@property (nonatomic, retain) NSString *serviceIdentifier;
@property (nonatomic) bool useVoiceBooster;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_initializeVoiceBooster;
- (void)_routeChange:(id)arg1;
- (bool)canBeDownloaded;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)footprint;
- (long long)gender;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCombinedFootprint;
- (bool)isDefault;
- (bool)isEqual:(id)arg1;
- (id)language;
- (id)name;
- (id)nonCombinedVoiceId;
- (id)service;
- (id)serviceIdentifier;
- (void)setCanBeDownloaded:(bool)arg1;
- (void)setFootprint:(long long)arg1;
- (void)setGender:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNonCombinedVoiceId:(id)arg1;
- (void)setService:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setUseVoiceBooster:(bool)arg1;
- (bool)useVoiceBooster;

@end
