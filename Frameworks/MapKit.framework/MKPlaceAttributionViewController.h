/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceAttributionViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, MKPlaceAttributionCellDelegate, MKStackingViewControllerFixedHeightAware, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    <_MKInfoCardAnalyticsDelegate> * _analyticsDelegate;
    _MKMapItemAttribution * _attribution;
    MKPlaceAttributionCell * _attributionCell;
    NSAttributedString * _attributionString;
    MKMapItem * _mapItem;
    bool  _resizableViewsDisabled;
    NSArray * _urlStrings;
}

@property (nonatomic) <_MKInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (nonatomic, retain) _MKMapItemAttribution *attribution;
@property (retain) MKPlaceAttributionCell *attributionCell;
@property (nonatomic, copy) NSAttributedString *attributionString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) bool resizableViewsDisabled;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *urlStrings;

- (void).cxx_destruct;
- (id)analyticsDelegate;
- (id)attribution;
- (id)attributionCell;
- (id)attributionString;
- (id)infoAttributionString;
- (void)infoCardThemeChanged:(id)arg1;
- (void)loadView;
- (id)mapItem;
- (void)openURL;
- (bool)resizableViewsDisabled;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setAttribution:(id)arg1;
- (void)setAttributionCell:(id)arg1;
- (void)setAttributionString:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setResizableViewsDisabled:(bool)arg1;
- (void)setUrlStrings:(id)arg1;
- (void)updateLogo;
- (id)urlStrings;
- (void)viewDidLoad;

@end
