/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

@interface AXSSPronunciationSubstitution : NSObject {
    bool  _active;
    bool  _appliesToAllApps;
    NSSet * _bundleIdentifiers;
    bool  _ignoreCase;
    bool  _isUserSubstitution;
    NSSet * _languages;
    NSString * _originalString;
    NSString * _phonemes;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _replacementRange;
    NSString * _replacementString;
    NSSet * _voiceIds;
}

@property (nonatomic) bool active;
@property (nonatomic) bool appliesToAllApps;
@property (nonatomic, copy) NSSet *bundleIdentifiers;
@property (nonatomic) bool ignoreCase;
@property (nonatomic) bool isUserSubstitution;
@property (nonatomic, copy) NSSet *languages;
@property (nonatomic, copy) NSString *originalString;
@property (nonatomic, copy) NSString *phonemes;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } replacementRange;
@property (nonatomic, copy) NSString *replacementString;
@property (nonatomic, copy) NSSet *voiceIds;

- (void).cxx_destruct;
- (bool)active;
- (bool)appliesToAllApps;
- (id)bundleIdentifiers;
- (bool)ignoreCase;
- (bool)isEqualToSubstitution:(id)arg1;
- (bool)isUserSubstitution;
- (id)languages;
- (id)originalString;
- (id)phonemes;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })replacementRange;
- (id)replacementString;
- (void)setActive:(bool)arg1;
- (void)setAppliesToAllApps:(bool)arg1;
- (void)setBundleIdentifiers:(id)arg1;
- (void)setIgnoreCase:(bool)arg1;
- (void)setIsUserSubstitution:(bool)arg1;
- (void)setLanguages:(id)arg1;
- (void)setOriginalString:(id)arg1;
- (void)setPhonemes:(id)arg1;
- (void)setReplacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setReplacementString:(id)arg1;
- (void)setVoiceIds:(id)arg1;
- (id)voiceIds;

@end
