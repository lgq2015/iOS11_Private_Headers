/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKJunction : NSObject <NSCoding> {
    unsigned long long  _count;
    int  _drivingSide;
    struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } * _elements;
    int  _maneuver;
    struct GEOJunctionElement {} * _snapped;
    int  _type;
}

@property (nonatomic, readonly) int type;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)getArrowPath:(id*)arg1 arrowStrokePath:(id*)arg2 intersectionBackgroundPath:(id*)arg3 strokePath:(id*)arg4 withSize:(struct CGSize { double x1; double x2; })arg5 metrics:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; double x6; double x7; double x8; long long x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; bool x26; double x27; double x28; double x29; bool x30; bool x31; })arg6 drivingSide:(int)arg7 visualCenter:(struct CGPoint { double x1; double x2; }*)arg8;
- (void)getArrowPath:(id*)arg1 arrowStrokePath:(id*)arg2 pivot:(struct CGPoint { double x1; double x2; }*)arg3 withSize:(struct CGSize { double x1; double x2; })arg4 metrics:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; double x6; double x7; double x8; long long x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; bool x26; double x27; double x28; double x29; bool x30; bool x31; })arg5 visualCenter:(struct CGPoint { double x1; double x2; }*)arg6;
- (void)getRoundaboutArrowPath:(id*)arg1 intersectionBackgroundPath:(id*)arg2 strokePath:(id*)arg3 withSize:(struct CGSize { double x1; double x2; })arg4 metrics:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; double x6; double x7; double x8; long long x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; bool x26; double x27; double x28; double x29; bool x30; bool x31; })arg5 drivingSide:(int)arg6 visualCenter:(struct CGPoint { double x1; double x2; }*)arg7;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJunction:(id)arg1;
- (id)initWithType:(int)arg1 maneuver:(int)arg2 drivingSide:(int)arg3 elements:(struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg4 count:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (id)roundaboutArrowWithSize:(struct CGSize { double x1; double x2; })arg1 metrics:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; double x6; double x7; double x8; long long x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; bool x26; double x27; double x28; double x29; bool x30; bool x31; })arg2 outerRadius:(double)arg3 endAngle:(double)arg4 pivot:(struct CGPoint { double x1; double x2; }*)arg5;
- (int)type;

@end
