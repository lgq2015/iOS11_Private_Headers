/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridCellBackgroundDisplayOptions : NSObject <HUGridDisplayOptions, NSCopying> {
    UIVisualEffect * _backgroundVisualEffect;
    unsigned long long  _contentColorStyle;
    unsigned long long  _displayStyle;
}

@property (nonatomic, retain) UIVisualEffect *backgroundVisualEffect;
@property (nonatomic) unsigned long long contentColorStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultOptions;

- (void).cxx_destruct;
- (id)backgroundVisualEffect;
- (unsigned long long)contentColorStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)displayStyle;
- (void)setBackgroundVisualEffect:(id)arg1;
- (void)setContentColorStyle:(unsigned long long)arg1;
- (void)setDisplayStyle:(unsigned long long)arg1;

@end
