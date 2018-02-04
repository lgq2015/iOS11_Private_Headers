/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMDisplayManager : NSObject <FBSDisplayObserving> {
    FBSDisplayMonitor * _displayMonitor;
    bool  _initialized;
    double  _mobileGestaltOrientation;
    NSObject<OS_dispatch_queue> * _queue;
    AXMDisplay * _queue_CoreAnimationMainDisplay;
    AXMDisplay * _queue_FrontBoardMainDisplay;
}

@property (nonatomic, readonly) AXMDisplay *coreAnimationMainDisplay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FBSDisplayMonitor *displayMonitor;
@property (nonatomic, readonly) AXMDisplay *frontBoardMainDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInitialized;
@property (nonatomic) double mobileGestaltOrientation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_discreteOrientationForOrientation:(double)arg1;
- (id)_displayPropertiesFromMobileGestalt;
- (void)_updateDisplay:(id)arg1 withCADisplay:(id)arg2;
- (void)_updateDisplay:(id)arg1 withConfiguration:(id)arg2;
- (void)_updateDisplayPropertiesWithConfiguration:(id)arg1;
- (id)coreAnimationMainDisplay;
- (void)dealloc;
- (id)description;
- (id)displayMonitor;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (id)frontBoardMainDisplay;
- (id)initAndWaitForMainDisplayConfiguration;
- (id)initWithCompletion:(id /* block */)arg1;
- (bool)isInitialized;
- (double)mobileGestaltOrientation;
- (void)setDisplayMonitor:(id)arg1;
- (void)setMobileGestaltOrientation:(double)arg1;

@end
