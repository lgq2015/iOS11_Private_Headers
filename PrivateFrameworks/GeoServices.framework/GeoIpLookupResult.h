/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GeoIpLookupResult : NSObject {
    NSString * _countryCode;
    NSString * _ipAddress;
    struct { 
        double latitude; 
        double longitude; 
    }  _latLong;
    NSString * _timeZone;
}

@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSString *ipAddress;
@property (nonatomic, readonly) struct { double x1; double x2; } latLong;
@property (nonatomic, readonly) NSString *timeZone;

- (void).cxx_destruct;
- (id)countryCode;
- (id)initWithGEOPDPlaceResponse:(id)arg1;
- (id)ipAddress;
- (struct { double x1; double x2; })latLong;
- (id)timeZone;

@end
