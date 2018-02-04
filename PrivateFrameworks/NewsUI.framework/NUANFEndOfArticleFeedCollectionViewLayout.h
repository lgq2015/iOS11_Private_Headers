/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFEndOfArticleFeedCollectionViewLayout : UICollectionViewFlowLayout {
    <NUFeedBlueprintProvider> * _blueprintProvider;
    NUEndOfArticleSettings * _settings;
}

@property (nonatomic, readonly) <NUFeedBlueprintProvider> *blueprintProvider;
@property (nonatomic, copy) NUEndOfArticleSettings *settings;

- (void).cxx_destruct;
- (id)blueprintProvider;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)initWithBlueprintProvider:(id)arg1 settings:(id)arg2;
- (void)invalidateLayoutWithEndOfArticleSettings:(id)arg1;
- (struct CGSize { double x1; double x2; })itemSize;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (long long)scrollDirection;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (void)setSettings:(id)arg1;
- (id)settings;
- (struct CGSize { double x1; double x2; })sizeForItemsInBlueprint:(id)arg1;

@end
