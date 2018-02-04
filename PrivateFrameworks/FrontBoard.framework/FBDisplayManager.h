/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBDisplayManager : FBSDisplayMonitor {
    bool  _mainConnected;
}

@property (nonatomic, readonly, copy) FBSDisplayConfiguration *mainDisplay;

+ (id)mainConfiguration;
+ (id)mainDisplay;
+ (id)mainIdentity;
+ (id)sharedInstance;

- (id)_init;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (id)mainDisplay;
- (void)postMainDisplayConnection;

@end
