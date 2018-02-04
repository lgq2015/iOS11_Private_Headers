/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIFirstTimeExperienceViewController : UIViewController <UITextViewDelegate> {
    NSString * _continueButtonTitle;
    <SearchUIFirstTimeExperienceDelegate> * _delegate;
    NSString * _explanationText;
    long long  _horizontalSizeClass;
    NSString * _learnMoreText;
    NSString * _privacyDetailsText;
    NSString * _privacyDetailsTitle;
    unsigned long long  _style;
    unsigned long long  _supportedDomains;
}

@property (retain) NSString *continueButtonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SearchUIFirstTimeExperienceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) NSString *explanationText;
@property (readonly) unsigned long long hash;
@property long long horizontalSizeClass;
@property (retain) NSString *learnMoreText;
@property (retain) NSString *privacyDetailsText;
@property (retain) NSString *privacyDetailsTitle;
@property unsigned long long style;
@property (readonly) Class superclass;
@property unsigned long long supportedDomains;

- (void).cxx_destruct;
- (void)continueButtonPressed;
- (id)continueButtonTitle;
- (id)delegate;
- (id)explanationText;
- (long long)horizontalSizeClass;
- (id)initWithStyle:(unsigned long long)arg1 supportedDomains:(unsigned long long)arg2 explanationText:(id)arg3 learnMoreText:(id)arg4 continueButtonTitle:(id)arg5 privacyDetailsTitle:(id)arg6 privacyDetailsText:(id)arg7;
- (bool)isPad;
- (id)learnMoreText;
- (void)makeViews;
- (id)privacyDetailsText;
- (id)privacyDetailsTitle;
- (void)remakeViewsForSizeClass:(long long)arg1;
- (void)setContinueButtonTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExplanationText:(id)arg1;
- (void)setHorizontalSizeClass:(long long)arg1;
- (void)setLearnMoreText:(id)arg1;
- (void)setPrivacyDetailsText:(id)arg1;
- (void)setPrivacyDetailsTitle:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setSupportedDomains:(unsigned long long)arg1;
- (void)showPrivacyView;
- (unsigned long long)style;
- (unsigned long long)supportedDomains;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
