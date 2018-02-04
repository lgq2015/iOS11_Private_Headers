/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCacheCoordinatorFlushPolicy : NSObject {
    bool  _alwaysFlushKeysWithZeroInterest;
    unsigned long long  _highWaterMark;
    unsigned long long  _lowWaterMark;
}

@property (nonatomic) bool alwaysFlushKeysWithZeroInterest;
@property (nonatomic) unsigned long long highWaterMark;
@property (nonatomic) unsigned long long lowWaterMark;

- (bool)alwaysFlushKeysWithZeroInterest;
- (bool)canFlushWithDataSize:(unsigned long long)arg1;
- (bool)canPreemptiveFlushWithDataSize:(unsigned long long)arg1;
- (unsigned long long)highWaterMark;
- (unsigned long long)lowWaterMark;
- (void)setAlwaysFlushKeysWithZeroInterest:(bool)arg1;
- (void)setHighWaterMark:(unsigned long long)arg1;
- (void)setLowWaterMark:(unsigned long long)arg1;

@end