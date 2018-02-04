/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFCollectionViewDataSourceAdaptor : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayoutPrivate> {
    NSObject<PDFCollectionViewDataSource> * _wrappedDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property NSObject<PDFCollectionViewDataSource> *wrappedDataSource;

- (void).cxx_destruct;
- (double)_fittingItemsStrideForCollectionView:(id)arg1 outTotalItems:(unsigned long long*)arg2;
- (bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)forTrueIndexPath:(id)arg1 findIndexPathBefore:(id*)arg2 andIndexPathAfter:(id*)arg3 inCollectionView:(id)arg4;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setWrappedDataSource:(id)arg1;
- (id)trueIndexPathForIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (id)wrappedDataSource;

@end
