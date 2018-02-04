/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSTextFieldSpecifier : PSSpecifier {
    NSString * _placeholder;
    SEL  bestGuess;
}

+ (id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7;
+ (id)specifierWithSpecifier:(id)arg1;

- (void).cxx_destruct;
- (bool)isEqualToSpecifier:(id)arg1;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;

@end
