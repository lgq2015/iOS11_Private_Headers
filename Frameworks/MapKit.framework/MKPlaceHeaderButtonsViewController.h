/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceHeaderButtonsViewController : MKPlaceSectionViewController <MKETAProviderObserver, MKModuleViewControllerProtocol, MKStackingViewControllerFixedHeightAware> {
    MKPlaceSectionRowView * _buttonsContainerView;
    NSArray * _constraints;
    double  _contentAlpha;
    NSString * _currentETAString;
    <MKPlaceHeaderButtonsViewControllerDelegate> * _delegate;
    <GEOTransitLineItem> * _lineItem;
    <_MKPlaceItem> * _placeItem;
    NSAttributedString * _primaryAttributedString;
    MKPlaceHeaderButton * _primaryButton;
    unsigned long long  _primaryButtonType;
    bool  _resizableViewsDisabled;
    MKPlaceHeaderButton * _secondaryButton;
    _MKPlaceActionButtonController * _secondaryButtonController;
    MKPlaceHeaderButton * _tertiaryButton;
    _MKPlaceActionButtonController * _tertiaryButtonController;
}

@property (nonatomic) double contentAlpha;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKPlaceHeaderButtonsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOTransitLineItem> *lineItem;
@property (nonatomic, readonly) <_MKPlaceItem> *placeItem;
@property (nonatomic) unsigned long long primaryButtonType;
@property (nonatomic) bool resizableViewsDisabled;
@property (nonatomic, retain) _MKPlaceActionButtonController *secondaryButtonController;
@property (readonly) Class superclass;
@property (nonatomic, retain) _MKPlaceActionButtonController *tertiaryButtonController;

- (void).cxx_destruct;
- (void)ETAProviderUpdated:(id)arg1;
- (void)_contentSizeDidChange;
- (id)attributedStringWith:(id)arg1;
- (void)commonInit;
- (double)contentAlpha;
- (id)delegate;
- (id)directionAttributedStringWithETAString;
- (id)etaStringFor:(unsigned long long)arg1 travelTime:(double)arg2;
- (id)infoCardChildPossibleActions;
- (id)initWithLineItem:(id)arg1;
- (id)initWithPlaceItem:(id)arg1;
- (id)lineItem;
- (id)placeItem;
- (id)primaryAttributedString;
- (void)primaryButtonSelected:(id)arg1;
- (unsigned long long)primaryButtonType;
- (id)rerouteAttributedString;
- (bool)resizableViewsDisabled;
- (id)secondaryButtonController;
- (void)setConstraints;
- (void)setContentAlpha:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPrimaryButtonType:(unsigned long long)arg1;
- (void)setResizableViewsDisabled:(bool)arg1;
- (void)setSecondaryButtonController:(id)arg1;
- (void)setTertiaryButtonController:(id)arg1;
- (void)setupPrimaryButton;
- (bool)shouldStackForButtons:(id)arg1;
- (id)tertiaryButtonController;
- (id)updateButton:(id)arg1 withController:(id)arg2;
- (void)viewDidLoad;

@end
