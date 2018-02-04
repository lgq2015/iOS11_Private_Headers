/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _GEOTransitLineMarker : NSObject <MKTransitLineMarker> {
    <GEOTransitLine> * _line;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _locationHint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)artwork;
- (id)initWithGEOTransitLine:(id)arg1 locationHint:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (id)labelText;
- (id)mapItemIdentifier;

@end
