/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapFeatureTransitLink : GEOMapFeatureLine {
    unsigned long long  _lineIndex;
    struct { id x1; unsigned int x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; unsigned long long x6; unsigned long long x7; struct _NSRange { unsigned long long x_8_1_1; unsigned long long x_8_1_2; } x8; struct _NSRange { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; bool x10; struct _NSRange { unsigned long long x_11_1_1; unsigned long long x_11_1_2; } x11; struct _NSRange { unsigned long long x_12_1_1; unsigned long long x_12_1_2; } x12; struct _NSRange { unsigned long long x_13_1_1; unsigned long long x_13_1_2; } x13[2]; struct _NSRange { unsigned long long x_14_1_1; unsigned long long x_14_1_2; } x14[2]; } * _transitLink;
}

@property (nonatomic, readonly) NSString *internalLineName;
@property (nonatomic, readonly) struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; } tileKey;
@property (nonatomic, readonly) struct { id x1; unsigned int x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; unsigned long long x6; unsigned long long x7; struct _NSRange { unsigned long long x_8_1_1; unsigned long long x_8_1_2; } x8; struct _NSRange { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; bool x10; struct _NSRange { unsigned long long x_11_1_1; unsigned long long x_11_1_2; } x11; struct _NSRange { unsigned long long x_12_1_1; unsigned long long x_12_1_2; } x12; struct _NSRange { unsigned long long x_13_1_1; unsigned long long x_13_1_2; } x13[2]; struct _NSRange { unsigned long long x_14_1_1; unsigned long long x_14_1_2; } x14[2]; }*transitLink;

- (id)_containingTile;
- (struct { float x1; float x2; }*)_tilePointsForSection:(unsigned long long)arg1 withCount:(out unsigned long long*)arg2;
- (void)dealloc;
- (id)initWithTransitLink:(struct { id x1; unsigned int x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; unsigned long long x6; unsigned long long x7; struct _NSRange { unsigned long long x_8_1_1; unsigned long long x_8_1_2; } x8; struct _NSRange { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; bool x10; struct _NSRange { unsigned long long x_11_1_1; unsigned long long x_11_1_2; } x11; struct _NSRange { unsigned long long x_12_1_1; unsigned long long x_12_1_2; } x12; struct _NSRange { unsigned long long x_13_1_1; unsigned long long x_13_1_2; } x13[2]; struct _NSRange { unsigned long long x_14_1_1; unsigned long long x_14_1_2; } x14[2]; }*)arg1 lineIndex:(unsigned long long)arg2;
- (id)internalLineName;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })tileKey;
- (struct { id x1; unsigned int x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; unsigned long long x6; unsigned long long x7; struct _NSRange { unsigned long long x_8_1_1; unsigned long long x_8_1_2; } x8; struct _NSRange { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; bool x10; struct _NSRange { unsigned long long x_11_1_1; unsigned long long x_11_1_2; } x11; struct _NSRange { unsigned long long x_12_1_1; unsigned long long x_12_1_2; } x12; struct _NSRange { unsigned long long x_13_1_1; unsigned long long x_13_1_2; } x13[2]; struct _NSRange { unsigned long long x_14_1_1; unsigned long long x_14_1_2; } x14[2]; }*)transitLink;

@end
