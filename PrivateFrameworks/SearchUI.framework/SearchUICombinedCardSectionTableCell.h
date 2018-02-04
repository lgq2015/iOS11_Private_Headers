/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUICombinedCardSectionTableCell : SearchUITableViewCell {
    NSMutableArray * _subcells;
}

@property (retain) NSMutableArray *subcells;

+ (id)cellViewForTableModel:(id)arg1 section:(unsigned long long)arg2 rowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 style:(unsigned long long)arg4 feedbackDelegate:(id)arg5;
+ (void)updateChevronAndSeparatorForCell:(id)arg1 tableModel:(id)arg2 indexPath:(id)arg3;

- (void).cxx_destruct;
- (id)initWithTableModel:(id)arg1 section:(unsigned long long)arg2 rowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 style:(unsigned long long)arg4 feedbackDelegate:(id)arg5;
- (void)setSubcells:(id)arg1;
- (id)subcells;

@end
