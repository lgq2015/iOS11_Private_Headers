/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlacemark : CLPlacemark <MKAnnotation>

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic, readonly) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)countryCode;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 addressDictionary:(id)arg2;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 postalAddress:(id)arg2;
- (id)mkPostalAddressDictionary;
- (id)thoroughfare;
- (id)title;

@end
