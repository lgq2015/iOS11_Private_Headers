/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftSendDateSection : SKUIGiftTableViewSection {
    NSString * _dateString;
    SKUIItem * _giftItem;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _headerInsets;
    SKUIGiftTableSectionHeaderView * _headerView;
    NSDate * _sendDate;
    long long  _sendDateStyle;
}

@property (nonatomic, retain) SKUIItem *giftItem;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } headerInsets;
@property (nonatomic, copy) NSDate *sendDate;
@property (nonatomic) long long sendDateStyle;

- (void).cxx_destruct;
- (void)_createFormattedDateString:(bool)arg1;
- (id)_headerView;
- (id)giftItem;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })headerInsets;
- (id)headerViewForTableView:(id)arg1;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (id)sendDate;
- (long long)sendDateStyle;
- (void)setGiftItem:(id)arg1;
- (void)setHeaderInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSendDate:(id)arg1;
- (void)setSendDateStyle:(long long)arg1;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (void)updateCell:(id)arg1 forTransitionToSize:(struct CGSize { double x1; double x2; })arg2;

@end
