/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFDocumentViewPrivate : NSObject {
    PDFDocumentContentView * contentView;
    PDFDocument * document;
    struct CGSize { 
        double width; 
        double height; 
    }  documentViewSize;
    bool  ignoreChangedBoundsForBoxNotification;
    PDFPageBackgroundManager * pageBackgroundManager;
    NSMutableDictionary * pageFrames;
    NSMutableDictionary * pageViews;
    PDFView * pdfView;
    PDFRenderingProperties * renderingProperties;
    bool  showTextSelectionHandles;
}

- (void).cxx_destruct;

@end
