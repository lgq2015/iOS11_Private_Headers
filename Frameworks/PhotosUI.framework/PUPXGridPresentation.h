/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPXGridPresentation : NSObject <PXGridPresentation> {
    long long  _userInterfaceIdiom;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property long long userInterfaceIdiom;

- (bool)_isEmpty:(id)arg1;
- (void)createGridViewControllerWithAssets:(id)arg1 withTitle:(id)arg2 hideTabBar:(bool)arg3 hideSearch:(bool)arg4 containerViewController:(id)arg5 navigationItemDelegate:(id)arg6 andCompletion:(id /* block */)arg7;
- (id)createSceneDebugViewControllerWithAssetCollection:(id)arg1 sceneIdentifier:(id)arg2 hideTabBar:(bool)arg3 hideSearch:(bool)arg4;
- (id)initWithUserInterfaceIdiom:(long long)arg1;
- (void)setUserInterfaceIdiom:(long long)arg1;
- (long long)userInterfaceIdiom;

@end
