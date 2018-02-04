/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceVenueInfoContentsViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol> {
    NSArray * _labels;
    <GEOMapItemVenueContents> * _venueContents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *labels;
@property (readonly) Class superclass;
@property (nonatomic, retain) <GEOMapItemVenueContents> *venueContents;

+ (bool)isVisibleWithMapItem:(id)arg1;
+ (id)venueInfoContentsViewControllerWithMapItem:(id)arg1;

- (void).cxx_destruct;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithVenueContents:(id)arg1;
- (id)labelWithTitle:(id)arg1;
- (id)labels;
- (id)rowWithLeftLabel:(id)arg1 rightLabel:(id)arg2;
- (void)setLabels:(id)arg1;
- (void)setVenueContents:(id)arg1;
- (void)updateLabelsProperties;
- (id)venueContents;
- (void)viewDidLoad;

@end
