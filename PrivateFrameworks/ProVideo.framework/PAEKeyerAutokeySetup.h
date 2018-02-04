/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PAEKeyerAutokeySetup : NSObject <NSCoding> {
    NSMutableArray * _initialSamples;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initialSamples;
- (id)interpolateBetween:(id)arg1 withWeight:(float)arg2;
- (void)setInitialSamples:(id)arg1;

@end
