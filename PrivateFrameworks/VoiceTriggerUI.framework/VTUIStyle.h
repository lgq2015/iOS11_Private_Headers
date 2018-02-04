/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIStyle : NSObject {
    NSString * _deviceClass;
    NSArray * _deviceImageDoneSuffixes;
    NSArray * _deviceImageIntroSuffixes;
    NSArray * _deviceStringSuffixes;
    long long  _enrollmentMode;
    bool  _isBuddy;
    bool  _isHeySiriAlwaysOn;
    bool  _isIpad;
    bool  _isLargeIpad;
    bool  _needMoreLineSpacing;
    bool  _supportSideButtonActivation;
}

@property (nonatomic) long long enrollmentMode;
@property (nonatomic) bool isBuddy;
@property (nonatomic) bool isHeySiriAlwaysOn;
@property (nonatomic) bool supportSideButtonActivation;

+ (id)sharedStyle;

- (void).cxx_destruct;
- (id)VTUIDeviceSpecificString:(id)arg1;
- (void)_createImageSuffixesForDevice;
- (void)_createStringSuffixesForDevice;
- (id)_deviceImageForBaseImageName:(id)arg1;
- (double)bottomOfContinueToNotNowFirstBaseline;
- (id)buttonTextColor;
- (double)continueButtonPaddingTop;
- (double)continueButtonTopOffset;
- (void)dealloc;
- (id)deviceDoneImage;
- (id)deviceSetupImage;
- (id)educationVideoTopGradientColor;
- (double)educationalVideoFrameHeight;
- (bool)educationalVideosSupported;
- (long long)enrollmentMode;
- (double)finishEnrollmentFromBottom;
- (double)flamesHeight;
- (double)flamesViewHeight;
- (id)footerButtonFont;
- (double)footerButtonMaximumWidth;
- (id)footerFont;
- (double)footerHorizontalPadding;
- (id)footerLabelFont;
- (double)footerSkipButtonBaselineFromBottom;
- (double)footerTextBaselineFromTop;
- (id)footerTextColor;
- (id)headerTitleFont;
- (double)headerTitleLinespacing;
- (double)horizontalPadding;
- (double)horizontalPaddingLandscape;
- (double)horizontalPaddingPortrait;
- (double)horizontalTextPadding;
- (double)imageViewTopOffset;
- (id)init;
- (bool)isBuddy;
- (bool)isGreenTeaCapableDevice;
- (bool)isHeySiriAlwaysOn;
- (double)laterButtonBaselinePadding;
- (double)minimumImageViewHeight;
- (void)orientationChanged:(id)arg1;
- (double)paddingFromTop;
- (id)placeholderImageForEducationalVideo;
- (id)primaryButtonFont;
- (double)primaryButtonHeight;
- (double)primaryButtonHorizontalInset;
- (double)radarBtnHorizontalPadding;
- (double)radarBtnVerticalPadding;
- (id)secondaryButtonFont;
- (void)setEnrollmentMode:(long long)arg1;
- (void)setIsBuddy:(bool)arg1;
- (void)setIsHeySiriAlwaysOn:(bool)arg1;
- (void)setSupportSideButtonActivation:(bool)arg1;
- (id)siriWaveformImage;
- (double)skipButtonBaselineBottomMargin;
- (double)statusLabelMinHeight;
- (double)statusLabelVerticalOffsetFromCenter;
- (double)subtitle1BaselineOffset;
- (double)subtitle2BaselineOffset;
- (id)subtitleFont;
- (bool)supportSideButtonActivation;
- (double)textOverlayLabelWidth;
- (double)textOverlayOffsetFromTop;
- (double)tickMarkHorizontalSizeRatio;
- (double)titleBaselineOffsetFromTop;
- (id)turnOnSiriContinueButtonFont;
- (double)turnOnSiriContinueButtonHeight;
- (double)turnOnSiriContinueButtonWidth;
- (double)turnOnSiriFooterOffset;
- (double)turnOnSiriHorizontalPaddingLandscape;
- (double)turnOnSiriHorizontalPaddingPortrait;
- (double)turnOnSiriImageOffsetFromTopLandscape;
- (double)turnOnSiriImageOffsetFromTopPortrait;
- (double)turnOnSiriSubtitle1BaselineOffset;
- (double)turnOnSiriSubtitle2BaselineOffset;

@end
