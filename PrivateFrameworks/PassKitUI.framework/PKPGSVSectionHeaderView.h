/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPGSVSectionHeaderView : UIView {
    PKContinuousButton * _actionButton;
    UIActivityIndicatorView * _activityIndicator;
    UILabel * _environmentLabel;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margins;
    unsigned long long  _passType;
    bool  _showActivityIndicator;
    UILabel * _titleView;
}

@property (nonatomic, readonly) unsigned long long passType;
@property (nonatomic) bool showActivityIndicator;

- (void).cxx_destruct;
- (void)_addTapped;
- (void)addTapped;
- (id)init;
- (id)initWithPassType:(unsigned long long)arg1;
- (void)layoutSubviews;
- (unsigned long long)passType;
- (void)setShowActivityIndicator:(bool)arg1;
- (bool)showActivityIndicator;

@end
