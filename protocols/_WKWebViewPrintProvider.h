/* made by EzioChiu.
 */

@protocol _WKWebViewPrintProvider <NSObject>

@required

- (unsigned long long)_wk_pageCountForPrintFormatter:(_WKWebViewPrintFormatter *)arg1;
- (struct CGPDFDocument { }*)_wk_printedDocument;

@end
