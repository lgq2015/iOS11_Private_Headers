/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSHNetworkActivity : NSObject {
    int  mActiveConnections;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedNetworkActivity;

- (id)autorelease;
- (void)connectionFinished;
- (void)connectionStarted;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
