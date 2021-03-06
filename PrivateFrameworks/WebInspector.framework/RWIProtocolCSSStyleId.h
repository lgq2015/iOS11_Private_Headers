/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolCSSStyleId : RWIProtocolJSONObject

@property (nonatomic) int ordinal;
@property (nonatomic, copy) NSString *styleSheetId;

- (id)initWithStyleSheetId:(id)arg1 ordinal:(int)arg2;
- (int)ordinal;
- (void)setOrdinal:(int)arg1;
- (void)setStyleSheetId:(id)arg1;
- (id)styleSheetId;

@end
