/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFRGBColor : NSObject <HFColorPrimitive, NSCopying> {
    float  _blue;
    float  _green;
    float  _red;
}

@property (nonatomic, readonly, copy) UIColor *UIColor;
@property (nonatomic, readonly) float blue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float green;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float red;
@property (readonly) Class superclass;

- (id)UIColor;
- (float)blue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)getHue:(float*)arg1 saturation:(float*)arg2 brightness:(float*)arg3;
- (float)green;
- (unsigned long long)hash;
- (id)hf_RGBColorRepresentation;
- (id)init;
- (id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (id)initWithUIColor:(id)arg1;
- (bool)isEqual:(id)arg1;
- (float)red;

@end
