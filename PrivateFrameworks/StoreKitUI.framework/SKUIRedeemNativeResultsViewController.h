/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemNativeResultsViewController : SKUIRedeemResultsViewController <SKUIItemStateCenterObserver, SKUIRedeemResultsViewDelegate> {
    UIButton * _anotherButton;
    unsigned long long  _currentItemStateFlag;
    bool  _extendedMessageIsExpanded;
    SKUITextLayout * _extendedMessageTextLayout;
    SKUITextBoxView * _extendedMessageView;
    UIImageView * _headerImageView;
    UIImage * _itemImage;
    SKUIItemStateCenter * _itemStateCenter;
    SKUIGiftItemView * _itemView;
    SKUIRedeemResultMessageView * _messageView;
    NSOperationQueue * _operationQueue;
    SKUIRedeemITunesPassLockup * _passbookLockup;
}

@property (nonatomic, retain) UIButton *anotherButton;
@property (nonatomic) unsigned long long currentItemStateFlag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool extendedMessageIsExpanded;
@property (nonatomic, retain) SKUITextLayout *extendedMessageTextLayout;
@property (nonatomic, retain) SKUITextBoxView *extendedMessageView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *headerImageView;
@property (nonatomic, retain) UIImage *itemImage;
@property (nonatomic, retain) SKUIItemStateCenter *itemStateCenter;
@property (nonatomic, retain) SKUIGiftItemView *itemView;
@property (nonatomic, retain) SKUIRedeemResultMessageView *messageView;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, retain) SKUIRedeemITunesPassLockup *passbookLockup;
@property (readonly) Class superclass;

+ (bool)canShowResultsForRedeem:(id)arg1;

- (void).cxx_destruct;
- (id)_anotherButtonSection;
- (id)_emptySection;
- (void)_extendedMessageAction:(id)arg1;
- (id)_extendedMessageViewSection;
- (id)_headerImageViewSection;
- (id)_item;
- (id)_itemView;
- (id)_itemViewSection;
- (id)_linksSection;
- (id)_messageViewSection;
- (void)_openAction:(id)arg1;
- (id)_passbookLearnMoreSection;
- (void)_passbookLockupAction:(id)arg1;
- (void)_redeemAnotherAction:(id)arg1;
- (void)_reloadResultViewMessage;
- (void)_reloadSections;
- (id)_resultImageViewSection;
- (void)_setHeaderImage:(id)arg1;
- (void)_setItemImage:(id)arg1;
- (double)_tableWidth;
- (id)anotherButton;
- (unsigned long long)currentItemStateFlag;
- (void)dealloc;
- (bool)extendedMessageIsExpanded;
- (id)extendedMessageTextLayout;
- (id)extendedMessageView;
- (id)headerImageView;
- (id)initWithRedeem:(id)arg1;
- (id)itemImage;
- (id)itemStateCenter;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (id)itemView;
- (void)loadView;
- (id)messageView;
- (id)operationQueue;
- (id)passbookLockup;
- (void)redeemResultsView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setAnotherButton:(id)arg1;
- (void)setCurrentItemStateFlag:(unsigned long long)arg1;
- (void)setExtendedMessageIsExpanded:(bool)arg1;
- (void)setExtendedMessageTextLayout:(id)arg1;
- (void)setExtendedMessageView:(id)arg1;
- (void)setHeaderImageView:(id)arg1;
- (void)setItemImage:(id)arg1;
- (void)setItemStateCenter:(id)arg1;
- (void)setItemView:(id)arg1;
- (void)setMessageView:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setPassbookLockup:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
