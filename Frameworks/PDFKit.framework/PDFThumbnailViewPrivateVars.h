/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFThumbnailViewPrivateVars : NSObject {
    PDFView * PDFView;
    UIColor * backgroundColor;
    NSLayoutConstraint * bottomInsetConstraint;
    PDFCollectionView * collectionView;
    long long  layoutMode;
    NSLayoutConstraint * leftInsetConstraint;
    NSLayoutConstraint * rightInsetConstraint;
    struct CGSize { 
        double width; 
        double height; 
    }  thumbnailSize;
    NSLayoutConstraint * topInsetConstraint;
}

- (void).cxx_destruct;

@end
