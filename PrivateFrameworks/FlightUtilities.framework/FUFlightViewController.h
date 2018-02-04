/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

@interface FUFlightViewController : UIViewController <FUFlightViewDelegate, MKMapViewDelegate> {
    NSString * _airlineCode;
    FUFlightView * _compactFlightView;
    <FUFlightViewControllerDelegate> * _delegate;
    unsigned long long  _displayStyle;
    NSNumber * _flightCode;
    NSArray * _flights;
    bool  _highlightCurrentFlightLeg;
    bool  _loadingFlight;
    FUFlightView * _regularFlightView;
    bool  _requiresDataLoad;
    bool  _showInfoPanel;
    NSDate * _startLoadingDate;
    bool  _viewLoaded;
}

@property (retain) NSString *airlineCode;
@property (retain) FUFlightView *compactFlightView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSNumber *flightCode;
@property (nonatomic, readonly) FUFlightView *flightView;
@property (nonatomic, retain) NSArray *flights;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlightCurrentFlightLeg;
@property (retain) FUFlightView *regularFlightView;
@property (nonatomic) long long selectedFlight;
@property (nonatomic) long long selectedLeg;
@property (nonatomic) bool showInfoPanel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addFittingView:(id)arg1;
- (id)airlineCode;
- (void)awakeFromNib;
- (void)commonInit;
- (id)compactFlightView;
- (void)fadeLayer:(id)arg1 visible:(bool)arg2 completionBlock:(id /* block */)arg3;
- (id)flightCode;
- (id)flightView;
- (void)flightView:(id)arg1 didSelectLeg:(long long)arg2 ofFlight:(long long)arg3;
- (id)flights;
- (void)hideView:(id)arg1;
- (bool)highlightCurrentFlightLeg;
- (id)init;
- (id)initWithFlightCode:(unsigned long long)arg1 airlineCode:(id)arg2;
- (id)initWithFlights:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSFFlight:(id)arg1 leg:(long long)arg2 style:(unsigned long long)arg3 delegate:(id)arg4;
- (id)initWithSFFlights:(id)arg1;
- (void)loadFlightWithFlightCode:(id)arg1 airlineCode:(id)arg2 date:(id)arg3;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)regularFlightView;
- (long long)selectedFlight;
- (long long)selectedLeg;
- (void)setAirlineCode:(id)arg1;
- (void)setCompactFlightView:(id)arg1;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (void)setFlightCode:(id)arg1;
- (void)setFlights:(id)arg1;
- (void)setFlights:(id)arg1 selectedFlight:(long long)arg2 selectedLeg:(long long)arg3;
- (void)setHighlightCurrentFlightLeg:(bool)arg1;
- (void)setNoBackground;
- (void)setRegularFlightView:(id)arg1;
- (void)setSelectedFlight:(long long)arg1;
- (void)setSelectedLeg:(long long)arg1;
- (void)setShowInfoPanel:(bool)arg1;
- (void)showErrorView;
- (void)showFlightView;
- (bool)showInfoPanel;
- (void)showLoadingView;
- (void)showView:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
