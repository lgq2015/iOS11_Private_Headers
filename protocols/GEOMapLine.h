/* made by EzioChiu.
 */

@protocol GEOMapLine <NSObject>

@required

- (unsigned long long)coordinateCount;
- (struct { double x1; double x2; }*)coordinates;
- (double)distanceFromCoordinate:(struct { double x1; double x2; })arg1 outSegmentCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; }*)arg2;
- (double)length;

@end
