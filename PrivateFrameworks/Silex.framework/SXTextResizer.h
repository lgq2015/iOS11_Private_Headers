/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTextResizer : NSObject {
    SXColumnLayout * _columnLayout;
    SXComponentTextStyle * _defaultTextStyle;
}

@property (nonatomic, retain) SXColumnLayout *columnLayout;
@property (nonatomic, retain) SXComponentTextStyle *defaultTextStyle;

- (void).cxx_destruct;
- (id)columnLayout;
- (id)defaultTextStyle;
- (id)initWithColumnLayout:(id)arg1 andDefaultTextStyle:(id)arg2;
- (unsigned long long)resizeDropCapNumberOfLines:(long long)arg1;
- (long long)resizeTextSize:(long long)arg1 fontResizingThreshold:(double)arg2 fontSizeConstant:(double)arg3 contentSizeCategory:(id)arg4 fontTextStyle:(id)arg5;
- (void)setColumnLayout:(id)arg1;
- (void)setDefaultTextStyle:(id)arg1;

@end
