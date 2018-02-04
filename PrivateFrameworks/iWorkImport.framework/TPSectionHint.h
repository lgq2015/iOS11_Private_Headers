/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPSectionHint : NSObject {
    unsigned long long  _documentStartPageIndex;
    NSMutableArray * _pageHints;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } documentPageRange;
@property (nonatomic) unsigned long long documentStartPageIndex;
@property (nonatomic, readonly) unsigned long long lastPageIndex;
@property (nonatomic, readonly) unsigned long long pageCount;
@property (nonatomic, readonly) unsigned long long pageCountWithoutFillerPage;
@property (nonatomic, readonly) NSArray *pageHints;

+ (bool)verifyHints:(id)arg1 withBodyStorage:(id)arg2 upToPageIndex:(unsigned long long)arg3;

- (void).cxx_destruct;
- (bool)containsDocumentPageIndex:(unsigned long long)arg1;
- (id)copyForArchiving;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })documentPageRange;
- (unsigned long long)documentStartPageIndex;
- (bool)hasPageHintOfKind:(int)arg1 atPageIndex:(unsigned long long)arg2;
- (bool)hasPageHintOfKind:(int)arg1 beforePageIndex:(unsigned long long)arg2;
- (id)init;
- (id)initWithArchive:(const struct SectionHintArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TP::PageHintArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg1 unarchiver:(id)arg2;
- (unsigned long long)lastPageIndex;
- (unsigned long long)pageCount;
- (unsigned long long)pageCountWithoutFillerPage;
- (id)pageHintForPageIndex:(unsigned long long)arg1;
- (id)pageHints;
- (void)saveToArchive:(struct SectionHintArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TP::PageHintArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg1 archiver:(id)arg2 context:(id)arg3 shouldArchiveHintBlock:(id /* block */)arg4;
- (void)setDocumentStartPageIndex:(unsigned long long)arg1;
- (void)setPageHints:(id)arg1;
- (void)trimPageHintsFromPageIndex:(unsigned long long)arg1;

@end