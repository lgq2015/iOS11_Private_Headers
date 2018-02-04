/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUMultipleSourceDefinition : NUSourceDefinition {
    NSArray * _sourceDefinitions;
}

@property (readonly) NSArray *sourceDefinitions;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSourceDefinitions:(id)arg1;
- (id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id*)arg2;
- (id)sourceDefinitions;

@end
