/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireRasterTileTrafficSegment : NSObject {
    bool  _hasSpeed;
    bool  _hasWidth;
    int  _speed;
    long long  _vertexCount;
    struct { long long x1; long long x2; } * _vertices;
    int  _width;
}

@property (nonatomic) bool hasSpeed;
@property (nonatomic) bool hasWidth;
@property (nonatomic) int speed;
@property (nonatomic, readonly) long long vertexCount;
@property (nonatomic, readonly) struct { long long x1; long long x2; }*vertices;
@property (nonatomic) int width;

- (bool)hasSpeed;
- (bool)hasWidth;
- (void)setHasSpeed:(bool)arg1;
- (void)setHasWidth:(bool)arg1;
- (void)setSpeed:(int)arg1;
- (void)setVertices:(struct { long long x1; long long x2; }*)arg1 count:(long long)arg2;
- (void)setWidth:(int)arg1;
- (int)speed;
- (long long)vertexCount;
- (struct { long long x1; long long x2; }*)vertices;
- (int)width;

@end
