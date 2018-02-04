/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapFeatureBuildingSection : NSObject {
    double  _baseHeight;
    unsigned long long  _coordinateCount;
    struct { double x1; double x2; } * _coordinates;
    struct { struct { struct { id x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; bool x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; bool x_1_1_13; unsigned char x_1_1_14; bool x_1_1_15; bool x_1_1_16; unsigned char x_1_1_17; bool x_1_1_18; unsigned char x_1_1_19; struct _NSRange { unsigned long long x_20_2_1; unsigned long long x_20_2_2; } x_1_1_20; bool x_1_1_21; } x1; } * _feature;
    double  _height;
    unsigned long long  _sectionIndex;
}

@property (nonatomic, readonly) double baseHeight;
@property (nonatomic, readonly) unsigned long long coordinateCount;
@property (nonatomic, readonly) struct { double x1; double x2; }*coordinates;
@property (nonatomic, readonly) double height;

- (double)baseHeight;
- (unsigned long long)coordinateCount;
- (struct { double x1; double x2; }*)coordinates;
- (void)dealloc;
- (double)height;
- (id)initWithFeature:(struct { struct { struct { id x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; bool x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; bool x_1_1_13; unsigned char x_1_1_14; bool x_1_1_15; bool x_1_1_16; unsigned char x_1_1_17; bool x_1_1_18; unsigned char x_1_1_19; struct _NSRange { unsigned long long x_20_2_1; unsigned long long x_20_2_2; } x_1_1_20; bool x_1_1_21; } x1; }*)arg1 sectionIndex:(unsigned long long)arg2;

@end
