/* made by EzioChiu.
 */

@protocol TSWPStorageParagraphObserver <TSWPStorageObserver>

@required

- (void)storage:(TSWPStorage *)arg1 didChangeParagraphsInIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)storage:(TSWPStorage *)arg1 didDeleteParagraphsInIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)storage:(TSWPStorage *)arg1 didInsertParagraphsInIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
