/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPrintSession : NSObject {
    struct CGDataProvider { } * _dataProvider;
    struct CGPDFDocument { } * _pdfDocumentRef;
    struct CGSize { 
        double width; 
        double height; 
    }  _printSize;
}

@property (nonatomic) struct CGDataProvider { }*dataProvider;
@property (nonatomic) struct CGPDFDocument { }*pdfDocumentRef;
@property struct CGSize { double x1; double x2; } printSize;

- (struct CGDataProvider { }*)dataProvider;
- (void)dealloc;
- (struct CGPDFDocument { }*)pdfDocumentRef;
- (struct CGSize { double x1; double x2; })printSize;
- (void)setDataProvider:(struct CGDataProvider { }*)arg1;
- (void)setPdfDocumentRef:(struct CGPDFDocument { }*)arg1;
- (void)setPrintSize:(struct CGSize { double x1; double x2; })arg1;

@end
