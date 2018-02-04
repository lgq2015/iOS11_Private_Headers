/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

@interface NFProxyResolver : NSObject <NFResolver, NFValidationResolver> {
    NFContainerPool * _pool;
    <NFDefinitionContainer> * _privateContainer;
    <NFDefinitionContainer> * _publicContainer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NFContainerPool *pool;
@property (nonatomic, retain) <NFDefinitionContainer> *privateContainer;
@property (nonatomic, retain) <NFDefinitionContainer> *publicContainer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createProxyResolverForDefinition:(id)arg1;
- (void)ensure:(id)arg1 name:(id)arg2;
- (void)ensureClass:(Class)arg1;
- (void)ensureClass:(Class)arg1 name:(id)arg2;
- (void)ensureProtocol:(id)arg1;
- (void)ensureProtocol:(id)arg1 name:(id)arg2;
- (id)initWithPublicContainer:(id)arg1 privateContainer:(id)arg2 inPool:(id)arg3;
- (id)pool;
- (id)privateContainer;
- (id)publicContainer;
- (id)resolve:(id)arg1 name:(id)arg2 validateBlock:(id /* block */)arg3;
- (id)resolveClass:(Class)arg1;
- (id)resolveClass:(Class)arg1 name:(id)arg2;
- (id)resolveProtocol:(id)arg1;
- (id)resolveProtocol:(id)arg1 name:(id)arg2;
- (void)setPool:(id)arg1;
- (void)setPrivateContainer:(id)arg1;
- (void)setPublicContainer:(id)arg1;
- (id)unsafeResolveForKey:(id)arg1 name:(id)arg2;

@end
