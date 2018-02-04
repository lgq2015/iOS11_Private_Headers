/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCPageNumberAttachment : TSWPTextualAttachment {
    NSString * _bookmarkName;
    NSString * _pageNumber;
}

@property (nonatomic, copy) NSString *bookmarkName;
@property (nonatomic, copy) NSString *pageNumber;

- (void).cxx_destruct;
- (id)bookmarkName;
- (int)elementKind;
- (void)loadFromUnarchiver:(id)arg1;
- (id)pageNumber;
- (void)saveToArchiver:(id)arg1;
- (void)setBookmarkName:(id)arg1;
- (void)setPageNumber:(id)arg1;
- (id)stringEquivalent;
- (id)stringWithPageNumber:(unsigned long long)arg1 pageCount:(unsigned long long)arg2 charIndex:(unsigned long long)arg3;

@end
