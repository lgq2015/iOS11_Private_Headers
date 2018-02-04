/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDURLSessionPool : NSObject {
    int  _backgroundSessionConnectionPoolLimit;
}

@property (nonatomic, readonly) int backgroundSessionConnectionPoolLimit;

+ (id)backgroundSessionConnectionPoolName;
+ (id)sharedURLSessionPool;

- (void)_updateBackgroundSessionConnectionPoolLimit;
- (int)backgroundSessionConnectionPoolLimit;
- (id)init;

@end
