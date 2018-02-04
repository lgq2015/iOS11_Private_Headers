/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOEquatorialCelestialBodyData : NSObject {
    double  _declination;
    double  _rightAscension;
}

@property (nonatomic, readonly) double declination;
@property (nonatomic, readonly) double rightAscension;

- (double)declination;
- (id)initWithDate:(id)arg1 body:(long long)arg2;
- (double)rightAscension;

@end
