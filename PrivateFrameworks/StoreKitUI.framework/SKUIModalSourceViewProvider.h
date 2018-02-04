/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIModalSourceViewProvider : NSObject {
    <SKUIModalSourceViewProviderDelegate> * _delegate;
    bool  _hideOriginalSourceView;
    UIView * _originalSourceView;
    UIBarButtonItem * _sourceButtonBarItem;
    UIView * _sourceView;
    id  _userInfo;
}

@property (nonatomic) <SKUIModalSourceViewProviderDelegate> *delegate;
@property (nonatomic, retain) UIView *originalSourceView;
@property (nonatomic, retain) UIBarButtonItem *sourceButtonBarItem;
@property (nonatomic, retain) UIView *sourceView;
@property (nonatomic, retain) id userInfo;

- (void).cxx_destruct;
- (id)animationView;
- (id)delegate;
- (void)hideOriginalSourceView;
- (id)originalSourceView;
- (void)setDelegate:(id)arg1;
- (void)setOriginalSourceView:(id)arg1;
- (void)setSourceButtonBarItem:(id)arg1;
- (void)setSourceView:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)showOriginalSourceView;
- (id)sourceButtonBarItem;
- (id)sourceView;
- (id)userInfo;

@end
