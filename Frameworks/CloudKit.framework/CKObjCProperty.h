/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKObjCProperty : NSObject {
    Class  _classHandle;
    unsigned long long  _flags;
    NSMethodSignature * _getterMethodSignature;
    SEL  _getterSelector;
    NSString * _getterSelectorName;
    NSString * _instanceVariableName;
    NSString * _name;
    NSMethodSignature * _setterMethodSignature;
    SEL  _setterSelector;
    NSString * _setterSelectorName;
    CKObjCType * _type;
}

@property (nonatomic, readonly) Class classHandle;
@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly) NSMethodSignature *getterMethodSignature;
@property (nonatomic, readonly) SEL getterSelector;
@property (nonatomic, readonly) NSString *getterSelectorName;
@property (nonatomic, readonly) NSString *instanceVariableName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSMethodSignature *setterMethodSignature;
@property (nonatomic, readonly) SEL setterSelector;
@property (nonatomic, readonly) NSString *setterSelectorName;
@property (nonatomic, readonly) CKObjCType *type;

- (void).cxx_destruct;
- (Class)classHandle;
- (long long)compare:(id)arg1;
- (long long)compareToProperty:(id)arg1;
- (unsigned long long)flags;
- (id)getFromObject:(id)arg1;
- (id)getterMethodSignature;
- (SEL)getterSelector;
- (id)getterSelectorName;
- (id)initWithClass:(Class)arg1 property:(struct objc_property { }*)arg2;
- (id)instanceVariableName;
- (id)name;
- (void)setValue:(id)arg1 onObject:(id)arg2;
- (id)setterMethodSignature;
- (SEL)setterSelector;
- (id)setterSelectorName;
- (id)type;

@end
