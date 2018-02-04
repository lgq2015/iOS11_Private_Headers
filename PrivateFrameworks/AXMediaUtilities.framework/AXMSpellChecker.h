/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMSpellChecker : NSObject {
    AppleSpell * _spellChecker;
}

@property (nonatomic, retain) AppleSpell *spellChecker;

- (void).cxx_destruct;
- (void)correctSpellingInText:(id)arg1 withLanguages:(id)arg2;
- (void)setSpellChecker:(id)arg1;
- (id)spellChecker;
- (bool)textContainsMisspelling:(id)arg1 withLanguages:(id)arg2;

@end
