/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFAKDocumentAdaptorPrivate : NSObject {
    AKController * akController;
    AKToolbarView * akToolbarView;
    bool  isTornDown;
    double  modelBaseScaleFactor;
    <PDFAKControllerDelegateProtocol> * pdfAKControllerDelegate;
    PDFDocument * pdfDocument;
    PDFView * pdfView;
}

- (void).cxx_destruct;

@end
