/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADAdjustedColor : OADColor {
    unsigned char  mAdjustmentParam;
    int  mAdjustmentType;
    OADColor * mBaseColor;
    bool  mGray;
    bool  mInvert;
    bool  mInvert128;
}

- (unsigned char)adjustmentParam;
- (int)adjustmentType;
- (id)baseColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)gray;
- (unsigned long long)hash;
- (id)initWithBaseColor:(id)arg1 adjustmentType:(int)arg2 adjustmentParam:(unsigned char)arg3 invert:(bool)arg4 invert128:(bool)arg5 gray:(bool)arg6;
- (bool)invert;
- (bool)invert128;
- (bool)isEqual:(id)arg1;

@end
