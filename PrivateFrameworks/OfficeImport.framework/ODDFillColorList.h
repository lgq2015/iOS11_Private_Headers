/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDFillColorList : NSObject {
    NSArray * mColors;
    int  mHueDirection;
    int  mMethod;
}

- (id)colorAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 state:(id)arg3;
- (id)cycleColorAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)getComponentsForIndex:(unsigned long long)arg1 hue:(float*)arg2 saturation:(float*)arg3 brightness:(float*)arg4 state:(id)arg5;
- (id)repeatColorAtIndex:(unsigned long long)arg1;
- (void)setColors:(id)arg1;
- (void)setHueDirection:(int)arg1;
- (void)setMethod:(int)arg1;
- (id)spanColorAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 state:(id)arg3;

@end
