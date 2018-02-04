/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface _CDPHostViewController : _UIRemoteViewController <CDPHostInterface> {
    id /* block */  _viewServiceTerminationBlock;
}

@property (nonatomic, copy) id /* block */ viewServiceTerminationBlock;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (double)_keyboardHeightOffset;
- (void)hostKeyboardOffset:(id /* block */)arg1;
- (void)setViewServiceTerminationBlock:(id /* block */)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id /* block */)viewServiceTerminationBlock;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
