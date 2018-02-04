/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPGradientStop : NSObject {
    OITSUColor * mColor;
    float  mPosition;
}

- (id)color;
- (void)dealloc;
- (id)initWithColor:(id)arg1 position:(float)arg2;
- (float)position;

@end
