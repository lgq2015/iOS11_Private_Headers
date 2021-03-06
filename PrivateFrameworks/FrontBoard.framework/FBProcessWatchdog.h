/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcessWatchdog : FBSProcessWatchdog {
    long long  _event;
}

@property (nonatomic, readonly) long long event;

- (long long)event;
- (id)initWithProcess:(id)arg1 event:(long long)arg2 policy:(id)arg3;

@end
