/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPHeaderFooterFragmentEnumerator : NSEnumerator {
    int  _fragmentIndex;
    int  _headerFooterType;
    TPPageMaster * _pageMaster;
}

@property (nonatomic) int fragmentIndex;
@property (nonatomic) int headerFooterType;
@property (nonatomic, retain) TPPageMaster *pageMaster;

- (void).cxx_destruct;
- (int)fragmentIndex;
- (int)headerFooterType;
- (id)initWithPageMaster:(id)arg1;
- (id)nextObject;
- (void)p_incrementFragmentIndex;
- (void)p_incrementHeaderFooterType;
- (id)pageMaster;
- (void)setFragmentIndex:(int)arg1;
- (void)setHeaderFooterType:(int)arg1;
- (void)setPageMaster:(id)arg1;

@end
