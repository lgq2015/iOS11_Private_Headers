/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKStrokeData : NSObject {
    char * _points;
    unsigned long long  _pointsCount;
    unsigned long long  _pointsMaxCount;
    bool  _pointsOwned;
}

- (void)dealloc;
- (id)init;
- (id)initWithPoints:(struct PKCompressedStrokePoint { float x1; struct _PKPoint { float x_2_1_1; float x_2_1_2; } x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned char x8; unsigned char x9; }*)arg1 count:(unsigned long long)arg2 copy:(bool)arg3;

@end
