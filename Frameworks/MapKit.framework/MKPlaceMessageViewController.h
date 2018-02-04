/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceMessageViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    <_MKInfoCardAnalyticsDelegate> * _analyticsDelegate;
    bool  _canUseMessageID;
    <_MKPlaceItem> * _placeItem;
}

@property (nonatomic) <_MKInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <_MKPlaceItem> *placeItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)analyticsDelegate;
- (id)infoCardChildPossibleActions;
- (id)initWithPlaceItem:(id)arg1;
- (void)loadRow;
- (id)placeItem;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setPlaceItem:(id)arg1;
- (void)viewDidLoad;

@end
