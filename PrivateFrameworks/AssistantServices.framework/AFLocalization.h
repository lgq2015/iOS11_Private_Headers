/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFLocalization : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _tables;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)allOutputVoiceIdentifiersForSiriLanguage:(id)arg1;
- (id)compactDisplayNameInLanguage:(id)arg1 forSiriLanguage:(id)arg2;
- (id)defaultOutputVoiceForSiriSessionLanguage:(id)arg1;
- (id)init;
- (id)loadInfoForVoicesWithLanguageCode:(id)arg1;
- (id)localizedCompactNameForSiriLanguage:(id)arg1 inDisplayLanguage:(id)arg2;
- (id)localizedGenderOfOutputVoice:(id)arg1 inDisplayLanguage:(id)arg2;
- (id)localizedNameForSiriLanguage:(id)arg1 inDisplayLanguage:(id)arg2;
- (id)localizedNameOfOutputVoice:(id)arg1 inDisplayLanguage:(id)arg2;
- (id)localizedNameOfVoiceGender:(long long)arg1 inDisplayLanguage:(id)arg2;
- (id)localizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3 languageCode:(id)arg4;
- (id)longDisplayNameInLanguage:(id)arg1 forSiriLanguage:(id)arg2;

@end
