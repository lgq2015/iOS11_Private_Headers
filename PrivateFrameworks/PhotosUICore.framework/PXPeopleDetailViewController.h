/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleDetailViewController : PXPhotosDetailsUIViewController <PXPhotoLibraryUIChangeObserver> {
    NSArray * _overlayConstraints;
    UIScrollView * _overlayScrollView;
    PXPeopleDetailStatusOverlayView * _overlayView;
    NSArray * _people;
    bool  _processingFaces;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *overlayConstraints;
@property (nonatomic, retain) UIScrollView *overlayScrollView;
@property (nonatomic, retain) PXPeopleDetailStatusOverlayView *overlayView;
@property (nonatomic, retain) NSArray *people;
@property (getter=isProcessingFaces, nonatomic) bool processingFaces;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationBecameActive:(id)arg1;
- (id)_assetCollectionListFetchResultForPeople:(id)arg1 assetCount:(unsigned long long*)arg2;
- (void)_createNewDetailView:(id)arg1;
- (void)_launchNaming:(id)arg1;
- (void)_loadComposition;
- (void)_setupHeader;
- (void)_setupProcessingOverlayView;
- (void)_suggestionsDidFinish:(id)arg1;
- (void)_updateDataSourceWithCollectionForPerson:(id)arg1;
- (void)_updateHeader;
- (void)_updateOverlayConstraintsIfNeeded;
- (void)_updateOverlayContentSizeIfNeeded;
- (id)initWithPeople:(id)arg1;
- (bool)isProcessingFaces;
- (id)overlayConstraints;
- (id)overlayScrollView;
- (id)overlayView;
- (id)people;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (void)presentBootstrapViewControllerWithType:(unsigned long long)arg1;
- (void)refreshName;
- (void)refreshPeople;
- (void)setOverlayConstraints:(id)arg1;
- (void)setOverlayScrollView:(id)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setPeople:(id)arg1;
- (void)setProcessingFaces:(bool)arg1;
- (bool)shouldUpdateStatusBarTitle;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
