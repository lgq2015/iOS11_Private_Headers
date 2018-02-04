/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface InternetViewController : AssistantSubUIViewController <UIScrollViewDelegate> {
    NSString * _swapDescriptionText;
    NSString * _swapSourceLabelText;
    UIImageView * cablingImageLastFrame;
    UIView * descriptionContainerView;
    UILabel * descriptionLabel;
    UIView * diagramContainerView;
    unsigned long long  internetFlow;
    UILabel * spinnerWithStatusAdjacentLabel;
    UIActivityIndicatorView * spinnerWithStatusAdjacentSpinner;
    UIView * spinnerWithStatusAdjacentView;
    UIView * tableHeaderContainerView;
}

@property (nonatomic, retain) UIImageView *cablingImageLastFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *descriptionContainerView;
@property (nonatomic, retain) UIView *diagramContainerView;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long internetFlow;
@property (nonatomic, retain) UIView *spinnerWithStatusAdjacentView;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *swapDescriptionText;
@property (nonatomic, retain) NSString *swapSourceLabelText;
@property (nonatomic, retain) UIView *tableHeaderContainerView;

- (void)addInformationalDiagramWithWANConnectedBaseProductID:(unsigned int)arg1 replacementProductID:(unsigned int)arg2;
- (void)addInternetNotWorkingUI;
- (void)addInternetWANPluginUI;
- (void)addSwapCablingUI;
- (id)cablingImageLastFrame;
- (void)dealloc;
- (id)descriptionContainerView;
- (void)determineInfoForDevice:(id)arg1 deviceDiagramInfo:(struct { unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; }*)arg2;
- (id)diagramContainerView;
- (unsigned long long)internetFlow;
- (void)loadView;
- (void)presentInternetDisconnectedUI;
- (void)presentInternetWANPluginUI;
- (void)presentSwapCablingCompleteUI;
- (void)presentSwapCablingUI;
- (void)setCablingImageLastFrame:(id)arg1;
- (void)setCommonTraitsForLabel:(id)arg1 forSize:(double)arg2;
- (void)setDescriptionContainerView:(id)arg1;
- (void)setDiagramContainerView:(id)arg1;
- (void)setInternetFlow:(unsigned long long)arg1;
- (void)setSpinnerWithStatusAdjacentView:(id)arg1;
- (void)setSwapDescriptionText:(id)arg1;
- (void)setSwapSourceLabelText:(id)arg1;
- (void)setTableHeaderContainerView:(id)arg1;
- (id)spinnerWithStatusAdjacentView;
- (void)startAnimatingCablingForView:(id)arg1 startingOpacity:(float)arg2 endingOpacity:(float)arg3 duration:(double)arg4;
- (id)swapDescriptionText;
- (id)swapSourceLabelText;
- (id)tableHeaderContainerView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
