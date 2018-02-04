/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireRasterTileTrafficData : NSObject {
    double  _expirationTime;
    NSArray * _trafficIncidents;
    NSMutableArray * _trafficSegments;
    struct { long long x1; long long x2; } * _vertices;
}

@property (nonatomic) double expirationTime;
@property (nonatomic, readonly) NSArray *trafficIncidents;
@property (nonatomic, retain) NSMutableArray *trafficSegments;
@property (nonatomic) struct { long long x1; long long x2; }*vertices;

+ (id)createWithData:(id)arg1 tileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;
+ (double)expirationTimeInterval;

- (void).cxx_destruct;
- (void)dealloc;
- (double)expirationTime;
- (id)initWithData:(id)arg1 tileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;
- (void)setExpirationTime:(double)arg1;
- (void)setTrafficSegments:(id)arg1;
- (void)setVertices:(struct { long long x1; long long x2; }*)arg1;
- (id)trafficIncidents;
- (id)trafficSegments;
- (struct { long long x1; long long x2; }*)vertices;

@end