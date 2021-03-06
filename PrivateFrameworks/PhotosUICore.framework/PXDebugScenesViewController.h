/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDebugScenesViewController : UITableViewController {
    NSArray * _sceneCollectionItems;
}

@property (nonatomic, retain) NSArray *sceneCollectionItems;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void).cxx_destruct;
- (id)_assetsWithSceneIdentifier:(id)arg1;
- (id)_fetchAssetsWithSceneIdentifier:(id)arg1;
- (void)_fetchScenes;
- (void)configureCell:(id)arg1 withItem:(id)arg2;
- (id)sceneCollectionItems;
- (void)setSceneCollectionItems:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)px_gridPresentation;

@end
