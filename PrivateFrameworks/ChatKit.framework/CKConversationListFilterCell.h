/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKConversationListFilterCell : UITableViewCell {
    UISegmentedControl * _filterControl;
}

@property (nonatomic, retain) UISegmentedControl *filterControl;

+ (double)defaultHeight;
+ (id)identifier;

- (void).cxx_destruct;
- (id)filterControl;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setFilterControl:(id)arg1;

@end
