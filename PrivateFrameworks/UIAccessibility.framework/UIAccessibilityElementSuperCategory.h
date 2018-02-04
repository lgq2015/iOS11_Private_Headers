/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface UIAccessibilityElementSuperCategory : __UIAccessibilityElementSuperCategory_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (float)_accessibilityActivationDelay;
- (id)_accessibilityAutomaticIdentifier;
- (bool)_accessibilityProvidesOwnFrame;
- (bool)_accessibilitySetNativeFocus;
- (void)_accessibilitySetValue:(id)arg1;
- (bool)_accessibilitySupportsActivateAction;
- (bool)_accessibilitySupportsHandwriting;
- (bool)_accessibilityViewHierarchyHasNativeFocus;
- (bool)accessibilityActivate;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (void)accessibilityDecrement;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHint;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (id)accessibilityLanguage;
- (id)accessibilityPath;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithAccessibilityContainer:(id)arg1;
- (bool)isAccessibilityElement;

@end
