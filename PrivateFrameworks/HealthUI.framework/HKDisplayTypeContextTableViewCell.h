/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDisplayTypeContextTableViewCell : UITableViewCell <HKDisplayTypeContextViewDelegate> {
    HKDisplayTypeContextView * _contextView;
    <HKDisplayTypeContextTableViewCellDelegate> * _delegate;
    NSArray * _displayTypeContextItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKDisplayTypeContextTableViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *displayTypeContextItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)contextView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)contextView:(id)arg1 didTapOnInfoButtonAtIndex:(long long)arg2;
- (id)delegate;
- (id)displayTypeContextItems;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)selectItemAtIndex:(long long)arg1 animated:(bool)arg2 scrollPosition:(unsigned long long)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDisplayTypeContextItems:(id)arg1;
- (void)setupView;

@end
