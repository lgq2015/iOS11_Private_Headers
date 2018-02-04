/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADLuminanceEffect : OADBlipEffect {
    float  mBrightness;
    float  mContrast;
}

- (float)brightness;
- (float)contrast;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setBrightness:(float)arg1;
- (void)setContrast:(float)arg1;

@end
