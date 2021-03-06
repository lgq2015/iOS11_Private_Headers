/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface CannedAVSync : NSObject {
    double  _base;
    double  _modulo;
}

@property (nonatomic) double base;
@property (nonatomic) double modulo;

+ (id)sharedCannedAVSync;

- (void)addDrift:(double)arg1;
- (void)addStreamWithCount:(int)arg1 rate:(double)arg2;
- (double)base;
- (double)clampForTime:(double)arg1;
- (void)clear;
- (id)init;
- (double)modulo;
- (void)setBase:(double)arg1;
- (void)setModulo:(double)arg1;

@end
