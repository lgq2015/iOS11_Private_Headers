/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLCodingPropertyEntry : NSObject {
    struct objc_ivar { } * _ivar;
    NSSet * _propertyClasses;
    SEL  _propertyGetter;
    int (* _propertyGetterIMP;
    SEL  _propertySetter;
    int (* _propertySetterIMP;
    BOOL  _propertyType;
    bool  _readOnly;
    NSString * _structName;
}

@property (nonatomic) struct objc_ivar { }*ivar;
@property (nonatomic, retain) NSSet *propertyClasses;
@property (nonatomic) SEL propertyGetter;
@property (nonatomic) int (*propertyGetterIMP;
@property (nonatomic) SEL propertySetter;
@property (nonatomic) int (*propertySetterIMP;
@property (nonatomic) BOOL propertyType;
@property (getter=isReadOnly, nonatomic) bool readOnly;
@property (nonatomic, copy) NSString *structName;

- (void).cxx_destruct;
- (bool)isReadOnly;
- (struct objc_ivar { }*)ivar;
- (void*)ivarAddrForObject:(id)arg1;
- (id)ivarValueForObject:(id)arg1;
- (id)propertyClasses;
- (SEL)propertyGetter;
- (int (*)propertyGetterIMP;
- (SEL)propertySetter;
- (int (*)propertySetterIMP;
- (BOOL)propertyType;
- (void)setIvar:(struct objc_ivar { }*)arg1;
- (void)setIvarValue:(id)arg1 forObject:(id)arg2;
- (void)setPropertyClasses:(id)arg1;
- (void)setPropertyGetter:(SEL)arg1;
- (void)setPropertyGetterIMP:(int (*)arg1;
- (void)setPropertySetter:(SEL)arg1;
- (void)setPropertySetterIMP:(int (*)arg1;
- (void)setPropertyType:(BOOL)arg1;
- (void)setReadOnly:(bool)arg1;
- (void)setStructName:(id)arg1;
- (id)structName;

@end
