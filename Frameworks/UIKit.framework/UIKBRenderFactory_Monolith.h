/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactory_Monolith : UIKBRenderFactory

- (id)_activeTraitsForKey:(id)arg1;
- (id)_activeTraitsForKeyplaneSwitchKey:(id)arg1 onKeyplane:(id)arg2;
- (id)_activeTraitsForLetterKey:(id)arg1;
- (id)_disabledTraitsForKey:(id)arg1;
- (id)_disabledTraitsForKeyplaneSwitchKey:(id)arg1 onKeyplane:(id)arg2;
- (id)_disabledTraitsForLetterKey:(id)arg1;
- (id)_enabledTraitsForKey:(id)arg1;
- (id)_enabledTraitsForKeyplaneSwitchKey:(id)arg1 onKeyplane:(id)arg2;
- (id)_enabledTraitsForLetterKey:(id)arg1;
- (id)_highlightedTraitsForKey:(id)arg1;
- (id)_highlightedTraitsForKeyplaneSwitchKey:(id)arg1 onKeyplane:(id)arg2;
- (id)_highlightedTraitsForLetterKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })_secondaryTextOffsetForKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })_textOffsetForKey:(id)arg1;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)_variantTraitsForLetterKey:(id)arg1 onKeyplane:(id)arg2;
- (id)backgroundTraitsForKeyplane:(id)arg1;
- (void)configureCornersOnGeometry:(id)arg1 forKey:(id)arg2;
- (void)configureSymbolStyle:(id)arg1 forActiveKeyplaneSwitchKey:(id)arg2;
- (void)configureSymbolStyle:(id)arg1 forEnabledKeyplaneSwitchKey:(id)arg2;
- (void)configureSymbolStyles:(id)arg1 forLetterKey:(id)arg2;
- (id)disabledTextColor;
- (id)displayContentsForKey:(id)arg1;
- (id)enabledTextColor;
- (bool)forceVariantsInsideKeyplane;
- (id)highlightedKeyColor;
- (id)highlightedTextColor;
- (id)highlightedVariantKeyColor;
- (bool)includeDeleteInVariants;
- (double)keyRoundRectRadius;
- (double)letterKeyFontSize;
- (double)letterKeyFontWeight;
- (double)letterKeySecondaryFontSize;
- (double)letterKeyTwoLineFontSize;
- (double)letterKeyTwoLineFontWeight;
- (void)lowQualityTraits:(id)arg1;
- (bool)preferGlyphForClear;
- (bool)preferGlyphForDelete;
- (double)shadowRadius;
- (double)shadowYOffset;
- (bool)smallTextForSpaceAndClear;
- (double)spaceKeyFontSize;
- (bool)spaceKeyIsPressed;
- (double)textKeyFontSize;
- (double)textKeyFontWeight;
- (double)tldKeyFontSize;
- (double)tldKeyFontWeight;
- (id)variantKeyColor;

@end