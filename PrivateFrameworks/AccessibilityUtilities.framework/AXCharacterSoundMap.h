/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXCharacterSoundMap : NSObject {
    NSMutableDictionary * _phDictionaries;
}

@property (nonatomic, retain) NSMutableDictionary *phDictionaries;

- (void).cxx_destruct;
- (id)_linguisticStringForCharacter:(id)arg1 language:(id)arg2 linguisticType:(long long)arg3 andVoiceIdentifier:(id)arg4;
- (id)init;
- (id)phDictionaries;
- (id)phonemeStringForCharacter:(id)arg1 forLanguage:(id)arg2 andVoiceIdentifier:(id)arg3;
- (id)phoneticStringForCharacter:(id)arg1 forLanguage:(id)arg2 andVoiceIdentifier:(id)arg3;
- (void)setPhDictionaries:(id)arg1;

@end
