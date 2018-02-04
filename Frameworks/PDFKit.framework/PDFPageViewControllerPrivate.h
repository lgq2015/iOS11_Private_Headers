/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageViewControllerPrivate : NSObject {
    UIImage * backgroundImage;
    int  backgroundQuality;
    double  maxScale;
    double  minScale;
    PDFPage * page;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  pageMargins;
    PDFPageView * pageView;
    UIView * pageViewContainerView;
    PDFView * pdfView;
    PDFRenderingProperties * renderingProperties;
    UIScrollView * scrollView;
}

- (void).cxx_destruct;

@end
