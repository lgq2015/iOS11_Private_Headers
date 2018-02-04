/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFThumbnailView : UIView <NSCoding, PDFCollectionViewDataSource, PDFCollectionViewDelegate> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    PDFThumbnailViewPrivateVars * _private;
}

@property (nonatomic, retain) PDFView *PDFView;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutMode;
@property (nonatomic, readonly) NSArray *selectedPages;
@property (readonly) Class superclass;
@property (nonatomic) struct CGSize { double x1; double x2; } thumbnailSize;

- (void).cxx_destruct;
- (id)PDFView;
- (void)_commonInit;
- (id /* block */)_newIconSetterBlockForIconView:(id)arg1 andIndexPath:(id)arg2;
- (void)_pdfDocumentWasUnlocked:(id)arg1;
- (id)backgroundColor;
- (void)configureItem:(id)arg1 forRepresentedObject:(id)arg2 andViewIndexPath:(id)arg3 usingOptionalImage:(id)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)currentIndexPath;
- (void)dealloc;
- (void)didEndDisplayingItem:(id)arg1;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (void)documentChanged;
- (void)documentUnlocked;
- (void)encodeWithCoder:(id)arg1;
- (id)indexPathForRepresentedObject:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)layoutMode;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)pdfView;
- (id)representedObjectAtIndexPath:(id)arg1;
- (id)scrubbingAtFraction:(double)arg1 betweenIndexPath:(id)arg2 andIndexPath:(id)arg3 outDiscreteFraction:(double*)arg4;
- (id)selectedPages;
- (void)selectionChanged;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHorizontalMode:(bool)arg1;
- (void)setLayoutMode:(long long)arg1;
- (void)setPDFView:(id)arg1;
- (void)setPdfView:(id)arg1;
- (void)setThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })thumbnailSize;

@end
