/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPGSVSectionHeaderContext : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _headerMargins;
    UIView * _headerView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _subheaderMargins;
    UIView<PKPGSVSectionSubheaderView> * _subheaderView;
}

@property (nonatomic, readonly) double headerHeight;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } headerMargins;
@property (nonatomic, readonly) UIView *headerView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } subheaderMargins;
@property (nonatomic, readonly) UIView<PKPGSVSectionSubheaderView> *subheaderView;
@property (nonatomic, readonly) double totalHeight;

+ (id)createUpdatedHeaderContextForGroupStackView:(id)arg1 passType:(unsigned long long)arg2 currentContext:(id)arg3 allowHeader:(bool)arg4 allowSubheader:(bool)arg5;

- (void).cxx_destruct;
- (double)_headerHeight;
- (double)_subheaderHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForHeaderViewInContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForSubheaderViewInContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (double)headerHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })headerMargins;
- (id)headerView;
- (id)init;
- (id)initWithHeaderView:(id)arg1 headerMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 subheaderView:(id)arg3 subheaderMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })positionForHeaderViewInContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })positionForSubheaderViewInContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHeaderMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSubheaderMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })subheaderMargins;
- (id)subheaderView;
- (double)totalHeight;

@end
