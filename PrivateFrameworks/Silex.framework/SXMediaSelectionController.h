/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXMediaSelectionController : NSObject <SXMediaSelectionViewControllerDataSource, SXMediaSelectionViewControllerDelegate> {
    NSDictionary * _availableMediaSelectionGroups;
    <SXMediaSelectionControllerDataSource> * _dataSource;
    <SXMediaSelectionControllerDelegate> * _delegate;
}

@property (nonatomic, retain) NSDictionary *availableMediaSelectionGroups;
@property (nonatomic) <SXMediaSelectionControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXMediaSelectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)availableMediaSelectionGroups;
- (id)dataSource;
- (id)delegate;
- (id)displayNameForMediaSelectionOptionAtIndex:(unsigned long long)arg1 inMediaSelectionGroup:(id)arg2;
- (unsigned long long)indexByAddingDefaultOptions:(unsigned long long)arg1 inMediaSelectionGroup:(id)arg2;
- (unsigned long long)indexBySubtractingDefaultOptions:(unsigned long long)arg1 inMediaSelectionGroup:(id)arg2;
- (bool)indexIsDefaultMediaSelectionIndex:(unsigned long long)arg1 inMediaSelectionGroup:(id)arg2;
- (bool)indexIsOffMediaSelectionIndex:(unsigned long long)arg1 inMediaSelectionGroup:(id)arg2;
- (unsigned long long)indexOfMediaSelectionOption:(id)arg1 inMediaSelectionGroup:(id)arg2;
- (id)mediaCharacteristicForMediaSelectionGroup:(id)arg1;
- (id)mediaSelectionGroupAtIndex:(unsigned long long)arg1;
- (id)mediaSelectionGroupForCharacteristic:(id)arg1;
- (id)mediaSelectionOptionAtIndex:(unsigned long long)arg1 inMediaSelectionGroup:(id)arg2;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;
- (id)mediaSelectionViewController:(id)arg1 displayNameForMediaSelectionGroup:(unsigned long long)arg2;
- (id)mediaSelectionViewController:(id)arg1 displayNameForMediaSelectionOptionAtIndexPath:(id)arg2;
- (unsigned long long)mediaSelectionViewController:(id)arg1 indexOfSelectedMediaSelectionOptionInGroup:(unsigned long long)arg2;
- (unsigned long long)mediaSelectionViewController:(id)arg1 numberOfMediaSelectionOptionsInGroup:(unsigned long long)arg2;
- (void)mediaSelectionViewController:(id)arg1 selectMediaSelectionOptionAtIndexPath:(id)arg2;
- (unsigned long long)numberOfMediaSelectionGroupsInMediaSelectionViewController:(id)arg1;
- (unsigned long long)numberOfMediaSelectionOptionsInGroup:(id)arg1;
- (id)preferredMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (void)selectMediaSelectionOption:(id)arg1 inMediaSelectionGroup:(id)arg2;
- (id)selectedMediaSelectionOptionInGroup:(id)arg1;
- (id)selectedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (void)setAvailableMediaSelectionGroups:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldShowDefaultOptionsForMediaSelectionGroup:(id)arg1;

@end
