/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFClientPluginBundle : NSObject {
    NSMutableDictionary * _classIdentifiers;
    Class  _factoryClass;
    id  _factoryInstance;
}

@property (nonatomic, retain) NSMutableDictionary *classIdentifiers;
@property (nonatomic, retain) Class factoryClass;
@property (nonatomic, retain) id factoryInstance;

- (void).cxx_destruct;
- (id)classIdentifiers;
- (Class)factoryClass;
- (id)factoryInstance;
- (id)init;
- (void)registerClassIdentifier:(id)arg1 forDomain:(id)arg2 inGroup:(id)arg3;
- (void)setClassIdentifiers:(id)arg1;
- (void)setFactoryClass:(Class)arg1;
- (void)setFactoryInstance:(id)arg1;
- (bool)supportsClassIdentifier:(id)arg1 forDomainKey:(id)arg2 groupIdentifier:(id)arg3;

@end
