/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIColor : NSObject <LPCSSText, LPHTMLAttributeText, NSCopying, NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, TSDPathPainter, UIItemProviderReading, UIItemProviderWriting> {
    NSString * _cachedStyleString;
    NSString * _systemColorName;
}

@property (nonatomic, readonly) struct CGColor { }*CGColor;
@property (nonatomic, readonly) CIColor *CIColor;
@property (nonatomic, readonly) double MP_lightness;
@property (setter=_icaxSetCachedApproximateColorDescription:, nonatomic, retain) NSString *_icaxCachedApproximateColorDescription;
@property (setter=_pkaxSetCachedApproximateColorDescription:, nonatomic, retain) NSString *_pkaxCachedApproximateColorDescription;
@property (nonatomic, readonly) double alpha;
@property (nonatomic, readonly) double blue;
@property (nonatomic, readonly) double brightness;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double green;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double hue;
@property (nonatomic, readonly) NSString *icaxApproximateColorDescription;
@property (nonatomic, readonly) NSString *icaxDescriptionWithLuma;
@property (nonatomic, readonly) double icaxLuma;
@property (nonatomic, readonly, copy) UIColor *invert;
@property (nonatomic, readonly) NSString *pkaxApproximateColorDescription;
@property (nonatomic, readonly) NSString *pkaxDescriptionWithLuma;
@property (nonatomic, readonly) double pkaxLuma;
@property (getter=px_isTransparent, nonatomic, readonly) bool px_transparent;
@property (nonatomic, readonly) double red;
@property (nonatomic, readonly) double saturation;
@property (readonly) Class superclass;
@property (getter=_systemColorName, setter=_setSystemColorName:, nonatomic, retain) NSString *systemColorName;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)__halfTransparentBlackColor;
+ (id)__halfTransparentWhiteColor;
+ (id)_accessibilityButtonShapesBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesBackgroundColorOnLight;
+ (id)_accessibilityButtonShapesDisabledBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnLight;
+ (id)_accessibilityDarkenedColorForColor:(id)arg1;
+ (id)_alternateSystemInteractionTintColor;
+ (id)_barHairlineShadowColor;
+ (id)_barStyleBlackHairlineShadowColor;
+ (id)_composedColorFromSourceColor:(id)arg1 destinationColor:(id)arg2 tintColor:(id)arg3 alpha:(double)arg4;
+ (id)_dimmingViewColor;
+ (id)_disambiguated_due_to_CIImage_colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)_disambiguated_due_to_CIImage_colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)_externalBarBackgroundColor;
+ (id)_externalSystemDarkGrayColor;
+ (id)_externalSystemExtraDarkGrayColor;
+ (id)_externalSystemGrayColor;
+ (id)_externalSystemMidGrayColor;
+ (id)_externalSystemSuperDarkGrayColor;
+ (id)_grayColorForFontSize:(double)arg1;
+ (double)_luminanceWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)_markedTextBackgroundColor;
+ (id)_markedTextBorderColor;
+ (id)_systemColorForColor:(id)arg1 withName:(id)arg2;
+ (id)_systemColorWithName:(id)arg1;
+ (id)_systemDestructiveTintColor;
+ (id)_systemInteractionTintColor;
+ (id)_systemMidGrayTintColor;
+ (id)_systemSelectedColor;
+ (id)_translucentPaperTextureColor;
+ (id)_vibrantDarkFillDodgeColor;
+ (id)_vibrantLightDividerBurnColor;
+ (id)_vibrantLightDividerDarkeningColor;
+ (id)_vibrantLightFillBurnColor;
+ (id)_vibrantLightFillDarkeningColor;
+ (id)_vibrantLightSectionDelimiterDividerBurnColor;
+ (id)_vibrantLightSectionDelimiterDividerDarkeningColor;
+ (id)_webContentBackgroundColor;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)blueColor;
+ (id)brownColor;
+ (id)classFallbacksForKeyedArchiver;
+ (id)clearColor;
+ (id)colorNamed:(id)arg1;
+ (id)colorNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithCIColor:(id)arg1;
+ (id)colorWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)cyanColor;
+ (id)darkGrayColor;
+ (id)externalSystemGreenColor;
+ (id)externalSystemRedColor;
+ (id)externalSystemTealColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)infoTextOverPinStripeTextColor;
+ (void)initialize;
+ (id)insertionPointColor;
+ (id)lightGrayColor;
+ (id)lightTextColor;
+ (id)magentaColor;
+ (id)newObjectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)noContentDarkGradientBackgroundColor;
+ (id)noContentLightGradientBackgroundColor;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)orangeColor;
+ (id)pinStripeColor;
+ (id)purpleColor;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)redColor;
+ (id)scrollViewTexturedBackgroundColor;
+ (id)sectionHeaderBorderColor;
+ (id)sectionHeaderOpaqueBackgroundColor;
+ (id)sectionListBorderColor;
+ (id)selectionGrabberColor;
+ (id)selectionHighlightColor;
+ (bool)supportsSecureCoding;
+ (id)systemBlueColor;
+ (id)systemDarkBlueColor;
+ (id)systemDarkGreenColor;
+ (id)systemDarkOrangeColor;
+ (id)systemDarkPinkColor;
+ (id)systemDarkRedColor;
+ (id)systemDarkTealColor;
+ (id)systemDarkYellowColor;
+ (id)systemGrayColor;
+ (id)systemGreenColor;
+ (id)systemMidGrayColor;
+ (id)systemOrangeColor;
+ (id)systemPinkColor;
+ (id)systemPurpleColor;
+ (id)systemRedColor;
+ (id)systemTealColor;
+ (id)systemYellowColor;
+ (id)tableCellBlueTextColor;
+ (id)tableCellGrayTextColor;
+ (id)tableCellGroupedBackgroundColorLegacyWhite;
+ (id)tableCellValue1BlueColor;
+ (id)tableCellValue2BlueColor;
+ (id)tableCellbackgroundColorCarPlay;
+ (id)tableGroupedSeparatorLightColor;
+ (id)tableGroupedTopShadowColor;
+ (id)tablePlainHeaderFooterBackgroundColor;
+ (id)tablePlainHeaderFooterFloatingBackgroundColor;
+ (id)tableSelectionColor;
+ (id)tableSelectionGradientEndColor;
+ (id)tableSelectionGradientStartColor;
+ (id)tableSeparatorDarkColor;
+ (id)tableSeparatorLightColor;
+ (id)tableShadowColor;
+ (id)textFieldAtomBlueColor;
+ (id)textFieldAtomPurpleColor;
+ (id)underPageBackgroundColor;
+ (id)viewFlipsideBackgroundColor;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)yellowColor;

- (void).cxx_destruct;
- (struct CGColor { }*)CGColor;
- (id)CIColor;
- (id)_colorBlendedWithColor:(id)arg1;
- (id)_colorBlendedWithColor:(id)arg1 compositingFilter:(id)arg2;
- (id)_colorBlendedWithColors:(id)arg1;
- (double)_colorDifferenceFromColor:(id)arg1;
- (bool)_getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4;
- (bool)_getWhite:(double*)arg1 alpha:(double*)arg2;
- (bool)_isDeepColor;
- (bool)_isSimilarToColor:(id)arg1 withinPercentage:(double)arg2;
- (double)_luminance;
- (double)_luminanceDifferenceFromColor:(id)arg1;
- (void)_setSystemColorName:(id)arg1;
- (id)_systemColorName;
- (id)_ui_swipeActionHighlightedColor;
- (double)alphaComponent;
- (struct CGColor { }*)cgColor;
- (Class)classForCoder;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4;
- (bool)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4;
- (bool)getWhite:(double*)arg1 alpha:(double*)arg2;
- (unsigned long long)hash;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithCIColor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isPatternColor;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (void)registerLoadHandlersToItemProvider:(id)arg1;
- (void)set;
- (void)setFill;
- (void)setStroke;
- (id)styleString;
- (id)writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

+ (id)AV_indicatorBackgroundColor;
+ (id)AV_indicatorForegroundColor;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)_cnui_actionBackgroundColor;
+ (id)_cnui_actionHighlightedBackgroundColor;
+ (id)_cnui_actionTitleColor;
+ (id)ab_colorWithR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4;
+ (id)cardBackgroundInPopoverColor;
+ (id)cardCellBackgroundColor;
+ (id)cardCellReadonlyBackgroundColor;
+ (id)cardCellSeparatorColor;
+ (id)cardLabelReadonlyTextColor;
+ (id)cardLabelSuggestedTextColor;
+ (id)cardValueReadonlyTextColor;
+ (id)cardValueSuggestedTextColor;
+ (id)cardValueTextColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

+ (id)tableViewBackgroundColorOpaque;

- (double)blueComponent;
- (double)brightnessComponent;
- (id)burnWithColor:(id)arg1;
- (double)differenceFromColor:(id)arg1;
- (double)greenComponent;
- (double)hueComponent;
- (bool)isGreenOrYellow;
- (double)luminance;
- (id)overlayWithColor:(id)arg1;
- (double)redComponent;
- (double)saturationComponent;
- (id)soverWithColor:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_colorForTransitLine:(id)arg1;
+ (id)_mapkit_userLocationAccuracyRingFillColor;
+ (id)_mapkit_userLocationAccuracyRingStrokeColor;
+ (id)_mapkit_userLocationAccuracyRingStrokeColorSatellite;

- (id)_mapkit_blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (bool)_mapkit_getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4;
- (bool)_mapkit_isWhite;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)colorWithITColor:(struct ITColor { double x1; double x2; double x3; double x4; })arg1;

- (struct ITColor { double x1; double x2; double x3; double x4; })ITColor;
- (bool)MP_isArtworkColorAnalyzerLightColorForAlgorithm:(long long)arg1;
- (double)MP_lightness;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)pu_colorWithIncreasedAlpha;
- (id)pu_colorWithIncreasedBrightness;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

+ (id)_ql_markupGrayColor;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (id)_sf_defaultWebContentBackgroundColor;
+ (id)ss_browserSystemColor;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)color:(double)arg1 :(double)arg2 :(double)arg3 :(double)arg4;
+ (id)scn_colorWithC3DColor:(const struct C3DColor4 { union { float x_1_1_1[4]; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; } x1; }*)arg1;

- (double)a;
- (double)b;
- (double)g;
- (double)r;
- (struct C3DColor4 { union { float x_1_1_1[4]; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; } x1; })scn_C3DColorIgnoringColorSpace:(bool)arg1 success:(bool*)arg2;

// Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit

+ (id)colorWithComponentRGBA:(struct { float x1; float x2; float x3; float x4; })arg1;
+ (id)colorWithVectorRGBA;

- (double)alpha;
- (double)blue;
- (struct { float x1; float x2; float x3; float x4; })componentRGBA;
- (double)green;
- (double)red;
- (void)vectorRGBA;

// Image: /System/Library/Frameworks/iAd.framework/iAd

+ (id)_iAd_colorWithRGBA:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities

- (double)_atvaccessibilityAlphaComponent;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

+ (struct CGColorSpace { }*)_getCIELABColorSpace;
+ (id)akBoxBorderColor;
+ (id)akBubbleFillColor;
+ (id)akButtonHoverStateColor;
+ (id)akColorPickerBlue;
+ (id)akColorPickerGreen;
+ (id)akColorPickerOrange;
+ (id)akColorPickerPurple;
+ (id)akColorPickerRed;
+ (id)akColorPickerYellow;
+ (id)akColorWithCIColor:(id)arg1;
+ (id)akColorWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)akColorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)akRowSeparatorColor;
+ (id)akSystemBlueColor;
+ (id)akSystemGreenColor;
+ (id)akSystemPinkColor;
+ (id)akSystemPurpleColor;
+ (id)akSystemRedColor;
+ (id)akSystemYellowColor;
+ (id)im_colorWithSRGBDescription:(id)arg1;

- (double)akAlphaComponent;
- (id)akBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (double)akDistanceFromColor:(id)arg1;
- (bool)akHasHueEqualToColor:(id)arg1 withTolerance:(double)arg2;
- (bool)akIsEqualToColor:(id)arg1;
- (id)colorUsingSRGBColorSpace;
- (void)getL:(double*)arg1 a:(double*)arg2 b:(double*)arg3;

// Image: /System/Library/PrivateFrameworks/AppPredictionWidget.framework/AppPredictionWidget

- (id)_apw_colorByMultiplyingByFactor:(double)arg1;
- (id)_apw_colorByMultiplyingByRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (double)alpha;
- (int)colorSpaceModel;

// Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI

+ (id)ak_colorWithServerRGBRepresentation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo

+ (id)CertUIVerifiedColor;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)colorByBlendingWithColor:(id)arg1;
- (id)colorByBlendingWithColor:(id)arg1 withFraction:(double)arg2;

// Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit

- (id)JSONObjectRepresentation;
- (id)initWithJSONObjectRepresentation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

+ (id)_cnui_colorFromData:(id)arg1;

- (id)_cnui_colorData;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit

+ (id)cc_controlBackgroundEffectOverlayColor;
+ (id)cc_reducedTransparencyControlBackgroundColor;

- (id)ccuiAccessibilityDarkColorVariant;

// Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport

+ (id)colorWithHexValue:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore

+ (id)_doc_safeTintColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI

- (id)invert;

// Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI

+ (id)fmfOrangeColor;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (id)fu_platterBlueColor;
+ (id)fu_platterDaliTealColor;
+ (id)fu_platterGreenColor;
+ (id)fu_platterOrangeColor;
+ (id)fu_platterPinkColor;
+ (id)fu_platterPurpleColor;
+ (id)fu_platterRedColor;
+ (id)fu_platterTealBlueColor;
+ (id)fu_platterWhiteColor;
+ (id)fu_platterYellowColor;
+ (id)fu_systemBlueColor;
+ (id)fu_systemGreenColor;
+ (id)fu_systemGreyColor;
+ (id)fu_systemMintColor;
+ (id)fu_systemOrangeColor;
+ (id)fu_systemPinkColor;
+ (id)fu_systemPurpleColor;
+ (id)fu_systemRedColor;
+ (id)fu_systemTealBlueColor;
+ (id)fu_systemTextGreyColor;
+ (id)fu_systemYellowColor;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (double)_gkLuminance;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)hk_activityExerciseGoalLineColor;
+ (id)hk_activityExerciseGoalMetGradientBottomColor;
+ (id)hk_activityExerciseGoalMetGradientTopColor;
+ (id)hk_activityExerciseGoalMissedGradientBottomColor;
+ (id)hk_activityExerciseGoalMissedGradientTopColor;
+ (id)hk_activityGradientBottomColor;
+ (id)hk_activityGradientTopColor;
+ (id)hk_activityKeyColor;
+ (id)hk_activityMoveGoalLineColor;
+ (id)hk_activityMoveGoalMetGradientBottomColor;
+ (id)hk_activityMoveGoalMetGradientTopColor;
+ (id)hk_activityMoveGoalMissedGradientBottomColor;
+ (id)hk_activityMoveGoalMissedGradientTopColor;
+ (id)hk_activityStandGoalLineColor;
+ (id)hk_activityStandGoalMetGradientBottomColor;
+ (id)hk_activityStandGoalMetGradientTopColor;
+ (id)hk_activityStandGoalMissedGradientBottomColor;
+ (id)hk_activityStandGoalMissedGradientTopColor;
+ (id)hk_appKeyColor;
+ (id)hk_bodyMeasurementsGradientBottomColor;
+ (id)hk_bodyMeasurementsGradientTopColor;
+ (id)hk_bodyMeasurementsKeyColor;
+ (id)hk_chartAxisLabelColor;
+ (id)hk_chartBackgroundColor;
+ (id)hk_chartDefaultCurrentValueColor;
+ (id)hk_chartLightGrayGraphColor;
+ (id)hk_chartLightGrayTextColor;
+ (id)hk_darkInfoButtonBackgroundColor;
+ (id)hk_darkInfoButtonGlyphColor;
+ (id)hk_defaultGradientBottomColor;
+ (id)hk_defaultGradientTopColor;
+ (id)hk_defaultInfoButtonBackgroundColor;
+ (id)hk_defaultInfoButtonGlyphColor;
+ (id)hk_defaultPrimaryTextColor;
+ (id)hk_defaultSecondaryTextColor;
+ (id)hk_mindfulnessGradientBottomColor;
+ (id)hk_mindfulnessGradientTopColor;
+ (id)hk_mindfulnessKeyColor;
+ (id)hk_nutritionGradientBottomColor;
+ (id)hk_nutritionGradientTopColor;
+ (id)hk_nutritionKeyColor;
+ (id)hk_randomColor;
+ (id)hk_reproductiveHealthGradientBottomColor;
+ (id)hk_reproductiveHealthGradientTopColor;
+ (id)hk_reproductiveHealthKeyColor;
+ (id)hk_resultsGradientBottomColor;
+ (id)hk_resultsGradientTopColor;
+ (id)hk_resultsKeyColor;
+ (id)hk_sleepAsleepGradientBottomColor;
+ (id)hk_sleepAsleepGradientTopColor;
+ (id)hk_sleepGradientBottomColor;
+ (id)hk_sleepGradientTopColor;
+ (id)hk_sleepKeyColor;
+ (id)hk_vitalsGradientBottomColor;
+ (id)hk_vitalsGradientTopColor;
+ (id)hk_vitalsKeyColor;
+ (id)hk_workoutChartGradientBottomColor;
+ (id)hk_workoutChartGradientTopColor;
+ (id)hk_workoutGradientBottomColor;
+ (id)hk_workoutGradientTopColor;
+ (id)hk_workoutKeyColor;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)hu_alarmsBackgroundColor;
+ (id)hu_alarmsCellAccessoryColor;
+ (id)hu_alarmsCellHighlightColor;
+ (id)hu_alarmsDisabledTextColor;
+ (id)hu_alarmsForegroundColor;
+ (id)hu_alarmsPrimaryColor;
+ (id)hu_alarmsPrimaryTextColor;
+ (id)hu_alarmsSwitchTintColor;
+ (id)hu_keyColor;
+ (id)hu_tableViewGroupedBackgroundColor;
+ (id)hu_vibrantGreenTextColor;
+ (id)hu_vibrantRedTextColor;

// Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation

- (id)_lp_CSSText;
- (id)_lp_CSSTextHexFormat;
- (id)_lp_HTMLAttributeText;

// Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI

+ (id)MCUIVerifiedColor;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

+ (id)blTableviewBackgroundColor;
+ (id)colorFromPlist:(id)arg1;
+ (id)colorWithHexString:(id)arg1;
+ (id)iMovieBlueColor;
+ (id)iMovieDisabledColor;
+ (id)iMoviePluginTintColor;
+ (id)iMovieTintColor;
+ (id)popoverBackgroundColor;
+ (id)randomColor;

- (struct CGColor { }*)_CreateCIELABColor;
- (void)_getCIEL:(double*)arg1 a:(double*)arg2 b:(double*)arg3;
- (void)_getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3;
- (void)_getX:(double*)arg1 y:(double*)arg2 z:(double*)arg3;
- (int)colorModel;
- (id)hexString;
- (id)initWithHexString:(id)arg1;
- (bool)isReallySimilarToColor:(id)arg1;
- (bool)isSimilarToColor:(id)arg1;
- (double)perceptualLuminance;
- (id)plistRepresentation;
- (double)whiteComponent;

// Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI

+ (id)mtui_backgroundColor;
+ (id)mtui_cellAccessoryColor;
+ (id)mtui_cellHighlightColor;
+ (id)mtui_cellSeparatorColor;
+ (id)mtui_disabledButtonTintColor;
+ (id)mtui_disabledStartButtonTintColor;
+ (id)mtui_disabledTextColor;
+ (id)mtui_foregroundColor;
+ (id)mtui_lapResetButtonTextColor;
+ (id)mtui_lapResetButtonTintColor;
+ (id)mtui_pauseButtonTextColor;
+ (id)mtui_pauseButtonTintColor;
+ (id)mtui_primaryColor;
+ (id)mtui_primaryTextColor;
+ (id)mtui_quaternaryColor;
+ (id)mtui_secondaryColor;
+ (id)mtui_secondaryTextColor;
+ (id)mtui_sleepColor;
+ (id)mtui_startResumeButtonTextColor;
+ (id)mtui_startResumeButtonTintColor;
+ (id)mtui_stopButtonTextColor;
+ (id)mtui_stopButtonTintColor;
+ (id)mtui_stopwatchMajorTickMarkColor;
+ (id)mtui_stopwatchMinorTickMarkColor;
+ (id)mtui_switchTintColor;
+ (id)mtui_tertiaryColor;
+ (id)mtui_tintColor;
+ (id)mtui_wakeColor;
+ (id)mtui_worldClockMapLandColor;

// Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer

+ (id)colorWithWebColor:(id)arg1;
+ (id)colorWithWebColorName:(id)arg1;
+ (id)colorWithWebHexTriplet:(id)arg1;
+ (id)colorWithWebRgb:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion

- (id)brightenBy:(double)arg1;
- (id)colorByBoostingSaturation:(double)arg1 lightness:(double)arg2;

// Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout

+ (id)nfl_accessoryColorForTextColor:(id)arg1 backgroundColor:(id)arg2;
+ (long long)nfl_binForColor:(id)arg1;
+ (id)nfl_blue;
+ (id)nfl_colorBetweenGradientColors:(id)arg1 andColor:(id)arg2 atPosition:(double)arg3;
+ (id)nfl_colorByInterpolatingFromColor:(id)arg1 toColor:(id)arg2 percent:(double)arg3;
+ (id)nfl_colorComponentsFromString:(id)arg1;
+ (id)nfl_colorWithHexString:(id)arg1;
+ (id)nfl_defaultSystemTintColor;
+ (id)nfl_editorialPicksHeadercolor;
+ (id)nfl_forYouStoriesHeadercolor;
+ (id)nfl_gray;
+ (id)nfl_green;
+ (id)nfl_likeDislikeGlyphCellColor;
+ (id)nfl_plusDEffectWithForegroundColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)nfl_plusLEffectWithForegroundColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)nfl_red;
+ (id)nfl_saveGlyphCellColor;
+ (id)nfl_savedStoriesHeadercolor;
+ (id)nfl_sponsoredStoryTextcolor;
+ (id)nfl_subscriptionGlyphColorForTextColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)nfl_subscriptionOnlyStickercolor;
+ (id)nfl_subscriptionOnlyTextcolor;
+ (id)nfl_topStoriesHeadercolor;
+ (id)nfl_topicColorsArray;
+ (id)nfl_trendingStoriesHeadercolor;
+ (id)nfl_yellow;

- (void)_getHSBA:(id /* block */)arg1;
- (void)_getRGBA:(id /* block */)arg1;
- (double)alpha;
- (double)blue;
- (double)brightness;
- (double)green;
- (double)hue;
- (bool)isAboutEqualToColor:(id)arg1;
- (bool)isEqualToColor:(id)arg1;
- (id)nfl_colorOrBlackIfTooBright;
- (id)nfl_description;
- (void)print;
- (double)red;
- (double)saturation;

// Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI

+ (id)nu_defaultSystemTintColor;

- (id)nu_colorToCSSRGBA;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (struct UIColor { Class x1; }*)ICActiveTintedSelectionColor;
+ (id)ICDarkenedTintColor;
+ (struct UIColor { Class x1; }*)ICDrawingToolsBottomMarginColor;
+ (struct UIColor { Class x1; }*)ICExtractedDocumentViewControllerBackgroundColor;
+ (struct UIColor { Class x1; }*)ICFindInNoteHighlightColor;
+ (struct UIColor { Class x1; }*)ICGrayColor;
+ (struct UIColor { Class x1; }*)ICGrayTodoButtonColor;
+ (struct UIColor { Class x1; }*)ICGrayTodoButtonHighlightColor;
+ (struct UIColor { Class x1; }*)ICLearnMoreButtonPressedColor;
+ (struct UIColor { Class x1; }*)ICLearnMoreButtonUnpressedColor;
+ (struct UIColor { Class x1; }*)ICListStatusIndicatorColor;
+ (struct UIColor { Class x1; }*)ICLockIconColor;
+ (struct UIColor { Class x1; }*)ICLockIconColorList;
+ (struct UIColor { Class x1; }*)ICNoteEditorToolbarColor;
+ (struct UIColor { Class x1; }*)ICNotesListFolderIconColor;
+ (struct UIColor { Class x1; }*)ICRedColor;
+ (struct UIColor { Class x1; }*)ICSystemTintColor;
+ (struct UIColor { Class x1; }*)ICTintColor;
+ (struct UIColor { Class x1; }*)ICTintedSelectionColor;
+ (struct UIColor { Class x1; }*)ICYellowTodoButtonColor;
+ (struct UIColor { Class x1; }*)ICYellowTodoButtonHighlightColor;
+ (struct UIColor { Class x1; }*)ic_colorFromString:(id)arg1;
+ (struct UIColor { Class x1; }*)ic_colorWith256Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (struct UIColor { Class x1; }*)ic_colorWith256Red:(double)arg1 green:(double)arg2 blue:(double)arg3 unitAlpha:(double)arg4;
+ (id)ic_darkerAccessibilityColorForColor:(id)arg1;
+ (id)icaxHueNameForValue:(double)arg1;
+ (id)notesAppYellowColor;
+ (id)notesDefaultTextColor;
+ (struct UIColor { Class x1; }*)preferredDefaultFontColor;

- (id)_icaxCachedApproximateColorDescription;
- (id)_icaxColorDescriptionForHue:(id)arg1 saturation:(id)arg2 lightness:(id)arg3;
- (id)_icaxLightnessHueFormatString;
- (id)_icaxLightnessSaturationHueFormatString;
- (id)_icaxSaturationHueFormatString;
- (void)_icaxSetCachedApproximateColorDescription:(id)arg1;
- (id)ic_colorString;
- (id)icaxApproximateColorDescription;
- (id)icaxDescriptionWithLuma;
- (double)icaxHue;
- (id)icaxHueName;
- (id)icaxLightnessModifier;
- (double)icaxLuma;
- (double)icaxSaturation;
- (id)icaxSaturationModifier;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tsu_darkInsertSwatchBackgroundColor;
+ (id)tsu_insertPaneBackgroundColor;
+ (id)tsu_keynoteCanvasBackgroundColor;
+ (id)tsu_keynoteCanvasDarkBackgroundColor;
+ (id)tsu_keynoteDefaultApplicationToolbarTitleColor;
+ (id)tsu_keynoteNavigationBarBackgroundColor;
+ (id)tsu_keynoteNavigatorBackgroundColor;
+ (id)tsu_keynoteNavigatorDividerColor;
+ (id)tsu_keynoteToolbarTintColor;
+ (id)tsu_navigatorSelectionFocusedHighlightColor;
+ (id)tsu_navigatorSelectionHighlightColor;
+ (id)tsu_progressViewTintColor;
+ (id)tsu_progressViewTrackTintColor;
+ (id)tsu_rowItemDividersColor;
+ (id)tsu_sidebarActiveTintColor;
+ (id)tsu_sidebarBackgroundColor;
+ (id)tsu_sidebarCellBackgroundColor;
+ (id)tsu_sidebarInactiveCellTintColor;
+ (id)tsu_sidebarInactiveTintColor;
+ (id)tsu_sidebarNavigationBarBackgroundColor;
+ (id)tsu_sidebarNavigationBarTintColor;
+ (id)tsu_sidebarNavigationBarTitleColor;
+ (id)tsu_sidebarPlaybackButtonTintColor;
+ (id)tsu_sidebarPressedStateColor;
+ (id)tsu_sidebarPrimaryContentColor;
+ (id)tsu_sidebarSecondaryContentColor;
+ (id)tsu_sidebarSegmentedCellTintColor;
+ (id)tsu_sidebarSegmentedControlTintColor;
+ (id)tsu_sidebarTableViewCellTintColor;
+ (id)tsu_sidebarTopTabTextColor;
+ (id)tsu_sliderMaximumTrackTintColor;
+ (id)tsu_sliderMinimumTrackTintColor;
+ (id)tsu_sliderThumbTintColor;
+ (id)tsu_switchOffOutlineColor;
+ (id)tsu_switchOnTintColor;
+ (id)tsu_switchTintColor;
+ (id)tsu_tableViewCellDarkBlueTextColor;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (id)colorWithPKColor:(id)arg1;
+ (id)pkui_osloErrorColor;

// Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit

+ (id)pkaxHueNameForValue:(double)arg1;

- (id)_pkaxCachedApproximateColorDescription;
- (id)_pkaxColorDescriptionForHue:(id)arg1 saturation:(id)arg2 lightness:(id)arg3;
- (id)_pkaxLightnessHueFormatString;
- (id)_pkaxLightnessSaturationHueFormatString;
- (id)_pkaxSaturationHueFormatString;
- (void)_pkaxSetCachedApproximateColorDescription:(id)arg1;
- (id)pkaxApproximateColorDescription;
- (id)pkaxDescriptionWithLuma;
- (double)pkaxHue;
- (id)pkaxHueName;
- (id)pkaxLightnessModifier;
- (double)pkaxLuma;
- (double)pkaxSaturation;
- (id)pkaxSaturationModifier;

// Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI

+ (id)pr_backgroundColor;
+ (id)pr_darkAccentColor;
+ (id)pr_lightAccentColor;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)alternateSelectedControlColor;

- (bool)px_isTransparent;

// Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences

+ (id)ps_colorBetweenColor:(id)arg1 andColor:(id)arg2 linearProgress:(double)arg3;

// Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI

+ (id)_remoteUI_colorWithString:(id)arg1;
+ (id)_remoteUI_colorWithString:(id)arg1 defaultColor:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_colorWithRGBColorComponents:(id)arg1;
+ (id)safari_colorWithSerializedColorData:(id)arg1;

- (id)safari_colorDataForSerialization;
- (id)safari_rgbColorComponents;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

- (id)initWithJSONObject:(id)arg1 andVersion:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

+ (id)siriui_blendEffectColor;
+ (id)siriui_colorWithAceColor:(id)arg1;
+ (id)siriui_glyphColor;
+ (id)siriui_highlightColor;
+ (id)siriui_insertionPointColor;
+ (id)siriui_keylineColor;
+ (id)siriui_keylineColorStark;
+ (id)siriui_lightHighlightColor;
+ (id)siriui_lightInsertionPointColor;
+ (id)siriui_lightKeylineColor;
+ (id)siriui_lightMaskingColor;
+ (id)siriui_lightMaskingHighlightColor;
+ (id)siriui_lightTextColor;
+ (id)siriui_lightTextHighlightColor;
+ (id)siriui_linkTextColor;
+ (id)siriui_maskingColor;
+ (id)siriui_maskingHighlightColor;
+ (id)siriui_platterGlyphColor;
+ (id)siriui_platterInsertionPointColor;
+ (id)siriui_platterKeylineColor;
+ (id)siriui_platterLinkTextColor;
+ (id)siriui_platterMaskingColor;
+ (id)siriui_platterMaskingHighlightColor;
+ (id)siriui_platterOverlayBackgroundColor;
+ (id)siriui_platterSemiTransparentTextColor;
+ (id)siriui_platterTextColor;
+ (id)siriui_platterTextHighlightColor;
+ (id)siriui_sashOverlayBackgroundColor;
+ (id)siriui_semiTransparentTextColor;
+ (id)siriui_snippetBackgroundColor;
+ (id)siriui_textColor;
+ (id)siriui_textHighlightColor;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

- (bool)sb_isGrayscale;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

- (bool)skui_isOpaque;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

+ (id)colorInDeviceRGBColorSpaceWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)randomColor;
+ (id)tsk_segmentedControlTintColor;
+ (id)tsk_sheetBackgroundColor;

- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)grayscaleColor;
- (id)initInDeviceRGBColorSpaceWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)invertedColor;
- (bool)isOpaque;
- (double)luminance;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)checkerboardColorWithColor:(id)arg1 andColor:(id)arg2 squareSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)grayCheckerboardColor;
+ (id)tableViewCellDarkBlueTextColor;
+ (id)transparentGrayCheckerboardColor;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

+ (id)tvmlkit_keyColor;

- (id)blendWithColor:(id)arg1 percentage:(double)arg2;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

- (id)colorByAlteringOpacityToPercentage:(float)arg1;
- (id)darkerColorByPercentage:(float)arg1;
- (id)tpImageFromColor;

// Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI

+ (id)wlk_keyColor;
+ (id)wlk_textColor;
+ (id)wlk_textColorForDarkMode;
+ (id)wlk_textModalColor;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

+ (id)colorWithStyleString:(id)arg1;

- (id)initWithStyleString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsu_darkInsertSwatchBackgroundColor;
+ (id)tsu_darkToolbarBackgroundColor;
+ (id)tsu_darkToolbarTintColor;
+ (id)tsu_darkToolbarTitleColor;
+ (id)tsu_insertPaneBackgroundColor;
+ (id)tsu_keynoteCanvasBackgroundColor;
+ (id)tsu_keynoteCanvasDarkBackgroundColor;
+ (id)tsu_keynoteNavigatorBackgroundColor;
+ (id)tsu_keynoteNavigatorDividerColor;
+ (id)tsu_lightToolbarBackgroundColor;
+ (id)tsu_mediaBrowserNavigationBarTintColor;
+ (id)tsu_mediaBrowserNavigationBarTitleColor;
+ (id)tsu_mediaBrowserPrimaryContentColor;
+ (id)tsu_mediaBrowserSecondaryContentColor;
+ (id)tsu_navigatorSelectionFocusedHighlightColor;
+ (id)tsu_navigatorSelectionHighlightColor;
+ (id)tsu_progressViewTintColor;
+ (id)tsu_progressViewTrackTintColor;
+ (id)tsu_rowItemDividersColor;
+ (id)tsu_sidebarActiveTintColor;
+ (id)tsu_sidebarBackgroundColor;
+ (id)tsu_sidebarCellBackgroundColor;
+ (id)tsu_sidebarInactiveCellTintColor;
+ (id)tsu_sidebarInactiveTintColor;
+ (id)tsu_sidebarNavigationBarBackgroundColor;
+ (id)tsu_sidebarNavigationBarTintColor;
+ (id)tsu_sidebarNavigationBarTitleColor;
+ (id)tsu_sidebarPlaybackButtonTintColor;
+ (id)tsu_sidebarPressedStateColor;
+ (id)tsu_sidebarPrimaryContentColor;
+ (id)tsu_sidebarSecondaryContentColor;
+ (id)tsu_sidebarSegmentedCellTintColor;
+ (id)tsu_sidebarSegmentedControlTintColor;
+ (id)tsu_sidebarTableViewCellTintColor;
+ (id)tsu_sidebarTopTabTextColor;
+ (id)tsu_sliderMaximumTrackTintColor;
+ (id)tsu_sliderMinimumTrackTintColor;
+ (id)tsu_sliderThumbTintColor;
+ (id)tsu_switchOffOutlineColor;
+ (id)tsu_switchOnTintColor;
+ (id)tsu_switchTintColor;
+ (id)tsu_tableViewCellDarkBlueTextColor;

// Image: /bootstrap/Library/SBInject/AnemoneColors.dylib

+ (id)_externalSystemWhiteColor;
+ (id)anem_W3CColorNames;
+ (id)anem_colorWithCSS:(id)arg1;
+ (id)anem_colorWithHSLString:(id)arg1;
+ (id)anem_colorWithHexString:(id)arg1;
+ (id)anem_colorWithRGBString:(id)arg1;
+ (id)anem_colorWithW3CNamedColor:(id)arg1;
+ (id)blackColor;
+ (id)darkTextColor;
+ (id)groupTableViewBackgroundColor;
+ (id)sectionHeaderBackgroundColor;
+ (id)tableBackgroundColor;
+ (id)tableCellBackgroundColor;
+ (id)tableCellDefaultSelectionTintColor;
+ (id)tableCellGroupedBackgroundColor;
+ (id)tableCellPlainBackgroundColor;
+ (id)whiteColor;

- (id)anem_hexStringValue;
- (id)anem_hslStringValue;
- (id)anem_rgbStringValue;
- (bool)cmr_getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4;
- (bool)cmr_getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4;

// Image: /bootstrap/Library/SBInject/Eclipse.dylib

+ (id)amberBarColor;
+ (id)amberTableColor;
+ (id)amberViewColor;
+ (id)bambooBarColor;
+ (id)bambooTableColor;
+ (id)bambooViewColor;
+ (id)changeBrightness:(id)arg1 amount:(double)arg2;
+ (id)citrusBarColor;
+ (id)citrusTableColor;
+ (id)citrusViewColor;
+ (bool)color:(id)arg1 isEqualToColor:(id)arg2 withTolerance:(double)arg3;
+ (id)colorWithHexString:(id)arg1 alpha:(int)arg2;
+ (id)crimsonBarColor;
+ (id)crimsonTableColor;
+ (id)crimsonViewColor;
+ (id)darkerColorForColor:(id)arg1;
+ (id)darkerColorForSelectionColor:(id)arg1;
+ (id)duskBarColor;
+ (id)duskTableColor;
+ (id)duskViewColor;
+ (id)eclipseBabyBlueTintColor;
+ (bool)eclipseCustomNavColorsEnabled;
+ (bool)eclipseCustomStatusbarColorsEnabled;
+ (bool)eclipseCustomTextColorsEnabled;
+ (bool)eclipseCustomThemeColorsEnabled;
+ (bool)eclipseCustomTintColorsEnabled;
+ (id)eclipseDarkOrangeTintColor;
+ (id)eclipseGreenTintColor;
+ (id)eclipseNavHexColor;
+ (id)eclipsePinkTintColor;
+ (id)eclipsePurpleTintColor;
+ (id)eclipseRedTintColor;
+ (id)eclipseSelectedNavColor;
+ (id)eclipseSelectedStatusbarTintColor;
+ (id)eclipseSelectedTableColor;
+ (id)eclipseSelectedTextColor;
+ (id)eclipseSelectedTintColor;
+ (id)eclipseSelectedViewColor;
+ (id)eclipseStatusbarHexColor;
+ (id)eclipseTextHexColor;
+ (id)eclipseThemeHexColor;
+ (id)eclipseTintHexColor;
+ (id)eclipseWhiteTintColor;
+ (id)eclipseYellowTintColor;
+ (id)getDominantColor:(id)arg1;
+ (id)grapeBarColor;
+ (id)grapeTableColor;
+ (id)grapeViewColor;
+ (id)graphiteBarColor;
+ (id)graphiteTableColor;
+ (id)graphiteViewColor;
+ (id)jungleBarColor;
+ (id)jungleTableColor;
+ (id)jungleViewColor;
+ (id)lapisBarColor;
+ (id)lapisTableColor;
+ (id)lapisViewColor;
+ (id)midnightBarColor;
+ (id)midnightTableColor;
+ (id)midnightViewColor;
+ (id)navyBarColor;
+ (id)navyTableColor;
+ (id)navyViewColor;
+ (id)nightBarColor;
+ (id)nightTableColor;
+ (id)nightViewColor;
+ (id)rosePinkBarColor;
+ (id)rosePinkTableColor;
+ (id)rosePinkViewColor;
+ (id)saffronBarColor;
+ (id)saffronTableColor;
+ (id)saffronViewColor;
+ (id)silverBarColor;
+ (id)silverTableColor;
+ (id)silverViewColor;
+ (id)skyBarColor;
+ (id)skyTableColor;
+ (id)skyViewColor;
+ (id)violetBarColor;
+ (id)violetTableColor;
+ (id)violetViewColor;
+ (id)wineBarColor;
+ (id)wineTableColor;
+ (id)wineViewColor;

- (id)eclipsePrefs;

@end
