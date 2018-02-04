/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapItemIdentifier : NSObject <NSCopying> {
    GEOMapItemIdentifier * _geoMapItemIdentifier;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)geoMapItemIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithGEOMapItemIdentifier:(id)arg1;
- (id)initWithMUID:(unsigned long long)arg1;
- (id)initWithMUID:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)muid;

@end
