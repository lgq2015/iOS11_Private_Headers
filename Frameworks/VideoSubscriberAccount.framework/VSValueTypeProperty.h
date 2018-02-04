/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSValueTypeProperty : NSObject {
    NSSet * _allowedClasses;
    id  _initialValue;
    unsigned long long  _kind;
    NSString * _name;
}

@property (nonatomic, copy) NSSet *allowedClasses;
@property (nonatomic, retain) id initialValue;
@property (nonatomic) unsigned long long kind;
@property (nonatomic, copy) NSString *name;

+ (id)valueTypePropertyWithName:(id)arg1 kind:(unsigned long long)arg2 allowedClasses:(id)arg3 initialValue:(id)arg4;

- (void).cxx_destruct;
- (id)allowedClasses;
- (id)initialValue;
- (unsigned long long)kind;
- (id)name;
- (void)setAllowedClasses:(id)arg1;
- (void)setInitialValue:(id)arg1;
- (void)setKind:(unsigned long long)arg1;
- (void)setName:(id)arg1;

@end
