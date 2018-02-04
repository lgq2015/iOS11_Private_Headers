/* made by EzioChiu.
 */

@protocol QLPrintingProtocol

@required

- (void)numberOfPagesWithSize:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)pdfDataForPageAtIndex:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ofSize:(struct CGSize { double x1; double x2; })arg2;

@end
