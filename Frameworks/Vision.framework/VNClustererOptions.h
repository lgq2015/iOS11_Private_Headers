/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNClustererOptions : NSObject {
    NSString * _cachePath;
    NSData * _state;
    float  _threshold;
    NSString * _type;
}

@property (nonatomic, retain) NSString *cachePath;
@property (nonatomic, retain) NSData *state;
@property (nonatomic) float threshold;
@property (nonatomic, retain) NSString *type;

- (void).cxx_destruct;
- (id)cachePath;
- (id)init;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4;
- (void)setCachePath:(id)arg1;
- (void)setState:(id)arg1;
- (void)setThreshold:(float)arg1;
- (void)setType:(id)arg1;
- (id)state;
- (float)threshold;
- (id)type;

@end
