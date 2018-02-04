/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface _MFLazyCacheConditionLock : NSConditionLock {
    long long  _waiterCount;
}

@property (readonly) long long waiterCount;

- (void)decrementWaiterCount;
- (void)incrementWaiterCount;
- (long long)waiterCount;

@end
