/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFActionRemoteGoToPrivateVars : NSObject {
    PDFDestination * destination;
    struct CGPDFDictionary { } * lazyInitDictionary;
    PDFDocument * lazyInitDocument;
    unsigned long long  lazyInitPageIndex;
    unsigned long long  pageIndex;
    struct CGPoint { 
        double x; 
        double y; 
    }  point;
    NSURL * url;
}

- (void).cxx_destruct;

@end
