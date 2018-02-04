/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFVoiceInfo : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _contentVersion;
    long long  _footprint;
    long long  _gender;
    bool  _isCustom;
    NSString * _languageCode;
    NSString * _masteredVersion;
    NSString * _name;
    bool  _wasInitalizedFromDictionaryRepresentation;
}

@property (nonatomic, readonly) NSNumber *contentVersion;
@property (nonatomic, readonly) long long footprint;
@property (nonatomic) long long gender;
@property (nonatomic) bool isCustom;
@property (nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) NSString *masteredVersion;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool wasInitalizedFromDictionaryRepresentation;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

+ (id)allVoicesForSiriSessionLanguage:(id)arg1;
+ (long long)defaultGenderForOutputVoiceLanguageCode:(id)arg1;
+ (long long)genderForVSSpeechGender:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)voiceInfoForLanguageCode:(id)arg1;

- (void).cxx_destruct;
- (long long)VSSpeechFootprint;
- (long long)VSSpeechGender;
- (long long)VSSpeechType;
- (id)VSVoiceAsset;
- (id)contentVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (long long)footprint;
- (id)footprintString;
- (long long)gender;
- (id)genderString;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithLanguageCode:(id)arg1;
- (id)initWithLanguageCode:(id)arg1 gender:(long long)arg2 isCustom:(bool)arg3;
- (id)initWithLanguageCode:(id)arg1 gender:(long long)arg2 isCustom:(bool)arg3 name:(id)arg4 footprint:(long long)arg5 contentVersion:(id)arg6 masteredVersion:(id)arg7;
- (bool)isCustom;
- (bool)isEqual:(id)arg1;
- (bool)isMatchForVoiceAsset:(id)arg1;
- (bool)isValidForSiriSessionLanguage:(id)arg1;
- (id)languageCode;
- (id)masteredVersion;
- (id)name;
- (void)setGender:(long long)arg1;
- (void)setIsCustom:(bool)arg1;
- (bool)wasInitalizedFromDictionaryRepresentation;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (long long)VSSpeechFootprint;
- (long long)VSSpeechGender;
- (bool)isMatchForVoiceAsset:(id)arg1;

@end
