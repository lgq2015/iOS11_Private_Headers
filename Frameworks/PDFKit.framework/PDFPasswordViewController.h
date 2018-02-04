/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPasswordViewController : UIViewController <UIDocumentPasswordViewDelegate> {
    UIView * _passwordView;
    PDFView * _pdfView;
}

- (void).cxx_destruct;
- (void)_commonInit;
- (void)loadView;
- (void)setPDFView:(id)arg1;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;

@end
