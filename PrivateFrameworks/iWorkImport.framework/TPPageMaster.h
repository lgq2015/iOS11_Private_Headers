/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageMaster : TSPObject <TPMasterDrawableProvider, TSKDocumentObject, TSKModel, TSPCopying, TSWPHeaderFooterProvider> {
    TPDocumentRoot * _documentRoot;
    TSWPStorage * _headerFooters;
    NSMutableArray * _masterDrawables;
    TPSection * _section;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *masterDrawables;
@property (nonatomic) TPSection *section;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addMasterDrawable:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(bool)arg4;
- (void)addMasterDrawables:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(bool)arg4;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (double)bodyWidth;
- (id)childEnumerator;
- (bool)containsModelObject:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (unsigned long long)countOfMasterDrawables;
- (void)dealloc;
- (id)description;
- (id)documentRoot;
- (double)footerHeight;
- (id)headerFooter:(int)arg1 fragmentAtIndex:(int)arg2;
- (id)headerFooterFragmentEnumerator;
- (int)headerFooterTypeForModel:(id)arg1;
- (int)headerFragmentIndexForModel:(id)arg1;
- (double)headerHeight;
- (void)i_addMasterDrawable:(id)arg1;
- (void)i_copyHeadersAndFootersFrom:(id)arg1 dolcContext:(id)arg2 withBlock:(id /* block */)arg3;
- (void)i_createHeadersFooters:(int)arg1 stylesheet:(id)arg2 paragraphStyle:(id)arg3 context:(id)arg4 mayAlreadyExist:(bool)arg5;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1 paragraphStyle:(id)arg2 context:(id)arg3;
- (void)i_importHeaderFooter:(id)arg1 headerType:(int)arg2 dolcContext:(id)arg3 splitHeaders:(bool)arg4;
- (void)i_setDocumentRoot:(id)arg1;
- (void)i_setHeaderFooter:(int)arg1 storage:(id)arg2 fragmentIndex:(int)arg3;
- (void)i_splitHeaderFooter:(id)arg1 storages:(id*)arg2 dolcContext:(id)arg3 bodyWidth:(double)arg4;
- (unsigned long long)indexOfMasterDrawable:(id)arg1;
- (id)initWithSection:(id)arg1;
- (bool)isHeaderFooterEmpty:(int)arg1;
- (bool)isHeaderFooterEmpty:(int)arg1 fragmentAtIndex:(int)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)masterDrawables;
- (id)masterDrawablesSortedByZOrder:(id)arg1;
- (double)pHeightOfHeaderFooter:(int)arg1;
- (void)p_filterParagraphStylesOnHeaderFooterStorage:(id)arg1 stylesheet:(id)arg2;
- (id)p_headerAndFooterStorages;
- (int)p_headerFragmentIndexForTabIndex:(unsigned int)arg1 paragraphStyle:(id)arg2 bodyWidth:(double)arg3;
- (bool)p_isInDocument;
- (void)p_makeHeadersFootersPerformSelector:(SEL)arg1 documentRoot:(id)arg2;
- (void)p_makeHeadersFootersPerformSelector:(SEL)arg1 documentRoot:(id)arg2 context:(id)arg3;
- (void)p_makeHeadersFootersPerformSelector:(SEL)arg1 withStylesheet:(id)arg2 withMapper:(id)arg3;
- (void)p_makeMasterDrawablesPerformSelector:(SEL)arg1 documentRoot:(id)arg2;
- (void)p_makeMasterDrawablesPerformSelector:(SEL)arg1 documentRoot:(id)arg2 context:(id)arg3;
- (void)p_makeMasterDrawablesPerformSelector:(SEL)arg1 withStylesheet:(id)arg2 withMapper:(id)arg3;
- (void)p_splitHeaderFooterByTabs:(id)arg1 storages:(id*)arg2 dolcContext:(id)arg3 bodyWidth:(double)arg4;
- (void)removeMasterDrawable:(id)arg1 suppressDOLC:(bool)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)section;
- (void)setParentStorage:(id)arg1;
- (void)setSection:(id)arg1;
- (id)topLevelParentInfoForInfo:(id)arg1;
- (bool)usesSingleHeaderFooter;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
