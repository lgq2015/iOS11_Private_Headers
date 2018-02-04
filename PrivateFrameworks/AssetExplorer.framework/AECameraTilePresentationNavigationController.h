/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

@interface AECameraTilePresentationNavigationController : UINavigationController {
    <AECameraTilePresentationDelegate> * _presentationDelegate;
}

@property (nonatomic) <AECameraTilePresentationDelegate> *presentationDelegate;

- (void).cxx_destruct;
- (id)presentationDelegate;
- (void)setPresentationDelegate:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
