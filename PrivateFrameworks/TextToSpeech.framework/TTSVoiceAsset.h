/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSVoiceAsset : TTSAssetBase <NSSecureCoding> {
    long long  _footprint;
    long long  _gender;
    NSString * _identifier;
    bool  _isBuiltInVoice;
    bool  _isInstalled;
    NSArray * _languages;
    NSString * _name;
}

@property (nonatomic, readonly) long long footprint;
@property (nonatomic, readonly) long long gender;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) bool isBuiltInVoice;
@property (nonatomic, readonly) bool isInstalled;
@property (nonatomic, readonly) NSArray *languages;
@property (nonatomic, readonly) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (long long)footprint;
- (long long)gender;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1 languages:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 isInstalled:(bool)arg5 isBuiltIn:(bool)arg6 masteredVersion:(id)arg7 compatibilityVersion:(id)arg8;
- (bool)isBuiltInVoice;
- (bool)isInstalled;
- (id)languages;
- (id)name;
- (void)setIdentifier:(id)arg1;

@end
