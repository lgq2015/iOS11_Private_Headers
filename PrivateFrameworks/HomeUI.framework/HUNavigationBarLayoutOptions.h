/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUNavigationBarLayoutOptions : NSObject <NSCopying> {
    double  _bottomMargin;
    HUNavigationButtonLayoutOptions * _buttonLayoutOptions;
    double  _containerLeadingMargin;
    double  _containerTrailingMargin;
    double  _height;
    double  _topMargin;
    long long  _viewSizeSubclass;
}

@property (nonatomic) double bottomMargin;
@property (nonatomic, copy) HUNavigationButtonLayoutOptions *buttonLayoutOptions;
@property (nonatomic) double containerLeadingMargin;
@property (nonatomic) double containerTrailingMargin;
@property (nonatomic) double height;
@property (nonatomic, readonly) double leadingMargin;
@property (nonatomic) double topMargin;
@property (nonatomic, readonly) double trailingMargin;
@property (nonatomic, readonly) long long viewSizeSubclass;

+ (id)defaultOptionsForViewSizeSubclass:(long long)arg1 containerLeadingMargin:(double)arg2 containerTrailingMargin:(double)arg3;

- (void).cxx_destruct;
- (double)bottomMargin;
- (id)buttonLayoutOptions;
- (double)containerLeadingMargin;
- (double)containerTrailingMargin;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)height;
- (id)initWithViewSizeSubclass:(long long)arg1;
- (double)leadingMargin;
- (void)setBottomMargin:(double)arg1;
- (void)setButtonLayoutOptions:(id)arg1;
- (void)setContainerLeadingMargin:(double)arg1;
- (void)setContainerTrailingMargin:(double)arg1;
- (void)setHeight:(double)arg1;
- (void)setTopMargin:(double)arg1;
- (double)topMargin;
- (double)trailingMargin;
- (long long)viewSizeSubclass;

@end
