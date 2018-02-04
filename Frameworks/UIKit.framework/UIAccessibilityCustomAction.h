/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAccessibilityCustomAction : NSObject {
    NSAttributedString * _attributedName;
    SEL  _selector;
    id  _target;
}

@property (nonatomic, copy) NSAttributedString *attributedName;
@property (nonatomic) bool ignoreWhenVoiceOverTouches;
@property (getter=_image, setter=_setImage:, nonatomic, retain) UIImage *image;
@property (getter=_accessibilityInternalCustomActionIdentifier, setter=_accessibilitySetInternalCustomActionIdentifier:, nonatomic, retain) NSString *internalCustomActionIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) SEL selector;
@property (getter=_shortName, setter=_setShortName:, nonatomic, retain) NSString *shortName;
@property (nonatomic) bool shouldSuppressActionHint;
@property (nonatomic) id target;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;
- (id)attributedName;
- (id)init;
- (id)initWithAttributedName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)initWithName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)name;
- (SEL)selector;
- (void)setAttributedName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (id)_accessibilityAXAttributedName;
- (id)_accessibilityCustomActionIdentifier;
- (id)_accessibilityInternalCustomActionIdentifier;
- (bool)_accessibilityMatchesCustomActionIdentifier:(id)arg1;
- (void)_accessibilitySetInternalCustomActionIdentifier:(id)arg1;
- (id)_image;
- (void)_setImage:(id)arg1;
- (void)_setShortName:(id)arg1;
- (id)_shortName;
- (bool)ignoreWhenVoiceOverTouches;
- (void)setIgnoreWhenVoiceOverTouches:(bool)arg1;
- (void)setShouldSuppressActionHint:(bool)arg1;
- (bool)shouldSuppressActionHint;

@end
