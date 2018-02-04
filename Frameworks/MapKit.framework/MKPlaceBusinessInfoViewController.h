/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceBusinessInfoViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    _MKPlaceBusinessInfoRow * _businessInfoRow;
    MKPlaceSectionHeaderView * _headerView;
    MKMapItem * _mapItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (readonly) Class superclass;

+ (bool)mapItemHasBusinessInfoToDisplay:(id)arg1;

- (void).cxx_destruct;
- (void)_updateBusinessInfo;
- (id)infoCardChildUnactionableUIElements;
- (void)infoCardThemeChanged:(id)arg1;
- (id)mapItem;
- (void)setMapItem:(id)arg1;
- (void)viewDidLoad;

@end
