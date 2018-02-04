/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNMultiValueDiff : NSObject {
    NSArray * _updates;
}

@property (nonatomic, readonly, copy) NSArray *updates;

+ (id)diffMultiValue:(id)arg1 toMultiValue:(id)arg2;
+ (id)emptyDiff;

- (void).cxx_destruct;
- (bool)applyToABPerson:(void*)arg1 propertyDescription:(id)arg2 error:(id*)arg3;
- (id)description;
- (id)initWithUpdates:(id)arg1;
- (bool)isEmpty;
- (id)multiValueByApplyToMultiValue:(id)arg1 withIdentifierMap:(id)arg2;
- (id)updates;

@end
