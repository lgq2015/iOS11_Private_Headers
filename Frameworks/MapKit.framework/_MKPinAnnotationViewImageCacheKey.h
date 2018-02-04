/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKPinAnnotationViewImageCacheKey : NSObject {
    unsigned long long  _displayStyle;
    long long  _idiom;
    unsigned long long  _mapType;
    UIColor * _pinColor;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithMapType:(unsigned long long)arg1 displayStyle:(unsigned long long)arg2 pinColor:(id)arg3 traits:(id)arg4;
- (bool)isEqual:(id)arg1;

@end
