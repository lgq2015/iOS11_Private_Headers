/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABVCardParameter : NSObject {
    NSString * _grouping;
    NSString * _name;
    bool  _primary;
    NSMutableArray * _types;
    id  _value;
}

- (void)addType:(id)arg1;
- (void)addTypes:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)grouping;
- (id)initWithName:(id)arg1;
- (bool)isPrimary;
- (id)name;
- (void)setGrouping:(id)arg1;
- (void)setIsPrimary:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)types;
- (id)value;

@end
