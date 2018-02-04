/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUExtensionDevice : NSObject <NUDevice> {
    UIViewController * _hostViewController;
    UIScreen * _screen;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController *hostViewController;
@property (nonatomic, readonly) UIScreen *screen;
@property (getter=isSplitScreen, nonatomic, readonly) bool splitScreen;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)hostViewController;
- (id)initWithScreen:(id)arg1 hostViewController:(id)arg2;
- (bool)isSplitScreen;
- (id)screen;

@end
