/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardParsedLine : NSObject {
    NSString * _grouping;
    bool  _isPrimary;
    NSString * _name;
    NSArray * _parameters;
    id  _value;
}

@property (copy) NSString *grouping;
@property bool isPrimary;
@property (readonly, copy) NSString *name;
@property (copy) NSArray *parameters;
@property (retain) id value;

- (void).cxx_destruct;
- (id)description;
- (id)grouping;
- (id)initWithName:(id)arg1;
- (bool)isPrimary;
- (id)name;
- (id)parameters;
- (void)setGrouping:(id)arg1;
- (void)setIsPrimary:(bool)arg1;
- (void)setParameters:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
