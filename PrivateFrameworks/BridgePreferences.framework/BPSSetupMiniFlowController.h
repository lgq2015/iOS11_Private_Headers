/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

@interface BPSSetupMiniFlowController : NSObject <BPSBuddyController> {
    <BPSBuddyControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BPSBuddyControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)navigationController;
- (void)pushController:(id)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (id)viewController;

@end
