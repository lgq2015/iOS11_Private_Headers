/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Haptics.framework/Haptics
 */

@interface HPHapticDynamicParameter : NSObject {
    NSString * _param;
    double  _time;
    float  _value;
}

@property (readonly) NSString *parameterID;
@property double time;
@property float value;

- (void).cxx_destruct;
- (id)init;
- (id)initWithParameterID:(id)arg1 value:(float)arg2 time:(double)arg3;
- (id)parameterID;
- (void)setTime:(double)arg1;
- (void)setValue:(float)arg1;
- (double)time;
- (float)value;

@end
