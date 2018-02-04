/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface StepByStepUIViewController : AssistantSubUIViewController {
    UIView * justTextContainerView;
    UILabel * justTextLabel;
    int  sbsMode;
    UILabel * spinnerWithStatusBelowLabel;
    UIActivityIndicatorView * spinnerWithStatusBelowSpinner;
    UIView * spinnerWithStatusBelowView;
    UIView * tableFooterContainerView;
    UIView * tableHeaderContainerView;
    NetTopoMiniStaticLayout * topoLayout;
    UIView * topoView;
}

@property (nonatomic, retain) UIView *justTextContainerView;
@property (nonatomic) UILabel *justTextLabel;
@property (nonatomic) int sbsMode;
@property (nonatomic, retain) UILabel *spinnerWithStatusBelowLabel;
@property (nonatomic, retain) UIActivityIndicatorView *spinnerWithStatusBelowSpinner;
@property (nonatomic, retain) UIView *spinnerWithStatusBelowView;
@property (nonatomic, retain) UIView *tableFooterContainerView;
@property (nonatomic, retain) UIView *tableHeaderContainerView;
@property (nonatomic, retain) NetTopoMiniStaticLayout *topoLayout;
@property (nonatomic, retain) UIView *topoView;

- (void)dealloc;
- (id)justTextContainerView;
- (id)justTextLabel;
- (void)loadView;
- (int)sbsMode;
- (void)setJustTextContainerView:(id)arg1;
- (void)setJustTextLabel:(id)arg1;
- (void)setSbsMode:(int)arg1;
- (void)setSpinnerWithStatusBelowLabel:(id)arg1;
- (void)setSpinnerWithStatusBelowSpinner:(id)arg1;
- (void)setSpinnerWithStatusBelowView:(id)arg1;
- (void)setTableFooterContainerView:(id)arg1;
- (void)setTableHeaderContainerView:(id)arg1;
- (void)setTopoLayout:(id)arg1;
- (void)setTopoView:(id)arg1;
- (id)spinnerWithStatusBelowLabel;
- (id)spinnerWithStatusBelowSpinner;
- (id)spinnerWithStatusBelowView;
- (void)stepByStepUpdateProgress:(id)arg1 forState:(int)arg2;
- (void)syncTopoUIForTarget:(id)arg1 andSource:(id)arg2 andNetwork:(id)arg3 connectionType:(id)arg4;
- (id)tableFooterContainerView;
- (id)tableHeaderContainerView;
- (id)topoLayout;
- (id)topoView;
- (void)viewWillAppear:(bool)arg1;

@end
