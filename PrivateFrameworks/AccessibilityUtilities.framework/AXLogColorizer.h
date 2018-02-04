/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXLogColorizer : NSObject {
    bool  _active;
    struct AXLogColorTheme { 
        long long errorColor; 
        long long warningColor; 
        long long infoColor; 
        long long debugColor; 
    }  _colorTheme;
    bool  _managedBySettings;
    bool  _preferDarkColors;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) struct AXLogColorTheme { long long x1; long long x2; long long x3; long long x4; } colorTheme;
@property (getter=isManagedBySettings, nonatomic) bool managedBySettings;
@property (nonatomic) bool preferDarkColors;

+ (char *)ansiColorSeqForAXLogColor:(long long)arg1;
+ (id)coloredString:(id)arg1 withColor:(long long)arg2;
+ (id)colorizeStringIfEnabled:(id)arg1 withColor:(long long)arg2;
+ (id)defaultColorizer;
+ (struct AXLogColorTheme { long long x1; long long x2; long long x3; long long x4; })defaultDarkColorsTheme;
+ (struct AXLogColorTheme { long long x1; long long x2; long long x3; long long x4; })defaultLightColorsTheme;

- (id)_initAndManageWithSettings:(bool)arg1;
- (void)_updateSettingsFromUserPrefs;
- (id)blueString:(id)arg1;
- (struct AXLogColorTheme { long long x1; long long x2; long long x3; long long x4; })colorTheme;
- (id)cyanString:(id)arg1;
- (id)debugString:(id)arg1;
- (id)description;
- (id)errorString:(id)arg1;
- (id)greenString:(id)arg1;
- (id)greyString:(id)arg1;
- (id)infoString:(id)arg1;
- (id)init;
- (bool)isActive;
- (bool)isManagedBySettings;
- (id)magentaString:(id)arg1;
- (bool)preferDarkColors;
- (id)redString:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setColorTheme:(struct AXLogColorTheme { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)setManagedBySettings:(bool)arg1;
- (void)setPreferDarkColors:(bool)arg1;
- (id)warningString:(id)arg1;
- (id)whiteOrBlackString:(id)arg1;
- (id)yellowString:(id)arg1;

@end
