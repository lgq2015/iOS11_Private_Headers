/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUDynamicScrollingOptions : NSObject {
    struct { 
        double minScrollPercentage; 
        double maxScrollPercentage; 
        double maxValue; 
    }  _textScaleSetting;
    long long  _viewSizeSubclass;
}

@property (nonatomic) struct { double x1; double x2; double x3; } textScaleSetting;
@property (nonatomic, readonly) long long viewSizeSubclass;

+ (id)_defaultOptionsWithStatusSectionForViewSizeSubclass:(long long)arg1;
+ (id)_defaultOptionsWithoutStatusSectionForViewSizeSubclass:(long long)arg1;
+ (id)defaultOptionsForViewSizeSubclass:(long long)arg1 showsStatusSection:(bool)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithViewSizeSubclass:(long long)arg1;
- (void)setTextScaleSetting:(struct { double x1; double x2; double x3; })arg1;
- (struct { double x1; double x2; double x3; })textScaleSetting;
- (long long)viewSizeSubclass;

@end
