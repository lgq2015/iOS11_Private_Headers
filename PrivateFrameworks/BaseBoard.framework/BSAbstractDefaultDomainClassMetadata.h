/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSAbstractDefaultDomainClassMetadata : NSObject {
    NSMutableDictionary * _propertyNameToPropertyMap;
    NSMutableDictionary * _selectorToPropertyMap;
}

@property (nonatomic, retain) NSMutableDictionary *propertyNameToPropertyMap;
@property (nonatomic, retain) NSMutableDictionary *selectorToPropertyMap;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)propertyNameToPropertyMap;
- (id)selectorToPropertyMap;
- (void)setPropertyNameToPropertyMap:(id)arg1;
- (void)setSelectorToPropertyMap:(id)arg1;

@end
