/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLPlace : NSObject <MKAnnotation, NSSecureCoding> {
    NSString * _category;
    double  _distance;
    NSString * _identifier;
    double  _latitude;
    double  _longitude;
    NSString * _name;
    NSURL * _pictureURL;
}

@property (retain) NSString *category;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double distance;
@property (readonly) unsigned long long hash;
@property (retain) NSString *identifier;
@property double latitude;
@property double longitude;
@property (retain) NSString *name;
@property (retain) NSURL *pictureURL;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)category;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)description;
- (double)distance;
- (id)encodableProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (double)latitude;
- (double)longitude;
- (id)name;
- (id)pictureURL;
- (void)setCategory:(id)arg1;
- (void)setDistance:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setName:(id)arg1;
- (void)setPictureURL:(id)arg1;
- (id)subtitle;
- (id)title;

@end
