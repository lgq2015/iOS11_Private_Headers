/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

@interface NFContainer : NSObject <NFDefinitionContainer, NFRegistrationContainer> {
    NSMutableDictionary * _definitions;
    NFContainerPool * _pool;
    NSMutableDictionary * _privateContainers;
    <NFResolver> * _resolver;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableDictionary *definitions;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NFContainerPool *pool;
@property (nonatomic, retain) NSMutableDictionary *privateContainers;
@property (nonatomic, retain) <NFResolver> *resolver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)definitionForKey:(id)arg1;
- (id)definitions;
- (id)init;
- (id)initAsPrivateContainer;
- (id)initWithAssemblies:(id)arg1;
- (id)pool;
- (id)privateContainers;
- (id)register:(id)arg1 name:(id)arg2 createDefinitionBlock:(id /* block */)arg3;
- (id)registerClass:(Class)arg1 factory:(id /* block */)arg2;
- (id)registerClass:(Class)arg1 name:(id)arg2 factory:(id /* block */)arg3;
- (id)registerProtocol:(id)arg1 factory:(id /* block */)arg2;
- (id)registerProtocol:(id)arg1 name:(id)arg2 factory:(id /* block */)arg3;
- (id)resolver;
- (void)setDefinitions:(id)arg1;
- (void)setPool:(id)arg1;
- (void)setPrivateContainers:(id)arg1;
- (void)setResolver:(id)arg1;
- (id)unsafeRegisterForKey:(id)arg1 name:(id)arg2 factory:(id /* block */)arg3;
- (void)validateDefinitionsWithProxyResolver:(id)arg1;

@end
