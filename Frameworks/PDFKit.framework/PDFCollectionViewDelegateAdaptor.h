/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFCollectionViewDelegateAdaptor : NSObject <UICollectionViewDelegate> {
    NSIndexPath * _proposedDropIndexPath;
    NSObject<PDFCollectionViewDelegate> * _wrappedDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property NSObject<PDFCollectionViewDelegate> *wrappedDelegate;

- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)setWrappedDelegate:(id)arg1;
- (id)wrappedDelegate;

@end
