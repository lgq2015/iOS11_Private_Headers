/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PULayoutSectioning : NSObject {
    PULayoutSectioning * _baseSectioning;
    <PULayoutSectioningDelegate> * _delegate;
    bool  _invalidatingSampling;
    bool  _invalidatingSections;
}

@property (nonatomic, retain) PULayoutSectioning *baseSectioning;
@property (nonatomic) <PULayoutSectioningDelegate> *delegate;

- (void).cxx_destruct;
- (long long)__debugUnsampledIndexForRealIndexPath:(struct PUSimpleIndexPath { long long x1; long long x2; })arg1;
- (void)_baseSectioningDidInvalidateSampling:(id)arg1;
- (void)_baseSectioningDidInvalidateSections:(id)arg1;
- (id)_sectioningDescriptionShowInvisibleItemsInBaseSectioning:(bool)arg1 hasIncorrectSampling:(bool*)arg2 hasInvisibleItemsInBaseSectioning:(bool*)arg3;
- (id)baseSectioning;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)enumerateRealMainItemIndexPathsForVisualSection:(long long)arg1 inVisualItemRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateRealSectionsForVisualSection:(long long)arg1 usingBlock:(id /* block */)arg2;
- (bool)hasSomeSampling;
- (void)invalidateSampling;
- (void)invalidateSections;
- (struct PUSimpleIndexPath { long long x1; long long x2; })mainRealItemIndexPathForVisualIndexPath:(struct PUSimpleIndexPath { long long x1; long long x2; })arg1;
- (long long)mainRealSectionForVisualSection:(long long)arg1;
- (long long)numberOfRealItemsInVisualSection:(long long)arg1;
- (long long)numberOfVisualItemsInVisualSection:(long long)arg1;
- (id)sectioningDescription;
- (id)sectioningHash;
- (id)sectioningHashHasIncorrectSampling:(bool*)arg1 hasInvisibleItemsInBaseSectioning:(bool*)arg2;
- (void)setBaseSectioning:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)visibleUnsampledIndexesForCombinedRealSections:(id)arg1;
- (struct PUSimpleIndexPath { long long x1; long long x2; })visualIndexPathForRealIndexPath:(struct PUSimpleIndexPath { long long x1; long long x2; })arg1 isMainItem:(bool*)arg2;
- (long long)visualSectionForRealSection:(long long)arg1;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
