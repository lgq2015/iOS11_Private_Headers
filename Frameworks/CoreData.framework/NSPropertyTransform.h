/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPropertyTransform : NSObject {
    NSPropertyTransform * _prerequisiteTransform;
    NSString * _propertyName;
    bool  _replaceMissingValueOnly;
    NSExpression * _valueExpression;
}

@property (nonatomic, retain) NSPropertyTransform *prerequisiteTransform;
@property (nonatomic, retain) NSString *propertyName;
@property bool replaceMissingValueOnly;
@property (nonatomic, retain) NSExpression *valueExpression;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyName:(id)arg1 valueExpression:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)prerequisiteTransform;
- (id)propertyName;
- (bool)replaceMissingValueOnly;
- (void)setPrerequisiteTransform:(id)arg1;
- (void)setPropertyName:(id)arg1;
- (void)setReplaceMissingValueOnly:(bool)arg1;
- (void)setValueExpression:(id)arg1;
- (id)valueExpression;

@end
