/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Haptics.framework/Haptics
 */

@interface HPHapticEvent : NSObject {
    NSArray * _fixedParams;
    double  _time;
    NSString * _type;
}

@property (readonly) NSArray *parameters;
@property double time;
@property (readonly) NSString *type;

- (void).cxx_destruct;
- (id)getType;
- (id)init;
- (id)initWithEventType:(id)arg1 parameters:(id)arg2 time:(double)arg3;
- (id)parameters;
- (void)setTime:(double)arg1;
- (double)time;
- (id)type;

@end
