/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPMergeSmartField : TSWPPlaceholderSmartField {
    int  _category;
    NSString * _guid;
    NSString * _key;
    NSString * _label;
    NSString * _property;
    bool  _requiresFollowingWhitespace;
    NSString * _tableField;
    NSString * _whitespace;
}

@property (nonatomic) int category;
@property (nonatomic, copy) NSString *guid;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *property;
@property (nonatomic) bool requiresFollowingWhitespace;
@property (nonatomic, copy) NSString *tableField;
@property (nonatomic, copy) NSString *whitespace;

- (void).cxx_destruct;
- (bool)allowsPasteAsSmartField;
- (int)category;
- (id)copyWithContext:(id)arg1;
- (id)guid;
- (id)key;
- (id)label;
- (void)loadFromUnarchiver:(id)arg1;
- (id)property;
- (bool)requiresFollowingWhitespace;
- (void)saveToArchiver:(id)arg1;
- (id)scriptTag;
- (void)setCategory:(int)arg1;
- (void)setGuid:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setProperty:(id)arg1;
- (void)setRequiresFollowingWhitespace:(bool)arg1;
- (void)setTableField:(id)arg1;
- (void)setWhitespace:(id)arg1;
- (int)smartFieldKind;
- (id)tableField;
- (id)whitespace;

@end
