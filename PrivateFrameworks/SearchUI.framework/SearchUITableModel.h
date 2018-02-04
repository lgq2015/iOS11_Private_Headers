/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUITableModel : NSObject {
    NSArray * _sections;
    NSArray * _tableRowModel;
}

@property (retain) NSArray *sections;
@property (retain) NSArray *tableRowModel;

+ (id)gridLayoutsForCardSections:(id)arg1;
+ (id)resultsForMultiResultRowInSection:(id)arg1 startingAtIndex:(unsigned long long)arg2;
+ (id)rowModelsForCardSections:(id)arg1 result:(id)arg2;
+ (id)rowModelsForResult:(id)arg1;
+ (id)tableModelWithCardSections:(id)arg1;
+ (id)tableModelWithResult:(id)arg1;
+ (id)tableModelWithSections:(id)arg1 expandedSections:(id)arg2;

- (void).cxx_destruct;
- (id)cardSectionForIndexPath:(id)arg1;
- (id)description;
- (bool)indexPathExists:(id)arg1;
- (id)indexPathForResult:(id)arg1;
- (long long)numberOfRowsForSection:(long long)arg1;
- (unsigned long long)numberOfSections;
- (void)replaceResult:(id)arg1 withResult:(id)arg2 inResultSection:(id)arg3 completion:(id /* block */)arg4;
- (id)resultForIndexPath:(id)arg1;
- (id)rowModelForIndexPath:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rowRangeForSelectingForIndexPath:(id)arg1;
- (id)sectionForIndexPath:(id)arg1;
- (id)sections;
- (void)setSections:(id)arg1;
- (void)setTableRowModel:(id)arg1;
- (bool)shouldDisplayChevronForIndexPath:(id)arg1;
- (bool)shouldLeaveSpaceForChevronForIndexPath:(id)arg1;
- (id)tableRowModel;

@end
