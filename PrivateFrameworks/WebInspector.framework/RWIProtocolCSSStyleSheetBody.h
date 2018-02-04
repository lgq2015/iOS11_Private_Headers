/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolCSSStyleSheetBody : RWIProtocolJSONObject

@property (setter=ik_setRuleList:, nonatomic, retain) IKCSSRuleList *ik_ruleList;
@property (setter=ik_setTextNewLineIndexSet:, nonatomic, retain) NSIndexSet *ik_textNewLineIndexSet;
@property (nonatomic, copy) NSArray *rules;
@property (nonatomic, copy) NSString *styleSheetId;
@property (nonatomic, copy) NSString *text;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)initWithStyleSheetId:(id)arg1 rules:(id)arg2;
- (id)rules;
- (void)setRules:(id)arg1;
- (void)setStyleSheetId:(id)arg1;
- (void)setText:(id)arg1;
- (id)styleSheetId;
- (id)text;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

- (id)ik_ruleList;
- (void)ik_setRuleList:(id)arg1;
- (void)ik_setTextNewLineIndexSet:(id)arg1;
- (id)ik_textNewLineIndexSet;

@end
