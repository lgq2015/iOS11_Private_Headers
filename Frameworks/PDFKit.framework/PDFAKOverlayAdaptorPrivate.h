/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFAKOverlayAdaptorPrivate : NSObject {
    bool  isTornDown;
    NSMutableIndexSet * observedPageIndices;
    PDFDocument * pdfDocument;
    PDFView * pdfView;
}

- (void).cxx_destruct;

@end
