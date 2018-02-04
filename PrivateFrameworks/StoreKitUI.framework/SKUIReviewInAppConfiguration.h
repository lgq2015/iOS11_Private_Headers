/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReviewInAppConfiguration : NSObject {
    SKUIClientContext * _clientContext;
    NSString * _customDescription;
    UIImage * _icon;
    NSString * _itemID;
    bool  _sandboxed;
    NSString * _title;
    UIViewController * _viewController;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, copy) NSString *customDescription;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, copy) NSString *itemID;
@property (getter=isSandboxed, nonatomic) bool sandboxed;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (id)clientContext;
- (id)customDescription;
- (id)icon;
- (bool)isSandboxed;
- (id)itemID;
- (void)setClientContext:(id)arg1;
- (void)setCustomDescription:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setItemID:(id)arg1;
- (void)setSandboxed:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)title;
- (id)viewController;

@end
