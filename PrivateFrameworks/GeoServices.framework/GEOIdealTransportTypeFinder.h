/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOIdealTransportTypeFinder : NSObject

+ (id)_transportTypePreferenceAsString:(long long)arg1;
+ (long long)idealTransportType;
+ (long long)idealTransportTypeForMapType:(int)arg1;
+ (long long)idealTransportTypeForOrigin:(struct { double x1; double x2; })arg1 destination:(struct { double x1; double x2; })arg2 mapType:(int)arg3;

@end
