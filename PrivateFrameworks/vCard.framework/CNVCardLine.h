/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardLine : NSObject <CNVCardParameterLine> {
    NSMutableArray * _groupedLines;
    NSString * _grouping;
    NSString * _itemSeparator;
    NSString * _name;
    NSMutableArray * _parameters;
    id  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *groupedLines;
@property (readonly) NSString *groupingName;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *itemSeparator;
@property (readonly) NSString *name;
@property (readonly) NSArray *parameters;
@property (readonly) Class superclass;
@property (readonly) id value;

+ (id)lineWithLiteralValue:(id)arg1;
+ (id)lineWithName:(id)arg1 value:(id)arg2;
+ (id)lineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3;
+ (id)versionPlaceholderLine;

- (void).cxx_destruct;
- (void)addGroupedLine:(id)arg1 withCounter:(long long*)arg2;
- (void)addParameterWithName:(id)arg1 value:(id)arg2;
- (bool)canSerializeWithStrategy:(id)arg1;
- (id)groupedLines;
- (id)groupingName;
- (id)initWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3;
- (void)insertParameterWithName:(id)arg1 value:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)itemSeparator;
- (id)makeGroupingNameWithCounter:(long long*)arg1;
- (id)name;
- (id)parameters;
- (void)serializeValueWithStrategy:(id)arg1;
- (void)serializeWithStrategy:(id)arg1;
- (id)value;

@end
