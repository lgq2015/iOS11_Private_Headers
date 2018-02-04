/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUContactAutoFillValue : NSObject {
    NSString * _displayValue;
    NSString * _label;
    NSArray * _matches;
    bool  _selected;
}

@property (nonatomic, readonly, copy) NSString *displayValue;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) NSArray *matches;
@property (nonatomic) bool selected;

- (void).cxx_destruct;
- (id)displayValue;
- (id)initWithMatches:(id)arg1 displayValue:(id)arg2 label:(id)arg3;
- (id)label;
- (id)matches;
- (bool)selected;
- (void)setSelected:(bool)arg1;

@end
