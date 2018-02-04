/* made by EzioChiu.
 */

@protocol GEOMapRoad <GEOMapLine>

@required

- (GEOMapRequest *)findRoadsFrom:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GEOMapRoad> *, void*, id /* block */, void*, void, id /* block */, GEOMapRequest *, void*
- (GEOMapRequest *)findRoadsFromNextIntersection:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GEOMapRoad> *, void*, id /* block */, void*, void, id /* block */, GEOMapRequest *, void*
- (GEOMapRequest *)findRoadsFromPreviousIntersection:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GEOMapRoad> *, void*, id /* block */, void*, void, id /* block */, GEOMapRequest *, void*
- (GEOMapRequest *)findRoadsToNextIntersection:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GEOMapRoad> *, void*, id /* block */, void*, void, id /* block */, GEOMapRequest *, void*
- (GEOMapRequest *)findRoadsToPreviousIntersection:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GEOMapRoad> *, void*, id /* block */, void*, void, id /* block */, GEOMapRequest *, void*
- (int)formOfWay;
- (NSString *)internalRoadName;
- (bool)isBridge;
- (bool)isRail;
- (bool)isTunnel;
- (int)rampType;
- (int)roadClass;
- (void)roadEdgesWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct { struct { /* ? */ } *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*, void*
- (void)roadFeaturesWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct { struct { id x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; bool x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; bool x13; unsigned char x14; bool x15; bool x16; unsigned char x17; bool x18; unsigned char x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; bool x21; unsigned int x22; }*, void*
- (unsigned long long)roadID;
- (double)roadWidth;
- (unsigned long long)speedLimit;
- (bool)speedLimitIsMPH;
- (int)travelDirection;

@end
