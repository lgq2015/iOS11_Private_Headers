/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface FxBitmap : FxImage <NSCopying> {
    struct FxBitmapPriv { void *x1; unsigned long long x2; bool x3; } * _bitmapPriv;
}

+ (void)setGuaranteeMemoryCallback:(int (*)arg1;

- (bool)_ownsData;
- (unsigned long long)_packedRowBytes;
- (void)_setOwned:(bool)arg1;
- (void)_setOwnedDataPtr:(void*)arg1;
- (bool)_verifyImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void*)dataPtr;
- (void*)dataPtrForPositionX:(unsigned long long)arg1 Y:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithCopy:(id)arg1;
- (id)initWithCopy:(id)arg1 andInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg2;
- (id)initWithCopy:(id)arg1 andInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg2 andRowBytes:(unsigned long long)arg3;
- (id)initWithInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg1;
- (id)initWithInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg1 andData:(void*)arg2;
- (id)initWithInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg1 rowBytes:(unsigned long long)arg2 andData:(void*)arg3;
- (unsigned long long)rowBytes;
- (void)setRowBytes:(unsigned long long)arg1;

@end
