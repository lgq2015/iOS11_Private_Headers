/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFSiriLanguageOption : NSObject <NAIdentifiable> {
    bool  _defaultVoiceForRecognitionLanguage;
    long long  _outputGender;
    NSString * _outputLanguage;
    NSString * _recognitionLanguage;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefaultVoiceForRecognitionLanguage, nonatomic, readonly) bool defaultVoiceForRecognitionLanguage;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedOutputVoice;
@property (nonatomic, readonly, copy) NSString *localizedOutputVoiceAccent;
@property (nonatomic, readonly, copy) NSString *localizedOutputVoiceGender;
@property (nonatomic, readonly, copy) NSString *localizedRecognitionLanguage;
@property (nonatomic, readonly) long long outputGender;
@property (nonatomic, readonly, copy) NSString *outputLanguage;
@property (nonatomic, readonly, copy) NSString *recognitionLanguage;
@property (readonly) Class superclass;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRecognitionLanguage:(id)arg1 outputLanguage:(id)arg2 outputGender:(long long)arg3 defaultVoiceForRecognitionLanguage:(bool)arg4;
- (id)initWithRecognitionLanguage:(id)arg1 outputVoice:(id)arg2 defaultVoiceForRecognitionLanguage:(bool)arg3;
- (id)initWithSerializedRepresentation:(id)arg1;
- (bool)isDefaultVoiceForRecognitionLanguage;
- (bool)isEqual:(id)arg1;
- (id)localizedOutputVoice;
- (id)localizedOutputVoiceAccent;
- (id)localizedOutputVoiceGender;
- (id)localizedRecognitionLanguage;
- (long long)outputGender;
- (id)outputLanguage;
- (id)outputVoice;
- (id)recognitionLanguage;
- (id)serializedRepresentation;

@end
