/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusEffect : UIVisualEffect {
    _UIFocusEffectSettings * _settings;
}

@property (getter=_settings, setter=_setSettings:, nonatomic, copy) _UIFocusEffectSettings *settings;

+ (id)_effectWithPrivateStyle:(long long)arg1;
+ (id)_effectWithSettings:(id)arg1;
+ (id)effectWithStyle:(long long)arg1 state:(long long)arg2;

- (void).cxx_destruct;
- (long long)_expectedUsage;
- (bool)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (void)_setSettings:(id)arg1;
- (id)_settings;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettings:(id)arg1;

@end
