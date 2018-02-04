/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUResolvedSource : NUSource {
    NUSourceDefinition * _resolvedSourceDefinition;
}

@property (retain) NUSourceDefinition *resolvedSourceDefinition;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)resolvedSourceDefinition;
- (void)setResolvedSourceDefinition:(id)arg1;
- (id)sourceDefinition:(out id*)arg1;

@end
