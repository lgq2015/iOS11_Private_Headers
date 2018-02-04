/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleBootstrapConfirmationViewController : UICollectionViewController <PXPeopleFlowViewController, PXPeopleSuggestionManagerDelegate, PXPeopleSwipeSelectionManagerDelegate> {
    id  _context;
    NSArray * _currentSuggestions;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastSize;
    NSTimer * _loadingDelayTimer;
    PXPeopleSuggestionManager * _suggestionManager;
    bool  _suggestionsPresented;
    PXPeopleSwipeSelectionManager * _swipeSelectionManager;
    unsigned long long  _type;
    unsigned long long  _viewState;
    bool  _willAppear;
    <PXPeopleFlowViewControllerActionDelegate> * actionDelegate;
}

@property (nonatomic) <PXPeopleFlowViewControllerActionDelegate> *actionDelegate;
@property (nonatomic, readonly) PXPeopleBootstrapContext *bootstrapContext;
@property (nonatomic, retain) id context;
@property (nonatomic, retain) NSArray *currentSuggestions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } lastSize;
@property (nonatomic, retain) NSTimer *loadingDelayTimer;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredSize;
@property (nonatomic, readonly) NSArray *presentationStatuses;
@property (nonatomic, readonly) PXPeopleSuggestionManager *suggestionManager;
@property (nonatomic) bool suggestionsPresented;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXPeopleSwipeSelectionManager *swipeSelectionManager;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long viewState;
@property (nonatomic) bool willAppear;

- (void).cxx_destruct;
- (void)_badgeLoadingCells;
- (void)_cacheCurrentSuggestions;
- (void)_evaluateIfSuggestionPresentationFinished;
- (void)_finishedPresentingSuggestions;
- (id)_localizedPromptString;
- (void)_markSkippedSuggestions;
- (void)_noSuggestionsFound;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_sectionInsets;
- (id)_sortedIndexPathsForVisibleCells;
- (void)_startLoadingTimer;
- (void)_toggleConfirmedForCollectionViewCell:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_updateHeaderContent;
- (void)_updateNavigationBarForCurrentTraitCollection;
- (void)_updateViewWithViewState:(unsigned long long)arg1;
- (double)_wonkyAutomaticContentOffset;
- (id)actionDelegate;
- (id)bootstrapContext;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)context;
- (id)currentSuggestions;
- (void)dealloc;
- (id)initWithContext:(id)arg1 dataSource:(id)arg2;
- (id)initialSelectedIndexPathsForSwipeSelectionManager:(id)arg1;
- (void)keyFaceUpdated:(id)arg1;
- (struct CGSize { double x1; double x2; })lastSize;
- (id)loadingDelayTimer;
- (void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct CGSize { double x1; double x2; })preferredSize;
- (id)presentationStatuses;
- (void)setActionDelegate:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentSuggestions:(id)arg1;
- (void)setLastSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLoadingDelayTimer:(id)arg1;
- (void)setSuggestionsPresented:(bool)arg1;
- (void)setSwipeSelectionManager:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setViewState:(unsigned long long)arg1;
- (void)setWillAppear:(bool)arg1;
- (id)suggestionManager;
- (void)suggestionManager:(id)arg1 hasNewSuggestionsAvailable:(id)arg2;
- (bool)suggestionsPresented;
- (id)swipeSelectionManager;
- (void)swipeSelectionManager:(id)arg1 didSelectIndexPaths:(id)arg2;
- (id)swipeSelectionManager:(id)arg1 indexPathSetFromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (unsigned long long)type;
- (void)updateImageForCell:(id)arg1 withPerson:(id)arg2;
- (void)viewDidLoad;
- (unsigned long long)viewState;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)willAppear;
- (void)willLoadMoreSuggestionsForSuggestionManager:(id)arg1;
- (void)willTransitionToNextInFlow;

@end
